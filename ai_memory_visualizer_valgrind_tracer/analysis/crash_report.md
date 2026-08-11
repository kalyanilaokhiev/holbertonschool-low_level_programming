## Crash Report

When running ./crash, the program prints 2 output lines before terminating with 'Segmentation fault (core dumped). A segmentation fault is not the main bug itself, but the OS' automatic response when a process tried to access a memory location it does not have permission to read or write. The crash occurs on line 'nums[0] = 42;' when the CPU catches an invalid write operation to memory address 0x0.

The crash is caused by a null pointer dereference. In main(), the variable n is set to 0 and passed into allocate_numbers(n). Inside allocate_numbers(), the 'if (n <= 0) immediately triggers and returns NULL without calling malloc(). This results to the pointer variable nums on the main() stack frame receiving the value NULL (0x0).

When main() attempts to execture 'nums[0] - 42', it tries to write the integer 42 into memory address 0x0. Address 0x0 is a protected memory page that is reserved by the OS, so attempting to write to it causes an error. No heap memory was involved in this crash because malloc() was never called. The bug is an unchecked NULL pointer stored on the stack being dereferenced.
