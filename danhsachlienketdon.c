#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;
node *makeaNode(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void traverse(node *head)
{
    for (node *cur = head; cur != NULL; cur = cur->next)
    {
        printf("%d  ", cur->data);
    }
}
node *themvaodaudanhsach(node *head, int data)
{
    node *new_node = makeaNode(data);
    new_node->next = head;
    head = new_node;
    return head;
}
void themvaodaudanhsach2(node **head, int data)
{
    node *new_node = makeaNode(data);
    new_node->next = *head;
    *head = new_node;
}
node *themvaosaunnodecur(node *cur, int data)
{
    node *new_node = makeaNode(data);
    if (head == NULL)
    {
        head = new_node;
        return head;
    }
    else
    {
        new_node->next = cur->next;
        cur->next = new_node;
        return new_node;
    }
}
node *themvaotruocnodecur(node *cur, int data)
{
    if (head == NULL)
    {
        node *new_node = makeaNode(data);
        head = new_node;
        return head;
    }
    else if (cur == head)
    {
        head = themvaodaudanhsach(head, data);
        return head;
    }
    else
    {
        node *prev = head;
        while (prev->next != cur)
            prev = prev->next;
        node *new_node = themvaosaunnodecur(prev, data);
        return new_node;
    }
}
node *themvaocuoidanhsach(node *head, int data)
{
    if (head == NULL)
    {
        node *new_node = makeaNode(data);
        head = new_node;
        return head;
    }
    else
    {
        node *tail = head;
        while (tail->next != NULL)
            tail = tail->next;
        node *new_node = makeaNode(data);
        tail->next = new_node;
        return new_node;
    }
}
void themvaocuoidanhsach2(node **head, int data)
{
    if (*head == NULL)
    {
        node *new_node = makeaNode(data);
        *head = new_node;
    }
    else
    {
        node *tail = *head;
        while (tail->next != NULL)
            tail = tail->next;
        node *new_node = makeaNode(data);
        tail->next = new_node;
    }
}
node *xoanodedel(node *del, node *head)
{
    if (del == head)
    {
        head = head->next;
        free(del);
        return head;
    }
    else
    {
        node *prev = head;
        while (prev->next != del)
            prev = prev->next;
        prev->next = del->next;
        free(del);
        return head;
    }
}
void xoadanhsach(node **head)
{
    while (*head != NULL)
    {
        node *del = *head;
        *head = (*head)->next;
        free(del);
    }
}
node *xoadanhsach2(node *head)
{
    while (head != NULL)
    {
        node *del = head;
        head = head->next;
        free(del);
    }
    return head;
}
int isEmty(node *head)
{
    if (head == NULL)
        return 1;
    return 0;
}
int countnodes(node *head, int data)
{
    int count = 0;
    for (node *cur = head; cur != NULL; cur = cur->next)
        if (cur->data == data)
            count++;
    return count;
}
int main()
{
    head = makeaNode(1);
    head = themvaodaudanhsach(head, 2);
    themvaodaudanhsach2(&head, 3);
    themvaocuoidanhsach2(&head, 5);
    themvaocuoidanhsach2(&head, 5);
    traverse(head);
    printf("\n%d", countnodes(head, 5));
    printf("\n%d", isEmty(head));
}
