#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*new,*temp,*current;

void create()
{
    int n;
    printf("Enter the no of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter the data:\n");
    new=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        current=new;
    }
    else
    {
        current->next=new;
        current=new;
    }   
    }
}
void display()
{
    for(temp=head;temp!=NULL;temp=temp->next)
    printf("%d",temp->data);
}

