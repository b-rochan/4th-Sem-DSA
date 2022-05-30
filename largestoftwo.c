#include<stdio.h>
int large(int *a,int *b)
{
    int *l;
    if(*a>*b)
        l=a;
    else
        l=b;
    return l;
}
void main()
{
    int x,y,*a,*b,*l;
    printf("Enter two number:\n");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    l=large(a,b);
    printf("Largest : %d",*l);
}
