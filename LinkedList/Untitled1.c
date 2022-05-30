#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    //struct Node *prev;
};
typedef struct Node *node;
node insert_end(node head,node new1);
void display(node head);
node getnode();
int main() {
    node head,new1;
    head=NULL;
    int t,i;
    scanf("%d",&t);
    for(i=t;i>0;i--)
    {
        new1=getnode();
        while(new1->data!=-1)
        {
            insert_end(new1,head);
        }
    }
    display(head);
    return 0;
}
node getnode()
{
    node t;
    t=(node)malloc(sizeof(struct Node));
    scanf("%d",&t->data);
    //t->prev=NULL;
    t->next=NULL;
    return t;
}
node insert_end(node new1,node head)
{
    node cur;
    cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=new1;
    cur->next=head;
   // head->prev=new1;
    return head;
}
void display(node head)
{
    node cur,t;
    int k;
    t=head;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        t=t->next;
        head=t;
    }
    cur=head;
    while(cur!=NULL)
    {
        printf("%d",cur->data);
        cur=cur->next;
    }
}
