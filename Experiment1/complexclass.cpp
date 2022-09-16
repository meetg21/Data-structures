//---------------------------------------------------------------------------
#include <iostream>
#include<bits/stdc++.h>
#include "complexclass.h"

using namespace std;
//---------------------------------------------------------------------------
//----Constructors
comp::comp(void) {
Set(0,0);
}
//---------------------------------------------------------------------------
comp::comp(double real, double imaginary) {

Set(real,imaginary);
}
//---------------------------------------------------------------------------
//----Set the value. Fails if D is not natural
bool comp::Set(double real, double imaginary) {
    r = real;
    i = imaginary;
    return true;
}

//---------------------------------------------------------------------------
//----Add
comp comp::Add(comp OtherOne) {

comp Answer;

Answer.Set(r+OtherOne.r,i+OtherOne.i);

return(Answer);
}

//---------------------------------------------------------------------------
//----Substract
comp comp::Substract(comp OtherOne) {

comp Answer;

Answer.Set(r-OtherOne.r,i-OtherOne.i);

return(Answer);
}
//---------------------------------------------------------------------------
//----Multiply
comp comp::Multiply(comp OtherOne) {

comp Answer;

Answer.Set((r*OtherOne.r) - (i*OtherOne.i), (i+OtherOne.r) + (r+OtherOne.i));

return(Answer);
}

//---------------------------------------------------------------------------
//----Divide
comp comp::Divide(comp OtherOne) {

comp Answer;

Answer.Set(((r*OtherOne.r)+(i*OtherOne.i))/((OtherOne.r)*(OtherOne.r))+((OtherOne.i)*(OtherOne.i)),
           ((i*OtherOne.r)+(r*OtherOne.i))/((OtherOne.r)*(OtherOne.r))+((OtherOne.i)*(OtherOne.i)));

return(Answer);
}
//---------------------------------------------------------------------------
//----Read. Fails if D is not natural
bool comp::Read(void) {

int NewNumerator,
    NewDenominator;

cin >> NewNumerator >> NewDenominator;

return(Set(NewNumerator,NewDenominator));
}
//---------------------------------------------------------------------------
//----Write
void comp::Write(void) {
cout << r << "+" << i <<"i";
}
//---------------------------------------------------------------------------