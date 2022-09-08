#include <iostream>
#include "rationalclass.h"
#include"rationalclass.cpp"
//----------------------------------------------------------------------------
using namespace std;
int main(void) {

rational R1(2,3),
         R2,
         Sum,
         Subtract,
         Multiply,
         Divide;
       
cout << "R1 is ";
R1.Write();
cout << " and R2 is ";
R2.Write();
cout << endl;

cout << "Enter N and D for new R2 :";
if (!R2.Read()) 
    cout << "Doh, must have a positive denominator" << endl;

cout << "R2 is ";
R2.Write();
cout << endl;

Sum = R1.Add(R2);
cout << "Sum is ";
Sum.Write();
cout << endl;

Subtract=R1.Subtract(R2);
cout<< "Subtarction is";
Subtract.Write();
cout<<endl;

Multiply=R1.Multiply(R2);
cout<<"Multiplication is";
Multiply.Write();
cout<<endl;

Divide=R1.Divide(R2);
cout<<"Division is";
Divide.Write();
cout<<endl;


return(0);
}
