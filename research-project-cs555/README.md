# Research Project

## RSA in C++ for encryption and decryption of texts

### Background

This well-known algorithm was published in the 1977 by Rivest-Shamir-Adleman at MIT, and it is one of the earliest public-key cryptosystems, and is widely used for data security transmission. It involves key generation using 2 unique prime numbers (p,q). It generates ‘public key’ and ‘private key’. Each key is responsible for encryption and decryption, respectively. Key distribution involves sharing public key and sending private key for future data exchange. Supposed that Bob wants to send data to Alice. Bob should knkow Alice’s public key (hence called public) to encrypt the message before sending it out to Alice. And Alice should use her private key to decrypt the message that was encrypted with her public key. To allow Bot to send his encrypted messages, Alice then transmits her public key to Bob thru secured route. Note that their private keys must not be shared but only public key. The message gets first encrypted using the public key prior to transmission. Then the receiver gets the message, and uses his/her private for decryption.

### Assignment

In this project, you will implement RSA algorithm in C++ to encrypt and decrypt the text strings.

### RSA algorithm to encrypt and decrypt the string in C++

It involves the use of public and private key, where the public key is known to all and used for encryption. On the other hand, Private key is only used to decrypt the encrypted message.

Here is the deeper look at the steps of encryption algorithm:

#### 1: Key Generation

Select two large prime numbers `x` and `y`
Compute `n = x * y`
where n is the modulus of private and the public key
Calculate totient function, `ø (n) = (x − 1)(y − 1)`
Choose an integer `e` such that `e` is coprime to `ø(n)` and `1 < e < ø(n)`.
`e` is the public key exponent used for encryption
Now choose  `d`, so that `d · e mod ø (n) = 1`, i.e., >code>d is the multiplicative inverse of `e` in `mod ø (n)`

#### 2: Encryption

Messages are encrypted using the Public key generated and is known to all.

The public key is the function of both `e` and n i.e. `{e,n}`.

If `M` is the message(plain text), then ciphertext

`C = M ^ n( mod n )`

#### 3: Decryption

The private key is the function of both `d` and `n` i.e `{d,n}`.

If `C` is the encrypted ciphertext, then the plain decrypted text `M` is

M = C ^ d ( mod n )

### Requirements

This assignment requires you write the algorithm in pseudo-code (in comment blocks of your important coding blocks). First, design the algorithm in objects, that is classes. The large 2 prime numbers can be predefined by you rather than taking them as an input. You’ll implement classes that are responsible for keys, generations, encryption/description. Second, you then start implementing in C++ with various class definitions including data and member methods. There are many resources internet including source code. I highly encourage you to survey and research how they implement and obtain the ideas. Please do not copy the code but understand and learn their ideas for your implementation.

You will prompt to get the text from the user
Then you will execute RSA
Finally you will print the message as in
“input string” à “output string” (encrypted)

Then use the encrypted message back into your program, then print the decrypted message.
More details will be provided throughout the classes, and we’ll focus on the algorithm during Module 4.


## Video Walkthrough and Demo
[![RP Demo](http://img.youtube.com/vi/TO_BE_UPDATED/0.jpg)](https://www.youtube.com/watch?v=TO_BE_UPDATED "RP Demo")

## Project Location
- https://github.com/clarkngo/cpp-projects/tree/master/research-project-cs555

## Software requirements
- C++17
- Compiler
  - Mac: clang 10.0.0
    - Check clang version:
    - `echo | clang -dM -E - | grep __clang`
  - Windows: mingw-w64 v3.1.0

## Setup your development environment / Installation
Please follow instructions on:
- Mac: https://github.com/clarkngo/cpp-projects/tree/master/cpp_project_setup/mac
- Windows: https://github.com/clarkngo/cpp-projects/tree/master/cpp_project_setup/windows

## Compile and Run the Project
1. If a Windows user, please replace `.vscode` contents with `windows/.vscode`.
2. VS Code Menu > Terminal > Run Build Task
3. Run
- Mac: `./main.out`
- Windows powershell: `./main.exe`
- Windows cmd: `main.exe`

## Project Requirements
- C++

## File Structure
- `rsa.h` header file
- `rsa.cpp` implementation file
- `main.cpp` main program

## UI Requirements
- user input in console
- print output in console

## Program Flow
- Execute main program
- Set 1st Prime Number
- Set 2nd Prime Number
- Compute the product of 1st and 2nd prime numbers
- Compute for Phi using 1st and 2nd prime numbers
- Set an Encryption Number
  - make the encryption number a coprime
- Set the Message to be encrypted
- Start encrypting the message with the encryption number
- Compute for Decryption Number using Encryption Number and Phi
- Prepare for Decryption by operating with the Encrypted Message and Decryption Number
- End on encrypting the message with encrypted message and product of primes
- Complete set up for Decryption
- Print original message
- Print encrypted message
- Print decrypted message
- End of Program

# Lessons Learned

# Future Improvements

# Classroom Learnings

# Sources
[RSA Algorithm in Cryptography](https://www.geeksforgeeks.org/rsa-algorithm-cryptography/)

[C++ Program to Implement the RSA Algorithm](https://www.tutorialspoint.com/cplusplus-program-to-implement-the-rsa-algorithm)

[Create Fast Prime Number Generator In C++](https://www.youtube.com/watch?v=xF3oiHmc3pI)

# Support
Bug reports and feature requests can be filed here:

[File Bug Reports and Features](https://github.com/clarkngo/cpp-projects/issues)

# License
Released under the MIT license.

# Copyright
&copy; Copyright 2019 Clark Jason Ngo. All Rights Reserved.
