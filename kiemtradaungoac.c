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
stack *makeastack(node *top)
{
    stack *new_stack = (stack *)malloc(sizeof(stack));
    new_stack->top = top;
    return new_stack;
}
stack *push(stack *a, char data)
{
    node *new_node = makeaNode(data);
    new_node->next = a->top;
    a->top = new_node;
    return a;
}
stack *pop(stack *a)
{
    node *temp = a->top;
    a->top = a->top->next;
    free(temp);
    return a;
}
int isEmty(stack *a)
{
    if (a->top == NULL)
        return 1;
    return 0;
}
int isPair(char a, char b)
{
    if (((a == '{') && (b == '}')) || ((a == '(') && (b == ')')) || ((a == '[') && (b == ']')))
        return 1;
    return 0;
}

int kiemtradaungoac(char b[])
{
    int n = strlen(b);
    node *top = NULL;
    stack *a = makeastack(top);
    for (int i = 0; i < n; i++)
    {
        if ((b[i] == '{') || (b[i] == '(') || b[i] == '[')
            a = push(a, b[i]);
        else if ((b[i] == '}') || (b[i] == ')') || b[i] == ']')
        {
            if (isEmty(a) == 1)
                return 0;
            else if (isPair(a->top->data, b[i]) == 1)
                a = pop(a);
            else
                return 0;
        }
    }
    return isEmty(a);
}

void traverse(stack *a)
{
    for (node *cur = a->top; cur != NULL; cur = cur->next)
    {
        printf("%c", cur->data);
    }
}

int main()
{
    char b[] = "(())[]";
    printf("%d", kiemtradaungoac(b));
    return 0;
}