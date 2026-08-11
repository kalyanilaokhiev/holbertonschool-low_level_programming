## Aliasing example

Valgrind discovered 3 different runtime errors. The first issue is an 'Invalid read of size 4' when attempting to access b[2], then an 'Invalid write of size 4' when writing b[3] = 1234, and lastly, an 'Invalid read of size 4' when printing b[3]. All 3 issues are linked to an address inside a 20 byte block that had already been freed. No memory leaks were shown at program exit becuase the single allocated heap block was deallocated successfully using free(a).

The memory object that was involved in all 3 issues is a 20 byte heap buffer (5 * sizeof(int)), created by malloc() inside make_numbers() function. Pointer aliasing occurs in main() where b = a copies the starting address (0x4a90480) into pointer b, resulting in 2 stack variables referencing the same physical heap memory. 

The lifetime violation that caused the invalid reads and write is a use-after-free error which is caused by accessing a dangling pointer. Calling free(a) immediatly terminates the valid dynamic lifetime of the 20 byte heap block, returning that memory to the OS heap manager. However, free() only updates heap data, leaving stack variables untouched. This means, the pointer b is not zeroed or set to NULL, becoming a dangling pointer that still holds the address 0x4a90480. Attempting to dereference b[2] and assign b[3] = 1234 violates memory access rules because the heap obejct's lifetime has already ended, leading to heap memory corruption.

## Heap example

Running valgrind on heap_example resulted in 1 memory leak issue, being 6 bytes in 1 block are definitely lost. Valgrind reported 0 invalid reads, invalid writes, or operations on unitialised memory during program execution. The total heap summary confirms that while 5 total allocations occured during runtime, only 4 frees were executed, leaving 6 bytes in use when program exit occurs. 

The memory object involved in this memory leak is a 6 byte dynamic character array allocated on the heap via malloc() inside person_new(). This 6 byte allocation corresponds to the null-terminated string buffer "Alice\0" (5 characters + 1 null terminator) assinged to p->name struct member at address 0x4a904d0.

The lifetime misuse that caused this leak is a 'memory leak due to partial free and lost ownership. Creation of a person object required 2 seperate heap allocations: 1 for the person struct container itself (alice) and 1 for its inner name string buffer (alice->name). During deallocation, person_free_partial() calls free(p) on the outer struct container without first freeing p->name. Because the container struct is freed first, the pointer holding the memory address of "Alice\0" (0x4a904d0) is erased from memory. The 6 byte string buffer remained allocated on the heap with 0 pointers pointing to it, preventing it from ever being freed and resulting in a loss of memory ownership.

## AI explaination error
Once again, there was no particular error AI gave me as the valgrind errors as the task was not too difficult. However, like previously, it did not go in as much depth as I wanted. I had to look back at the code and see where things were called and used and add it in the explaination.
