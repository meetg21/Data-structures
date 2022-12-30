#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  new_node->data = new_data;
  new_node->next = (*head_ref);

  (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  cout << "the given previous node cannot be NULL";
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
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
bool searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return true;
  current = current->next;
  }
  return false;
}

void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}
void printList(struct Node* node) {
  while (node != NULL) {
  cout << node->data << " ";
  node = node->next;
  }
}
int main() {
  struct Node* head = NULL;
  int n,a,b,c,d,e;
while(1){
	
cout<<"Select an option: "<<endl;

cout<<"\n1. insert at beginning \n";
cout<<"2.print \n";
cout<<"3. insert at end. \n";
cout<<"4. Insert after a point, \n";
cout<<"5. delete an element. \n";
cout<<"6.Search \n";
cin>>n;
switch(n)
	{
		case 1 : cout<<"Enter element: \n";
				 cin>>a;
				 insertAtBeginning(&head, a);
				 break;
    	case 2 : cout << "Linked list: \n";
				 sortLinkedList(&head);
				 printList(head);
				 break;
        case 3 : cout<<"Enter element: \n";
        		 cin>>b;
        		 insertAtEnd(&head, b);
        		 break;
        case 4 : cout<<"enter Element : \n";
        		 cin>>c;
        		 insertAfter(head->next, c);
        		 break;
        case 5 : cout<<"Enter element u wanna delete: \n";
        		 cin>>d;
        		 deleteNode(&head, d);
        		 break;
        case 6 : cout<<"Enter element u wanna search: \n";
        		 cin>>e;
        		 if (searchNode(&head, e)) {
				  cout <<  " Found";
				  } else {
				  cout <<  "Not Found";
				  }
				  break;
				 
}}}
