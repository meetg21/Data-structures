
#define COMPCLASS_H

#include <stdbool.h>

class comp {

public:

//----Constructors
comp(void);

comp(double real, double imaginary);

//----Set the value. Fails if D is not natural
bool Set(double real, double imaginary);

//----Add
comp Add(comp OtherOne);

//----Substract
comp Substract(comp OtherOne);

//----Multiply
comp Multiply(comp OtherOne);

//----Divide
comp Divide(comp OtherOne);

//----Read. Fails if D is not natural
bool Read(void);

//----Write
void Write(void);

private:

double r,i;

};

#endif

