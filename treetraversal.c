#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
} node;
node *makeaNode(char data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}
int main()
{
    node *a = makeaNode('a');
    node *b = makeaNode('b');
    node *c = makeaNode('c');
    node *d = makeaNode('d');
    node *e = makeaNode('e');
    node *f = makeaNode('f');
    node *g = makeaNode('g');
    node *h = makeaNode('h');
    node *l = makeaNode('l');
    node *j = makeaNode('j');
    node *m = makeaNode('m');
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = h;
    d->left = e;
    d->right = f;
    f->left = g;
    c->left = l;
    c->right = j;
    j->left = m;
    postorder(a);
    printf("\ne g f d h b l m j c a");
}