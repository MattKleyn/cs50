#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    //Initialize list of size
    node *list = NULL;

    //add value to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    //update list to point to new node
    list = n;

    //add new number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    //add another number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //need to free 2nd first otherwise if free 1st first then no way to access 2nd node next
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    //print list
    for (node *tmp = list; tmp !=NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    //free list
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}