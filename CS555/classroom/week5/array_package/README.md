# Week 5

## pointers
pointer holds the address and the value from the address

1) can't change the value on that address but can change the address
```
const int *p = &c_age;
```

2) can't change the address, but can change the value
```
int * const p = &c_age;
```

3) can't change the address and also the value on that address
```
const int *const p = &c_age;
```

## `const`
Use a `const` in a getter function
```
int getX() const
{
  return x;
}
```
Note: calling non-const within a const function will throw an error

## Dynamic Allocation
Using `new`, you should `delete` it in C++.

Java has garbage collection
