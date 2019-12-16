#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <cmath>
#include <array>
using namespace std;

/**
 * This program demonstarates the wokrin of the
 * RSA algorith
 * */

// calculate greatest common factor
double gcd(double x, double y)
{
   if (y == 0)
      return x;
   return gcd(y ,fmod(x, y));
}

//encrypt the message
double* encrypt(string msg, double e, double n)
{
   double encode;
   double* arr = new double[msg.length()];
   for (int i = 0; i < msg.length(); i++)
   {
      encode = pow(msg[i], e);
      encode = fmod(encode,n);
      arr[i] = encode;
   }
   for (int i = 0; i < msg.length(); i++)
   {
      cout << arr[i];
   }
   return arr;
}

// // fucntion to decrypt
void decrypt(string msg, double e, double phi, double n, double* test)
{
   double m, c;
   double d2 = 1/e;
   double d = fmod(d2,phi);
   cout <<"d: "<< d << endl;
   // double d = (1+(d*phi))/e;
    for (int i = 0; i < msg.length(); i++)
   {

      c = pow(msg[i], e);
      m = pow(test[i], d);
      c = fmod(c,n);

      cout <<"m: "<< m << endl;
      m = fmod(m, n);
      cout << "m after: "<< m << endl;



   }
}


int main()
{

   // local variables
   // prime number p & q
   double p = 31, q = 37;
   string message;

   double coprime;
   // calculate n
   double n = p * q;
   // calculate phi
   double phi = (p - 1) * (q - 1);
   double e = 7;
   double d;
   // check coprime
   while (e < phi)
   {
      coprime = gcd(e, phi);
      if (coprime == 1)
         break;
      else
         e++;
   }

   // user input for encryption
   cout << "\n Enter the Message to encrypt \n";
   cin >> message;
   // encrypt(message, e, n);
   double* test = new double[message.length()];
   test= encrypt(message, e, n);

   for (int i = 0; i < message.length(); i++)
   cout << " this is : " << test[i] <<endl;
   decrypt(message, e, phi, n, test);

   return 0;

}
