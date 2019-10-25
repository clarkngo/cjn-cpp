# Pointers in C++
Address is much cheaper in memory to point

Value to Address, use `&` "referencing"

Address to Value, use `*` "deferencing"

Use case
- linked list
- pass the object to the method
- for function return value to persist (pass by value, pass by reference)

Benefits
- Pointers provide direct access to memory
- Pointers provide a way to return more than one value to the functions
- Reduces the storage space and complexity of the program
- Reduces the execution time of the program
- Provides an alternate way to access array elements
- Pointers can be used to pass information back and forth between the calling function and called function.
- Pointers allows us to perform dynamic memory allocation and deallocation.
- Pointers helps us to build complex data structures like linked list, stack, queues, trees, graphs etc.
- Pointers allows us to resize the dynamically allocated memory block.
- Addresses of objects can be extracted using pointers

Disadvantages
- Uninitialized pointers might cause segmentation fault.
- Dynamically allocated block needs to be freed explicitly. Otherwise, it would lead to memory leak.
- Pointers are slower than normal variables.
- If pointers are updated with incorrect values, it might lead to memory corruption.
Source: http://see-programming.blogspot.com/2013/10/advantages-and-disadvantages-of.html

Pointers
- scattered memory

Arrays
- contiguous memory

Array Pointer
- Can store the original of array

```
|   Var   | Value | Addr |
|  nValue |   20  | fec8 |
|  nPtr   |  fec8 |      |
```

`*nPtr *` -> Value of
