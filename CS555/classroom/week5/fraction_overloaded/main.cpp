#include <iostream>
using namespace std;

class Fraction{
    int numerator;
    int denominator;

    public:
        Fraction(){
            numerator=0;
            denominator=0;
        }


        Fraction(int num,int den){
            numerator=num;
            denominator=den;
        }



        //overloading the operator +
        Fraction operator+(Fraction f){
            Fraction r;
            r.numerator=(numerator*f.denominator)+(denominator*f.numerator);
            r.denominator=denominator*f.denominator;
            return(r);
        }

        //overloading the operator -
        Fraction operator-(Fraction f){
            Fraction r;
            r.numerator=(numerator*f.denominator)-(denominator*f.numerator);
            r.denominator=denominator*f.denominator;
            return(r);
        }

        //overloading the operator *
        Fraction operator*(Fraction f){
            Fraction r;
            r.numerator=numerator*f.numerator;
            r.denominator=denominator*f.denominator;
            return(r);
        }



        //overloading the operator /
        Fraction operator/(Fraction f){
            Fraction r;
            r.numerator=numerator*f.denominator;
            r.denominator=denominator*f.numerator;
            return(r);
        }
        void printF(){
            cout<<numerator<<"/"<<denominator<<endl;
        }


};

int main(){
    Fraction f1(1,4);
    Fraction f2(2,3);
    Fraction resultAdd=f1+f2;
    Fraction resultSubtract=f1-f2;
    Fraction resultMultiply=f1*f2;
    Fraction resultDivide=f1/f2;
    resultAdd.printF();
    resultSubtract.printF();
    resultMultiply.printF();
    resultDivide.printF();

    return 0;
}