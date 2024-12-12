#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *new;
struct node *create(int n)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    new->left = NULL;
    new->right = NULL;
    return new;
}

struct node *insert(struct node *root, int n)
{
    if (root == NULL)
        return create(n);
    else if (n > root->data)
        root->right = insert(root->right, n);
    else if (n < root->data)
        root->left = insert(root->left, n);
    else
        printf("Same value cannot be inserted");
    return root;
}

struct node *search(struct node *root, int x)
{
    if (root != NULL)
    {
        if (x == root->data)
            return root;
        else if (x < root->data)
            search(root->left, x);
        else if (x > root->data)
            search(root->right, x);
    }
    else
        return NULL;
}

void display(struct node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("%d", root);
        display(root->right);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root);
    }
}

int main()
{
    int c, n;
    struct node *root;
    printf("\nBinary Search Tree\n");
    printf("\nChoose an operation:\n1.Insert\n2.Search\n3.Display\n4.Exit\n");
    do
    {
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d", &n);
            if (root == NULL)
                root = create(n);
            else
                insert(root, n);
            break;
        case 6:
            ("\n Not a valid choice\n");
            return 0;
        }

    } while (1);
}
