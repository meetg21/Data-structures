#ifndef RATIONALCLASS_H
#define RATIONALCLASS_H

#include<stdbool.h>

class rational {

public:

/*----Constructors*/
rational(void);

rational(int N, int D);

/*----Set the value. Fails if D is not natural*/
bool Set(int N, int D);

/*----Add*/
rational Add(rational OtherOne);


/*----Subtract*/
rational Subtract(rational OtherOne);

/*----Multiply*/
rational Multiply(rational OtherOne);

/*----Divide*/
rational Divide(rational OtherOne);

/*----Read. Fails if D is not natural*/
bool Read(void);

/*----Write*/
void Write(void);

private:

int Numerator,
    Denominator;

};

#endif
