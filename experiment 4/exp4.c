// static, parenthesis match
include <conio.h>
#include <stdio.h>
#include <string.h>

int top = -1;
int i;
 
char push(char* stack,char c){
    stack[++top] = c;
    // printf("Element %c pushed\n",c);
}
char pop(char* stack){
    // printf("Element %c popped\n",stack[top]);
    stack[top] = 0;
    top--;
}
char peek(char* stack){
    // printf("%c\n",stack[top]);
    return stack[top];
}
int isEmpty(char* stack){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void main(){
    int size;
    int flag = 0;
    char a[100];
    printf("Enter the equation: \n");
    scanf("%s",a);
   	size=strlen(a);
    char stack[size];
 
//    printf("Length of string a = %zu \n",strlen(a));
    printf("You entered %s \n",a);

    for( i=0;i<size;i++){
        if(a[i] == '(' || a[i]==')'){
            printf("Scanned %c \n",a[i]);
            if(peek(stack) == '(' && a[i] == ')'){
                printf("popped %c \n",peek(stack));
                pop(stack);
            }
            else{
                if(a[i] == ')'){
                    flag = 1;
                    printf("WRONG");
                    break;
                }
                else{
                    push(stack,a[i]);
                    printf("pushed %c \n",a[i]);
                }
            }
        }
    }
    printf("\n");
    if(flag == 0){
        if(isEmpty(stack) == 1){
            printf("WOHOOOO CORRECT");
        }
        else{
            printf("OOPSSS WRONG");
        }
    }
}
