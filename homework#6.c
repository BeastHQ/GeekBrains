#include<stdio.h>
#include<stdlib.h>

#define T int

typedef struct Node
{
  T data;
  struct Node* left;
  struct Node* right;
} Node;

void preorder_tree(Node* tree)
{
  if(tree)
  {
    printf("%c\n", tree->data);
    preorder_tree(tree->left);
    preorder_tree(tree->right);
  }
}

void symemtric_tree(Node* tree)
{
  if(tree)
  {
    symemtric_tree(tree->left);
    printf("%c\n", tree->data);
    symemtric_tree(tree->right);
  }
}

void postorder_tree(Node* tree)
{
  if(tree)
  {
    postorder_tree(tree->left);
    postorder_tree(tree->right);
    printf("%c\n", tree->data);
  }
}

Node* add_node(T x, Node* tree)
{
  if(!tree)
  {
    tree = (Node*)calloc(100, sizeof(Node));
    tree->data = x;
    tree->left = NULL;
    tree->right = NULL;
  }
  else if(x < tree->data) tree->left = add_node(x, tree->left);
  else tree->right = add_node(x, tree->right);
}
void delete_node(Node* tree)
{
  if(tree)
  {
    delete_node(tree->left);
    delete_node(tree->right);
    free(tree);
  }
}

Node* find_node(T x, Node* tree)
{
  while(tree)
  {
    if(tree->data < x) tree = tree->right;
    else if(tree->data > x) tree = tree->left;
    else return tree;
  }
}

int hash(char* str, int str_size)
{
  int sum = 0;
  for(int i = 0; i< str_size; i++) sum += str[i];
  return sum;
}

int  main()
{
  return 0;
}
