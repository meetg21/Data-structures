// Stack operations practice
#include <stdio.h>
int Top = -1;
int inp_array[5];
int main() {
    int choice;
    
        printf("1.push function");
	    printf("\n2.pop function");
	    printf("\n3.display stack");
	    printf("\n4.peek function");
	    printf("\n5.check if stack is empty or full");
    while(1)	
	{
	   
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		
		
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4:peek();
			        break;
	        case 5:check();
	                break;
	        
			
		}
	}
  
   
    return 0;
}

void push()
{
    int x;
    printf("enter element you want to add :");
    scanf("%d",&x);
    Top=Top+1;
    inp_array[Top]=x;
   
}

void pop()
{
    Top=Top-1;
   
}

void display()
{
    for(int i=Top;i>=0;--i)
    printf("%d\n",inp_array[i]);
}

void peek()
{
    printf("Top elemnt is %d ",inp_array[Top]);
}

void check()
{
    if(Top==4){
        printf("stack is full");
    }
    else{
        printf("stack is empty");
    }
}



