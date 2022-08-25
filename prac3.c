/*WAP to create an array of size 5 integers using dynamic memory allocation using malloc/calloc, further resize it to size of 10 and print the values  of both the arrays.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int* p;

    p = (int*)malloc(5 * sizeof(int));

    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        for(int i=1;i<6;i++){
        printf("Enter element %d\n",i);
        scanf("%d",&p[i]);
        }

        for(int i=1;i<6;i++){
            printf("Element %d = %d\n",i,p[i]);
        }
        for(int i=1;i<6;i++){
            printf("Adress %d = %d\n",i,&p[i]);
        }
        
        p = realloc(p, 10 * sizeof(int));
        printf("\n");

        for (int i = 6; i < 11; ++i) {
            printf("Enter element %d\n",i);
            scanf("%d",&p[i]);
        }

        for(int i=6;i<11;i++){
            printf("Element %d = %d\n",i,p[i]);
        }
        for(int i=6;i<11;i++){
            printf("Adress %d = %d\n",i,&p[i]);
        }
    }
}
