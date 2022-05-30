#include<stdio.h>
#include<string.h>
struct ED
{
    char name[50];
    int id;
};
typedef struct ED ed;
void main()
{
    int n;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    ed a[50];
    read(a,n);
    disp(a,n);
}
void read(ed a[50],int n)
{
    printf("Read the employee details are:\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s%d",a[i].name,&a[i].id);
    }
}
void disp(ed a[50], int n)
{
    printf("The details of the employees are:\n");
    int j;
    for (j=0;j<n;j++)
    {
        printf("The employee details are:\n");
        printf("%s\n%d\n",a[j].name,a[j].id);
    }
}
