//linked list and its operations
#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node** test,int new_data) {
 
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  new_node->data = new_data;
  new_node->next = (*test);
  
  (*test) = new_node;
}
void insertAtEnd(struct Node** test, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *test; 

  new_node->data = new_data;
  new_node->next = NULL;

  if (*test == NULL) {
  *test = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}
void printList(struct Node* node) {
	
  while (node != NULL) {
    cout << node->data<<endl ;
    node = node->next;
  }}

int main()
{
	int n,a,b;
	struct Node* head = NULL;
	cout<<"1. Inserting a particular data at the beginning"<<endl;
	cout<<"2. Inserting data at the end"<<endl;
	cout<<"3. Check/print the list";
	
	while(1){
	cout<<"Select an option: "<<endl;
	cin>>n;

	switch(n)
		{
			case 1: cout<<"Enter data :"<<endl;
					cin>>a;
					insertAtBeginning(&head,a);
					break;
			case 3:cout<<"Your list :- "<<endl;
				   printList(head);
				   break;
			case 2: cout<<"Enter data :"<<endl;
					cin>>b;
					insertAtEnd(&head,b);
					break;
				}
}
	return 0;
}



