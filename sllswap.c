#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};


void main()
{
    struct node* root = NULL;
    int ch;
    while(1)
    {
        printf(" 1.Append\n 2.Swap\n 3.Display\n 4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : root = append(root);
                     break;
            case 2 : root = swap(root);
                     break;
            case 3 : root = display(root);
                     break;
            case 4 : exit(0);
                     break;
            default : printf("Invalid choice. Please re-enter\n.");
        }
    }
}

void append(struct node* root)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link == NULL;
    if(root->link == NULL)
    {
        temp = root;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }

}
void display(struct node* root)
{
    struct node* cur;
    cur = root;
    while(cur != NULL)
    {
        printf("%d\n",cur->data);
    }
}

void swap(struct node* root)
{
    struct node* cur;
    cur = root;
    struct node* t;
    while(cur->link != NULL)
    {
        t = cur;
        cur = cur->link;
        cur->link = t;
        cur = cur->link;
    }
}

