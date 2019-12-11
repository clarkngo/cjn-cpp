// Author @Clark Jason Ngo
#include "RSA.h"
using namespace std;

int main()
{
    srand (time(NULL));   // to have true randomnesss

    RSA rsa1;

    rsa1.run();

    // The following output is for verification of variables
    // for easier checking to the instructor
    cout << "\n" << "p = " << rsa1.getPrimeNum1();
    cout << "\n" << "q = " << rsa1.getPrimeNum2();
    cout << "\n" << "n = pq = " << rsa1.getProductOfPrimes();
    cout << "\n" << "phi = " << rsa1.getPhi();
    cout << "\n" << "e = " << rsa1.getEncryptNum();
    cout << "\n" << "c = " << rsa1.getEncryptedMessage();
    cout << "\n" << "d = " << rsa1.getDecryptNum();
    cout << "\n" << "Original Message = " << rsa1.getMessageNum();
    cout << "\n" << "Encrypted message = " << rsa1.getEncryptedMessage();
    cout << "\n" << "Decrypted message = " << rsa1.getDecryptedMessage();
    cout << endl;

    return 0;
}
