#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *new, *current, *temp, *tobedeleted;
void create()
{

    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data:\n");
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            current = new;
        }
        else
        {
            current->next = new;
            current = new;
        }
    }
}

void display()
{
    for (temp = head; temp != NULL; temp = temp->next)
        printf("%d\t", temp->data);
}

void insert()
{
    int c, p;
    printf("Data to be inserted:\n1.At the beginning\n2.At the end\n3.In between\n");
    scanf("%d", &c);
    new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    printf("Enter the data");
    scanf("%d", &new->data);
    if (c == 1)
    {
        new->next = head;
        head = new;
    }
    else if (c == 2)
    {
        current->next = new;
        new->next = NULL;
        current = new;
    }
    else if (c == 3)
    {
        printf("Enter the position to be inserted at:\n");
        scanf("%d", &p);
        temp = head;
        for (int i = 1; i < p - 1; i++)
            temp = temp->next;
        new->next = temp->next;
        temp->next = new;
    }
    else
        printf("NOT VALID");
}

void delete()
{
    int c, p;
    printf("Data to be deleted:\n1.From the beginning\n2.From the end\n3.In between\n");
    scanf("%d", &c);
    if (c == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    if (c == 2)
    {
        for (temp = head; temp->next != NULL; temp = temp->next)
        {
            if (temp->next->next == NULL)
            {
                free(temp->next);
                temp->next = NULL;
                // temp=temp->next;
                break;
            }
        }
    }
    if (c == 3)
    {
        printf("Enter the position to be deleted from:\n");
        scanf("%d", &p);
        temp = head;
        for (int i = 1; i < p - 1; i++)
        {
            temp = temp->next;
        }
        tobedeleted = temp->next;
        temp->next = temp->next->next;
        free(tobedeleted);
    }
}

void search()
{
    int a;
    if (head == NULL)
        printf("List is empty");
    else
    {
        printf("Enter the element to be searched:\n");
        scanf("%d", &a);
        temp = head;
        int f = 0;
        while (temp->next != NULL)
        {
            if (temp->data == a)
            {
                printf("Searched data found");
                f = 1;
                break;
            }
            temp = temp->next;
        }
        if (f == 0)
            printf("Searched data not found");
    }
}

void main()
{
    int c;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Search\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete ();
            break;
        case 5:
            search();
            break;
        default:
            printf("instructions unclear");
            break;
        }
        if (c == 6)
            break;
    }
}
