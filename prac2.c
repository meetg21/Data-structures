/*WAP to read an array of 10 elements, using pointers , print the address of each element and the value of each element as well.*/
#include <stdio.h>

int main(){
    int i;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &arr[0];
    for(int i = 0;i<10;i++){
        printf("The element is %d \n",i);
        printf("The adress of element is %p \n",&p[i]);
    }

    return 0;
}
