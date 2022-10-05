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

void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  cout << "NULL";
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}


void deleteNode(struct Node** test, int key) {
  struct Node *temp = *test, *prev;

  if (temp != NULL && temp->data == key) {
  *test = temp->next;
  free(temp);
  return;
  }
  
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  if (temp == NULL) return;
  prev->next = temp->next;

  free(temp);
}
bool searchNode(struct Node** test, int key) {
  struct Node* current = *test;

  while (current != NULL) {
  if (current->data == key) return true;
  current = current->next;
  }
  return false;
}
void printList(struct Node* node) {
	
  while (node != NULL) {
    cout << node->data<<endl ;
    node = node->next;
  }}

int main()
{
	int n,a,b,c,d;
	struct Node* head = NULL;
	cout<<"1. Inserting data at the beginning"<<endl;
	cout<<"2. Inserting data at the end"<<endl;
	cout<<"3. Check/print the list"<<endl;
	cout<<"4. Insert after a node "<<endl;
	cout<<"5. Delete a node"<<endl;
	cout<<"6. Search an element"<<endl;
	
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
            case 4:  insertAfter(head->next, 9);
            		break;
            case 5: cout<<"Enter node to be deleted: "<<endl;
            		cin>>c;
            		deleteNode(&head, c);
            		break;
            case 6:cout<<"Enter element to find: "<<endl;
            	      cin>>d;
					  if (searchNode(&head, d)) {
					  cout << endl << d << " is found"<<endl;
					  } else {
					  cout << endl <<d<< " is not found"<<endl;
					  }  	
				}
}
	return 0;
}



