#include <stdio.h>
#include <stdlib.h>
typedef struct tree_node
{
    char data;
    struct tree_node *most_right_sibling;
    struct tree_node *most_left_child;
} tree_node;
void preoder(tree_node *root)
{
    if (root != NULL)
    {
        printf("%c ", root->data);
        preoder(root->most_left_child);
        preoder(root->most_right_sibling);
    }
}
void inorder(tree_node *root)
{
    if (root != NULL)
    {
        inorder(root->most_left_child);
        printf("%c ", root->data);
        inorder(root->most_right_sibling);
    }
}
void postoder(tree_node *root)
{
    if (root != NULL)
    {
        postoder(root->most_left_child);
        postoder(root->most_right_sibling);
        printf("%c ", root->data);
    }
}
tree_node *makeaNode(char data)
{
    tree_node *new_node = (tree_node *)malloc(sizeof(tree_node));
    new_node->data = data;
    new_node->most_left_child = NULL;
    new_node->most_right_sibling = NULL;
    return new_node;
}
int main()
{
    tree_node *b = makeaNode('b');
    tree_node *e = makeaNode('e');
    tree_node *f = makeaNode('f');
    tree_node *j = makeaNode('j');
    tree_node *k = makeaNode('k');
    tree_node *n = makeaNode('n');
    tree_node *o = makeaNode('o');
    tree_node *p = makeaNode('p');
    b->most_left_child = e;
    e->most_left_child = j;
    e->most_right_sibling = f;
    j->most_right_sibling = k;
    k->most_left_child = n;
    n->most_right_sibling = o;
    o->most_right_sibling = p;
    inorder(b);
    return 0;
}