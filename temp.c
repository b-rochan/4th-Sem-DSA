#include<stdio.h>
void sum();
int main ()
{
    int a,b,c;
    int *p,*q;
    *p = a;
    *q = b;
    scanf("%d%d",&a,&b);
    c = sum(p,q);
    printf("Sum=%d",c);
}
int sum(int *p,int *q)
{
   int sum;
   sum = *p+*q;
   return sum;

}
