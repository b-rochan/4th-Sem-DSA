/*Stack operations*/

#include<stdio.h>
#include<stdlib.h>
#define CAP 5
int stack[CAP],top = -1;
void push(int);


int pop();
int isFull();
void peek();
void traverse();

void push(int ele)
{
    if(isFull())
        printf("Don't push deeper\n");
    else
        top++;
        stack[top] = ele;
        printf("%d pushed \n",ele);
        printf("\n");

}

int isFull()
{
    if(top == CAP)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    int x =isEmty();
    if(x==1)
    {
        printf("Go deeper and harder!\n");
    }
    else
    {
        return stack[top--];
    }
}



void peek()
{
    if(isEmty())
    {
        printf("Go deeper and harder!\n");
    }
    else
    {
        printf("The peek element is %d",stack[top]);
        printf("\n");
    }
}
void traverse()
{
    if(isEmty())
    {
        printf("Go deeper and harder!\n");
    }
    else
    {
        int i;
        printf("Stack elements are \n");
        for(i=0;i<top;i++)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}
int main()
{
  int ch,data;
  while(1)
  {
    printf("1.Insert\n 2.Pop\n 3.Peek\n 4.Traverse\n 5.Exit\n");
    printf("Enter the choice\n");
    scanf("%d",&ch);
  switch(ch)
  {
      case 1 :printf("Enter the element:\n");
              scanf("%d",&data);
              push(data);
              break;
      case 2 : data = pop();
               if(data == 0)
               {
                   printf("Go deeper and harder bc!\n");
               }
               else
               {
                   printf("popped item is %d\n",data);
               }
               break;
      case 3 : peek();
               break;
      case 4 : traverse();
               break;
      case 5 : exit(0);
               break;
      default : printf("Invalid input\n\n");
                break;
    }
  }
    return 0;
}
