/*WAP to create a structure student with members id, name and percentage using static memory allocation. Access the elements of the structure using pointers.*/

#include<stdio.h>
struct Students{
    int Id;
    float per;
    char name[30];
};

int main()
{
    struct Students s1, *p;
    printf("Enter Id of the student:\n");
    scanf("%d",&s1.Id);
    printf("Enter Percentage of the student:\n");
    scanf("%f",&s1.per);
    printf("Enter name of the student:\n");
    scanf("%s",&s1.name);
    p=&s1;
    printf("Name of student is %s\n",p->name);
    printf("Id of student is %d\n",p->Id);
    printf("Percentage scored by the student is %f\n %",p->per);
    return 0;
}
