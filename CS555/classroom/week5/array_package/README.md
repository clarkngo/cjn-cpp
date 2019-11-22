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

# Classroom Learnings
## Create a static library

1. Creates a binary file from Array.cpp
- outputs `.o` file
```
g++ -I ./ -c Array.cpp  -o Array.o
```

2. Archives the binary file
- outputs `.o` file
```
ar rcs lib/libArray.a Array.o
```

4. list and demangle

```
c++filt libArray.a
```

4. verify the methods

```
nm lib/libArray.a
```
Output:
```

lib/libArray.a(Array.o):
0000000000000580 s GCC_except_table7
                 U __Unwind_Resume
0000000000000480 T __ZN5Array3addERKS_
0000000000000460 T __ZN5Array3lenEv
00000000000002d0 T __ZN5Array5printEv
00000000000000c0 T __ZN5ArrayC1Ei
0000000000000000 T __ZN5ArrayC2Ei
0000000000000180 T __ZN5ArrayD1Ev
00000000000000f0 T __ZN5ArrayD2Ev
00000000000001a0 T __ZN5ArrayaSERKS_
00000000000004e0 T __ZN5ArrayeqERKS_
0000000000000280 T __ZN5ArrayixEi
                 U __ZNKSt3__16locale9use_facetERNS0_2idE
                 U __ZNKSt3__18ios_base6getlocEv
                 U __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
                 U __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
                 U __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                 U __ZNSt3__14coutE
0000000000000350 T __ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
                 U __ZNSt3__15ctypeIcE2idE
                 U __ZNSt3__16localeD1Ev
                 U __ZSt9terminatev
                 U __ZdaPv
                 U __ZdlPv
                 U __Znam
0000000000000570 T ___clang_call_terminate
                 U ___cxa_begin_catch
                 U ___gxx_personality_v0
```
5. test a method
```
c++filt libArray.a __ZN5Array5printEv
```
Output:
```
libArray.a
Array::print()
```

6. send the `Array.h` and `libArray.a`

## Using a static library

g++ -I .\inc -L .\lib -static main.cpp -lArray -o main.out