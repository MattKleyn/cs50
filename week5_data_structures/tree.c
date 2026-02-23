#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//represent a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

//func prototypes
void free_tree(node *root);
void print_tree(node *root);


int main(void)
{
    //intialize tree of size 0
    node *tree = 0;

    //add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    //add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //free memory
        return 1;
    }
    n->number = 1;  
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    //add num to list 
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //free memory
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    print_tree(tree);
    free_tree(tree);
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    //remember order of operations for freeing memory
    free_tree(root->left);
    free(root->right);
    free_tree(root);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

//binary search in tree
bool search(node *tree, int number)
{
    if (tree = NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}