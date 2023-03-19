#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}
void Leftview(struct node *root) {
  if (root == NULL) return ; 
   queue<node* >q;
   q.push(root);
   while(!q.empty()){
   	int size=q.size();   	
	   for(int i=0;i<size;i++){
	       if(i==0){
   	        node* node=q.front();q.pop();
   	        cout<<node->data;
   	        if(root->left!=NULL) q.push(node->left);
   	        if(root->right!=NULL) q.push(node->right);
   	        
            }
        }
    }
}
void Rightview(struct node *root) {
  if (root == NULL) return ; 
   queue<node* >q;
   q.push(root);
   while(!q.empty()){
   	int size=q.size();   	
	   for(int i=0;i<size;i++){
	       if(i==size-1){
   	        node* node=q.front();q.pop();
   	        cout<<node->data;
   	        if(root->left!=NULL) q.push(node->left);
   	        if(root->right!=NULL) q.push(node->right);
   	        
            }
        }
    }
}


int main() {
  struct node *root = newNode(10);
  root->left = newNode(20);
  root->right = newNode(30);
  root->left->left = newNode(40);
  root->left->right = newNode(50);
  root->right->left = newNode(60);
  root->right->right = newNode(70);

  cout << "left view:\n";
  Leftview(root);
  cout << "right view:\n";
  Rightview(root);

  return 0;
}
