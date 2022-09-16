#ifndef RATIONALCLASS_H
#define RATIONALCLASS_H
#include <stdbool.h>
class astring
{
public:
    // Constructors
    astring(void);
    astring(char *s);
 
    // String Functions
    int length(void);
    void concat(astring s1, astring s2);
    void copy(astring s);
    bool compare(astring s);
 
    // display
    void display(void);
    // Read
    void Read(void);
    // Setter
    void Set(char *s, int len);
 
private:
    char str[1000];
    int len;
};
#endif
