/* Single linked list operations*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
int len;
void append();
void addatbegin();
void addatpos();
int length();
void display();
void delete();
void main()
{
    int ch;
    while(1)
    {
        printf("Single linked list operations: \n");
        printf("1.Append\n2.Add node at beginning\n3.Add node at a position\n4.Length\n");
        printf("5.Display\n6.Delete\n7.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : append();
                    break;
            case 2 : addatbegin();
                    break;
            case 3 : addatpos();
                    break;
            case 4 : len = length();
                     printf("Length is %d\n",len);
                    break;
            case 5 : display();
                    break;
            case 6 : delete();
                    break;
            case 7 : exit(0);
                    break;
            default : printf("Invalid choice. Please re-enter\n");
        }
    }

}
void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter the node data:\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link !=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

int length()
{
    int count = 0;
    struct node* temp;
    temp = root;

    while(temp != NULL)
    {
       count++;
       temp = temp->link;
    }
    return count;
}

void display()
{
    struct node* temp;
    temp = root;
    if(temp == NULL)
    {
        printf("List is empty \n\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}

void addatbegin()
{
   struct node* temp;
   temp = (struct node*)malloc(sizeof(struct node));
   printf("Enter the data:\n");
   scanf("%d",&temp->data);
   if(root == NULL)
   {
       root = temp;
   }
   else
   {
       temp->link = root;
       root = temp;
   }
}
void addatpos()
{
    struct node* temp, *p;
    int loc,i;
    printf("Enter the location\n");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("Invalid location. Please re-enter\n");
        printf("Currently the list contains %d nodes\n",len);
    }
    else
    {
        p = root;
        while(i!=loc)
        {
            p = p->link;
            i++;
        }
         temp = (struct node*)malloc(sizeof(struct node));
         printf("Enter the node data:\n");
         scanf("%d",&temp->data);
         temp->link = NULL;
         struct node* p;
         p = root;
         while(p->link !=NULL)
         {
            p = p->link;
         }
         p->link = temp;
         temp->link = p->link;
         p->link = temp;
    }
}
void delete()
{
   struct node* temp;
   int loc;
   printf("Enter location which is to be deleted\n ");
   scanf("%d",&loc);
   if(loc > length())
   {
       printf("Invalid Location. Please re-enter\n");
   }
   else if(loc == 1)
   {
       temp = root;
       root = temp->link;
       temp->link = NULL;
       free(temp);
   }
   else
   {
       struct node* p = root, *q;
       int i;
       while(i < loc - 1)
       {
           p = p->link;
           i++;
       }
       q = p->link;
       p->link = q->link;
       q->link = NULL;
       free(q);
   }
}

