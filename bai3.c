#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef struct node
{
    char id[256];
    struct node *leftMostChild;
    struct node *rightSibling;
} node;
node *root;
int countNode(node *root)
{
    if (root != NULL)
        return 0;
    else
        return countNode(root->leftMostChild) + countNode(root->rightSibling) + 1;
}
node *find(node *root, char *idF)
{
    if (root != NULL)
    {
        if (strcmp(root->id, idF) == 0)
            return root;
        else
        {
            node *a = find(root->leftMostChild, idF);
            if (a != NULL)
                return a;
            else
                return find(root->rightSibling, idF);
        }
        return NULL;
    }
}
void addChild(char *idP, char *idC)
{
    node *parent = find(root, idP);
    node *child = (node *)malloc(sizeof(node));
    strcpy(child->id, idC);
    child->leftMostChild = NULL;
    child->rightSibling = NULL;
    if (parent != NULL)
    {
        node *rightMostChild = parent->leftMostChild;
        while (rightMostChild->rightSibling != NULL)
            rightMostChild = rightMostChild->rightSibling;
        rightMostChild->rightSibling = child;
    }
}
int main()
{
    char *a = "abc";
}