#include<stdio.h>
#include<stdlib.h>
struct dll
{
    int data;
    struct dll *next;
    struct dll *prev;
};
typedef struct dll *node;
node insertfront(node head);
node getnode();
node insertend(node head);
void display(node head);
node prev = NULL;
void main()
{
    node head = NULL;
    int ch;
    while(1)
    {
        printf("Enter you choice:\n");
        printf("1.Create node. \n2.Insert front. \n3.Insert end");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1: head = insertfront(head);
                break;
        case 2: head = insertend(head);
                break;
        //case 3: head = insertatpos(head);
         //       break;
        case 4:display(head);
                break;
        case 5: exit(0);
                break;
        default:printf("Invalid choice. Please re-enter\n");
        }
    }
}
node getnode()
{
    node newn;
    newn = (node*)malloc(sizeof(struct dll));
    printf("Enter the node data:\n");
    scanf("%d",&newn->data);
    newn->prev = NULL;
    newn->next = NULL;
    return newn;
}

node insertfront(node head)
{
    node newn,cur;
    cur=head;
    newn = getnode();
    if(head == NULL)
    {
        return newn;
    }
    newn->next = cur;
    cur->prev = newn;
    head=newn;
    return head;
}

node insertend(node head)
{
    node newn;
    newn = getnode();
    node cur;
    cur = head;
    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    newn->prev = cur;
    cur->next = newn;
    return head;
}

void display(node head)
{
    node cur;
    if(head == NULL)
    {
        printf("The list is empty\n");
    }
    cur = head;
    while(cur!= NULL)
    {
        printf("%d->",cur->data);
        cur = cur->next;
    }
}


