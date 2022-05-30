#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
struct Node *prev;
};
typedef struct Node *node;
node insert_beg(node head);
node display(node head);


void main()
{
    node head=NULL;
    int n,pos;

    while(1)
    {
        printf("Enter the choice:1)Insert 2)Display 3)Exit \n");
    scanf("%d",&n);
        switch(n)
        {
            case 1:head=insert_beg(head);
            break;
            case 2:display(head);
            break;
            case 3:exit(0);
        }
    }
}

node getnode()
{
    node t;
    int item;
    t=(node*)malloc(sizeof(struct Node));
    printf("Enter the item: ");
    scanf("%d",&item);
    t->prev=NULL;
    t->next=NULL;
    t->data=item;
    return t;
}

node insert_beg(node head)
{
    node cur,new1;
    new1=getnode();
    cur=head;
    if(head==NULL)
    {
        return new1;
    }
    new1->next=cur;
    cur->prev=new1;
    head=new1;
    return head;
}

node display(node head)
{
    node newn;
    if(head==NULL)
    {
        head=newn;
        return head;
    }
    else
    {
        int count;
        node cur=head;
        if(cur->data>=150&&cur->data<cur->next->data)
        {
            printf("%d ",cur->data);
            count++;
        }
        cur=cur->next;
        while(cur->next!=NULL)
        {
            if(((cur->data)<(cur->next->data))&&((cur->data)>(cur->prev->data)))
            {
                printf("%d ",cur->data);
                count++;
            }
            cur=cur->next;
        }
        if(cur->data>=150&&cur->data>cur->prev->data)
        {
            printf("%d",cur->data);
            count++;
        }
        printf("\n%d",count);
    }
}
