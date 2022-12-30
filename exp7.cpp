#include<iostream>



using namespace std;



struct Node{

int data; Node *left; Node *right;
};



Node* Create(int data){ Node* node = new Node; node->data = data;
node->left = node->right = NULL; return node;
}



void inorder(Node *root){ if(root == NULL){
return;


inorder(root->left);

cout << root->data << " ";
 inorder(root->right);
}



Node*findMinimum(Node* cur){ 
while(cur->left != NULL){
cur = cur->left;

}

return cur;

}



Node* insert(Node* root,int data){ if(root == NULL){
return Create(data);

}

if(data<root->data){

root->left = insert(root->left,data);

}

else{

root->right = insert(root->right, data);

}

return root;
}



void search(Node* &cur,int data,Node* &parent){ while(cur != NULL && cur->data != data){
parent = cur;

if(data < cur->data){ cur = cur->left;
}

else{

cur = cur->right;

}

}

}



void remove(Node*& root,int data){ Node* parent = NULL;
Node* cur = root; search(cur,data,parent); if(cur == NULL){
return;

}

if(cur->left==NULL && cur->right==NULL){ if(cur != root){
if(parent->left == cur){
parent->left = NULL;

}

else{

parent->right = NULL;

}

}

else{

root = NULL;

}

free(cur);

}

else if(cur->left && cur->right){

Node* succ = findMinimum(cur->right); int val = succ->data;
cur->data = val;

}

else{

Node* child = (cur->left)?cur->left:cur->right; if(cur != root){
if(cur == parent->left){ parent->left = child;
}

else{

parent->right = child;
}

}

else{

root = child;

}

free(cur);

}

}



int main(){

Node* root = NULL; cout << "1. Add \n";
cout << "2. Print the tree \n"; cout << "3. Remove \n"; while(1){
int i,data; cout << ">> "; cin >> i; switch (i)
{

case 1:

cout << "Enter the data \n"; cin >> data;
root = insert(root,data);
break; case 2:
inorder(root); cout << "\n"; break;
case 3:

cout << "Enter the data \n"; cin >> data; remove(root,data);
break; default:
break;

}

}
}
}

