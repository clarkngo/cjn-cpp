// Author @Clark Jason Ngo
#include "RSA.h"     /* time */
RSA::RSA() {} // constructor

// SETTERS
void RSA::setPrimeNum1(double p) {_p = p;}
void RSA::setPrimeNum2(double q) {_q = q;}
void RSA::setProductOfPrimes(double n){_n = n;}
void RSA::setEncryptNum(double e) {_e = e;}
void RSA::setPhi(double phi){_phi = phi;}
void RSA::setMessageNum(double message) {_message = message;}
void RSA::setDecryptNum(double d) {_d = d;}
void RSA::setEncryptMessage(double c) {_c = c;}
void RSA::setDecryption(double m) {_m = m;}

// GETTERS
double RSA::getPrimeNum1() const {return _p;}
double RSA::getPrimeNum2() const {return _q;}
double RSA::getProductOfPrimes() const {return _n;}
double RSA::getPhi() const {return _phi;}
double RSA::getEncryptNum() const {return _e;}
double RSA::getDecryptNum() const {return _d;}
double RSA::getMessageNum() const {return _message;}
double RSA::getEncryptedMessage() const {return _c;}
double RSA::getDecryptedMessage() const {return _m;}

// COMPUTATIONS
// find greatest common denominator
int RSA::gcd(int a, int b)
{
	int t;
	while(1) {
		t = a % b;
		if (t == 0)
			return b;
		a = b;
		b = t;
   }
}

// 1 < e < phi and gcd(e, phi) = 1
// e and phi are coprime
void RSA::makeCoprime(double e, double phi)
{
	double track;
	while(e < phi) {
      track = gcd(e, phi);
      if(track == 1)
        	break;
      else
        	e++;
   }
	 _e = e;
}
// first part of the public key
double RSA::computeProductOfPrimes(double p, double q)
{
    double n = getPrimeNum1() * getPrimeNum2();
    return n;
}

// get the product of p - 1
double RSA::computePhi(double p, double q)
{
	return (p - 1) * (q - 1);
}
// compute remainder of division of 1/_e and _phi
// this is the private key
double RSA::computeDecryptNum(double e, double phi)
{
	double d = fmod(1/e,phi);
	return d;
}
// 1st half of encrypting message
double RSA::computeEncryptMessage(double message, double e)
{
  	double c = pow(message,e); //encrypt the message
	return c;
}
// 1st half of decrypting message
double RSA::computeDecryptMessage(double c, double d)
{
	double m = pow(c, d);
	return m;
}
// compute remainder of division of encrypted message and product of primes
double RSA::computeRemainderDivisionEncryptedMessage(double c, double n)
{
	c = fmod(c, n);	// return double type remainder of c / n
	return c;
}
// compute remainder of division of _m and product of primes
double RSA::computeRemainderDivisionDecryption(double m, double n)
{
	m = fmod(m, n);	// return double type remainder of m / n
	return m;
}

// GENERATION
void RSA::generateKey()
{

}

void RSA::run()
{
	// set variable _p
  setPrimeNum1(53);
	// set variable _q
  setPrimeNum2(19727);
	// set variable _n. _n = _p * _q
	// first part of the public key
  setProductOfPrimes(computeProductOfPrimes(getPrimeNum1(), getPrimeNum2()));
  // set variable _phi. _phi = (_p - 1) * (_q - 1)
	setPhi(computePhi(getPrimeNum1(), getPrimeNum2()));
	// set variable _e
	// _e for encrypt
	// looks for the other part of public key
  setEncryptNum(7);
	// 1 < e < phi and gcd(e, phi) = 1
	// e and phi are coprime
  makeCoprime(getEncryptNum(), getPhi());
	// set variable _message
	// this is the original message
  setMessageNum(9);
	// 1st half of encrypting message
	// _c = base _message and raise to _e
  setEncryptMessage(computeEncryptMessage(getMessageNum(), getEncryptNum()));
  // _d = fmod(1/_e, _phi)
	// compute remainder of division of 1/_e and _phi
	// this is the private key
	setDecryptNum(computeDecryptNum(getEncryptNum(), getPhi()));
	// 1st half of decrypting message
	// _m = base _c and raise to _d
  setDecryption(computeDecryptMessage(getEncryptedMessage(), getDecryptNum()));
  // _c = fmod(_c, _n)
	// compute remainder of division of encrypted message and product of primes
	setEncryptMessage(computeRemainderDivisionEncryptedMessage(getEncryptedMessage(),getProductOfPrimes()));
  // _m = fmod(_m, _n)
	// compute remainder of division of _m and product of primes
  setDecryption(computeRemainderDivisionDecryption(getDecryptedMessage(),getProductOfPrimes()));
}
