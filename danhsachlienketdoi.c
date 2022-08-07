#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
node *head;
node *tail;
node *cur;
node *makeaNode(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}