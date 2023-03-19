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
void PreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    PreOrder(temp->left);
    PreOrder(temp->right);
  }
}

void InOrder(struct node *temp) {
  if (temp != NULL) {
    InOrder(temp->left);
    cout << " " << temp->data;
    InOrder(temp->right);
  }
}

void PostOrder(struct node *temp) {
  if (temp != NULL) {
    PostOrder(temp->left);
    PostOrder(temp->right);
    cout << " " << temp->data;
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

  cout << "preorder traversal: ";
  PreOrder(root);
  cout << "\nInorder traversal: ";
  InOrder(root);
  cout << "\nPostorder traversal: ";
  PostOrder(root);
  return 0;
}
