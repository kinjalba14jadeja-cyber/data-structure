#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

void main()
{
    int option;
    do
    {
        printf("-------Main Menu-------");
        printf("\n 1. Create linked list");
        printf("\n 2. Display linked list");
        printf("\n 3. Insert a node in begining");
        printf("\n 4. Insert a node at end");
        printf("\n 5. Insert a node before a given node");
        printf("\n 6. Insert a node after a given node");
        printf("\n 7. Delete a node from begining");
        printf("\n 8. Delete a node at end");
        printf("\n 9. Delete a given node");
        printf("\n 10. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&option);

        switch(option)
        {
           case 1:
               create_ll();
               printf("\nLINKED LIST CREATED");
               break;
           case 2:
               display();
               break;
           case 3:
               insert_beg();
               break;
           case 4:
               insert_end();
               break;
           case 5:
               insert_before();
               break;
           case 6:
               insert_after();
               break;
           case 7:
               delete_beg();
               break;
           case 8:
               delete_end();
               break;
           case 9:
               delete_node();
               break;
        }
    }while(option!=10);
    return 0;
}
void create_ll()
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data:");
    scanf("%d",&num);
    while (num!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if (start==NULL)
            {
            new_node->next=NULL;
            start=new_node;
            }
        else
            {
                ptr=start;
                while(ptr->next!=NULL)
                {
                   ptr=ptr->next;
                }
                ptr->next=new_node;
                new_node->next=NULL;
            }
            printf("Enter the data:");
            scanf("%d",&num);
}
}

void display()
{
    struct node *ptr;
    ptr=start;
    while (ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
}

void insert_beg()
{

}
void insert_end()
{

}
void insert_before()
{

}
void insert_after()
{

}
void delete_beg()
{

}
void delete_end()
{

}
void delete_node()
{

}
