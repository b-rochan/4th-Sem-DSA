#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include<string.h>
struct task
{
    char name[50];
    char date[50];
    struct task *next;
};
typedef struct task *node;
node insert(node head);
node display(node head);
node display(node head);
int delete_beg(node head);
node find(node head);
node save(node head);
int main()
{

    node head=NULL;
    int n;
    while(1){
    printf("Enter the choice: 1)Insert Task 2)View tasks 3)Mark as complete 4)Find the task 5)Save 6)Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:head=insert(head);
               break;
        case 2:printf("The to do list is: \n");
            display(head);
            break;
        case 3:head=delete_beg(head);
        break;
        case 4:find(head);
        break;
        case 5:save(head);
        break;
        case 6:exit(0);
    }

    }
}

node getnode()
{
    node t;
    t=(node*)malloc(sizeof(struct task));
    if(t==NULL)
    {
        printf("Empty list\n");
        return;
    }
    t->next=NULL;
    return t;
}

node read()
{
    node temp;
    temp= getnode();
    printf("Enter the task and date: \n");
    scanf("%s %s",temp->name, temp->date);
    return temp;
}

node insert(node head)
{
    node temp,new;
    new=read();
    temp=head;
    if(head==NULL)
    {
        return new;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
    return head;
}

node display(node head)
{
    node temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Task: %s\t",temp->name);
        printf("Date: %s\n",temp->date);
        temp=temp->next;
    }
    printf("\n");
    return;
}

int delete_beg(node head)
{
    node q;
    if(head==NULL)
    {
        printf("The list is empty!!");
        return head;
    }
    else
    {
        q=head;
        head=head->next;
        printf("\n");
        printf("________The task of %s is completed________\n",q->name);
        printf("\n");
        free(q);

        return head;
    }
}
node find(node head)
{
    char s[11];
    node cur;
    cur=head;
    printf("Enter the date to find the tasks: \n");
    scanf("%s",s);
    while(cur!=NULL){
    if(strcmp(s,cur->date)==0)
    {
        printf("Task : %s\t  Date: %s\n",cur->name,cur->date);
        printf("\n");
        break;
    }
    cur=cur->next;
    }
    if(cur==NULL)
    {
        printf("Not found");
        return;
    }
    return;
}

node save(node head)
{
    FILE *fp;
    fp=fopen("sample.txt","w+");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(0);
    }
    node cur;
    while(cur!=NULL)
    {
        fprintf(fp,"Task:%s\tDate:%s\n",cur->name,cur->date);
        printf("\n");
        cur=cur->next;
    }
    fclose(fp);
}
