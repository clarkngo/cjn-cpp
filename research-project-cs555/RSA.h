// Author @Clark Jason Ngo
#pragma once
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class RSA
{
    private:
        double _p;          // 1st prime number
        double _q;          // 2nd prime number
		double _n;          // product of 2 prime numbers
		double _phi;        // product of 1st prime - 1 and 2nd prime - 1
        double _e;          // encrypt
        double _d;          // decrypt
        double _c;          // encrypted message
        double _m;          // decrypted message
        double _message;    // original message

    public:
        RSA();  // constructor

        /* SETTERS */
        void setPrimeNum1(double);
        void setPrimeNum2(double);
        void setProductOfPrimes(double);
        void setPhi(double);
        void setEncryptNum(double);
        void setMessageNum(double);
        void setDecryptNum(double);
		void setEncryptMessage(double);
		void setDecryption(double);

        /* GETTERS */
        double getPrimeNum1() const;
        double getPrimeNum2() const;
        double getProductOfPrimes() const;
        double getPhi() const;
        double getEncryptNum() const;
        double getDecryptNum() const;
        double getMessageNum() const;
        double getEncryptedMessage() const;
        double getDecryptedMessage() const;

        /* COMPUTATIONS */
		// helper function for makeCoprime
        int gcd(int, int);
        // 1 < e < phi and gcd = 1
        void makeCoprime(double, double);
        // multiply 1st prime and 2nd prime
        double computeProductOfPrimes(double, double);
        // multiply 1st prime -1 and 2nd prime -1
        double computePhi(double, double);
        // remainder of division of 1 divided by e and phi
        double computeDecryptNum(double, double);
        // original message as base, then raise to the e-th power
        double computeEncryptMessage(double, double);
        // encrypted message as base, then raise to the d-th power
        double computeDecryptMessage(double, double);
        // remainder of division of encrypted message and product of primes
        double computeRemainderDivisionEncryptedMessage(double, double);
        // remainder of division of decryption and product of primes
        double computeRemainderDivisionDecryption(double, double);

        void run();
};
