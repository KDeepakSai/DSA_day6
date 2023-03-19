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
void Levelorder(struct node *root) {
  if (root == NULL) return ; 
   queue<node* >q;
   q.push(root);
   while(!q.empty()){
   	node* node=q.front();
   	cout<<node->data<<"  ";
   	if(root->left!=NULL) q.push(node->left);
   	if(root->right!=NULL) q.push(node->right);
   	q.pop();
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

  cout << "level order: ";
  Levelorder(root);

  return 0;
}
