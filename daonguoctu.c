#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef struct node
{
    char data;
    struct node *next;

} node;
typedef struct stack
{
    node *top;
} stack;
node *makeaNode(char data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
stack *makeaStack(node *top)
{
    stack *new_stack = (stack *)malloc(sizeof(stack));
    new_stack->top = top;
    return new_stack;
}
stack *pop(stack *a)
{
    node *temp = a->top;
    a->top = a->top->next;
    free(temp);
    return a;
}
stack *push(stack *a, char data)
{
    node *new_node = makeaNode(data);
    new_node->next = a->top;
    a->top = new_node;
    return a;
}
void daonguoctu(char b[])
{
    int n = strlen(b);
    node *top = NULL;
    stack *a = makeaStack(top);
    for (int i = 0; i < n; i++)
    {
        a = push(a, b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", a->top->data);
        a = pop(a);
    }
}
int main()
{
    char b[] = "duck";
    daonguoctu(b);
    return 0;
}