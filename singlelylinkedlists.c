#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *node;
};
typedef struct Node *node;
node insert(head);
node display (head);
node getnode();
node insert_pos(head);

void main()
{
    int n,pos,operations;
    while(1);
    {
    printf("Enter the operation\n 1.Insert rear\t 2.Display\t 3.Insert position\n");
    scanf("%d",&operations);
    switch(operations)
      {
        case 1: first=inset_rear(first);
                break;
        case 2:printf("Display the list inserted\n");
                    display_list(first);
                break;
        case 3:printf("Enter the position and the data to be inserted\n");
               scanf("%d"&pos);
               first=insert_pos(pos,first);
                break;
  }
 }
}

node getnode()
{
    node t;
    int data;
    t = (node*)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Not created\n");
        exit(0);
    printf("Enter the data to be inserted\n");
    scanf("%d",&data);
    t->Data = data;
    t->next = NULL;
    return t;
}
void display_list(node first)
{
    node t;
    if(t==NULL)
        printf("Empty list\n");
        return;
    printf("Elements are:\n");
    t=first;
    while(t!=NULL)
            printf("%d\t"t->Data);
            t= t->next;
    printf("\n");
}

node insert_rear(node first)
{
    node new,c;
    new = getnode();
    if(first==NULL)
        return new;
    c=first;
    while(c->next!=NULL)
    {
      c=c->next;
    }
    c->next = new;
    return first;
}
node insert_pos(int pos,node first)
{
    node t,prev,cur;
    int count;
    t=getnode();
    if(first==NULL && pos==1)
        return first;
    if(pos==1)
        t->next = first;
        return t;
    count = 1;
    prev=NULL;
    cur = first;
    while(cur!=NULL && count!=pos)
        prev = cur;
        cur = cur->next;
        count++;
    if(count==pos)
      {

        prev->next=t;
        t->next=cur;
        return first;
      }
    return first;
}

}
