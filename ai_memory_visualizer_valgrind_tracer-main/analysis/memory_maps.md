## Stack example

#### Key execution points where memory state changes
During the recustion and stack example, there are 4 stages during the execution.

The first key point where the memory state changes is when main() calls walk_stack(0, 3), where a new stack frame from walk_stack is created at depth 0. 

At the next point, recurssion occurs. During each call from depth 0 to 3, the walk_stack() allocates a local variable marker and calls dump_frame(). dump_frame allocates 3 variables. local_int which holds data inside stack frame and at each recursion, a new int is created at a lower memory. local_buf holds a block of 16 bytes in the stack frame to hold characters, acting the same way as local_int during recursion. Lastly, p_local holds the memory address of another variable (local_int), instead of storing the number, its value is the location number. In the compiled code, you can see that the memory addresses decrease as the depth increase. This proves that the stack grows downwards to lower memory addresses. 

At this point, the maximum depth is reached, aka. depth = 3. The stack is at its maximum recursion depth.

Finally, as the functions finish returning from depth = 3 back to depth = 0, the stack frames are popped off in reverse order. Their memory locations are marked invalid or free for future frame allocations.

Variable lifetime in the stack is automatically, as soon as a function finishes, the lifetime ends and returns. 

#### Step-by-step memory map
========================================================================================
STEP 1: Deepest Recursion Point (depth=3) - Stack at Maximum Size
========================================================================================

High Memory Address (Top of Stack Space)
+--------------------------------------------------------------------------------------+
| main() Frame                                                                         |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=0) Frame                                                            |
|   marker = 0                            (&marker = 0x7fff0cf05fc4)                   |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=1) Frame                                                            |
|   marker = 10                           (&marker = 0x7fff0cf05f94)                   |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=2) Frame                                                            |
|   marker = 20                           (&marker = 0x7fff0cf05f64)                   |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=3) Frame                                                            |
|   marker = 30                           (&marker = 0x7fff0cf05f34)                   |
+--------------------------------------------------------------------------------------+
| dump_frame(depth=3) Frame                                                            |
|   local_int = 103                       (&local_int = 0x7fff0cf05ee4)                ||   p_local = 0x7fff0cf05ee4d              (points to local_int)                        
|   local buf = "D\0..."                  (&local_buf  = 0x7fff0cf05ef0)                |
+--------------------------------------------------------------------------------------+ <-- Stack Pointer (RSP)
Low Memory Address

========================================================================================
STEP 2: Unwinding Stack (dump_frame and walk_stack depth=3 Exit & Popped)
========================================================================================

High Memory Address
+--------------------------------------------------------------------------------------+
| main() Frame                                                                         |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=0) Frame                                                            |
|   marker = 0                            (&marker = 0x7fff0cf05fc4)                   |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=1) Frame                                                            |
|   marker = 10                           (&marker = 0x7fff0cf05f94)                   |
+--------------------------------------------------------------------------------------+
| walk_stack(depth=2) Frame                                                            |
|   marker = 20                           (&marker = 0x7fff0cf05f64)                   |
+--------------------------------------------------------------------------------------+ <-- Stack Pointer (RSP)
| [INVALID / EXPIRED SCOPE]                                                            |
| (Previous depth=3 frames popped off stack. Pointers to these addresses are dangling)  

## Aliasing example

#### Key execution points where memory state changes
In aliasing example, there are also 4 main key points during execution.

The first point, make_numbers(5) calls malloc() to request memory for 5 ints on the heap. The starting address returned by malloc is the pointer a (0x624f7c227420).

THe memory address that is stored in a, is then copied into b. Now, a and b both hold the same memory address because they reference the same physical heap memory. Both a[2] and b[2] are 22. 

free(a) tells the allocator that the memory block a is no longer needed and can now be reused. Pointer b is not updated or zeroes. This results in a dangling pointer that is still holding 0x624f7c227420.

Reading b[2] does not print the correct thing, proving that the original data was invalidated by the heap manager. Writing b[3] = 1234 changed the memory that the program no longer owns, corrupting the heap state (use-after-free).

On the heap, variable lifetime starts when malloc() runs and reutrns a valid memory address and ends when free() is called.

## Step-by-step memory map
========================================================================================
STEP 1: Before free(a) — Active Heap Allocation with Pointer Aliasing
========================================================================================

STACK REGION                                     HEAP REGION
+-----------------------+                        +-------------------------------------+
| a: 0x61b9ade9a420     |--------------------->  | Address: 0x61b9ade9a420             |
+-----------------------+                        | Values:  [0, 11, 22, 33, 44]        |
| b: 0x61b9ade9a420     |--------------------->  | Status:  ALLOCATED (5 * sizeof(int))|
+-----------------------+                        +-------------------------------------+


========================================================================================
STEP 2: After free(a) — Use-After-Free State (Dangling Pointer)
========================================================================================

STACK REGION                                     HEAP REGION
+-----------------------+                        +-------------------------------------+
| a: 0x61b9ade9a420     | (Dangling Pointer)     | Address: 0x61b9ade9a420             |
+-----------------------+                        | Status:  FREED / UNALLOCATED        |
| b: 0x61b9ade9a420     |--------------------->  | b[2] read -> -362593837 (Garbage)   |
+-----------------------+                        | b[3] write -> 1234 (Heap Corruption)|
                                                 +-------------------------------------+
## Any inaccuracies, missing details, or incorrect assumptions
The AI tool used in my analysis is Gemini Pro. Although it did not give me any incorrect assumptions, it did not go as in depth as I wanted it to explain things to me. Thus, I would consider there are missing details. Particulary, in the stack exmaple, AI told my the general idea of what each key point was doing but not what was being done inside it, leaving me a little confused. To overcome this, I read through the code carefully as well as conducted my own research to figure out what each variable meant in for e.g. dump_frame.

Another thing AI did not add was the variable lifetimes in stack and heap. I corrected this by researching the difference and adding a brief explaination. 

In the aliasing example, there was an inaccuracy in the memory addresses provided, with one letter being different to the actual memory address.
