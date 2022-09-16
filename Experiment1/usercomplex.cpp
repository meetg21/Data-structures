
#include <iostream>
#include "complexclass.h"
#include "complexclass.cpp"

using namespace std;

int main(void) {

comp C1,
         C2,
         Sum,
         Diffrence,
         Product,
         Divide;


cout << "Enter real and imaginary for C1 : ";
if (!C1.Read()) 
    cout << "Doh, must have a positive denominator" << endl;

cout << "Enter real and imaginary for C2 : ";
if (!C2.Read()) 
    cout << "Doh, must have a positive denominator" << endl;

cout << "C1 is ";
C1.Write();
cout << endl;

cout << "C2 is ";
C2.Write();
cout << endl;

Sum = C1.Add(C2);
Diffrence = C1.Substract(C2);
Product = C1.Multiply(C2);
Divide = C1.Divide(C2);

cout << "Sum is ";
Sum.Write();
cout << endl;

cout << "Diffrence is ";
Diffrence.Write();
cout << endl;

cout << "Product is ";
Product.Write();
cout << endl;

cout << "Division is ";
Divide.Write();
cout << endl;

return(0);
}
/
