#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createnode(int data)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
};
void preorder(struct node*root)
{
    if (root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);


    }
}
void main()
{
    struct node*root=createnode(2);

    root->left=createnode(2);
    root->right=createnode(3);

    root->left->left=createnode(4);
    root->left->right=createnode(5);

    printf("preorder:");
    preorder(root);

    printf("\ninorder:");
    inorder(root);

    printf("\npostorder:");
    postorder(root);
}
