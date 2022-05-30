//Create a students file containing name and Roll no.

#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10] ;
    int rollN;
};
typedef struct student SD;

void main ()
{
    FILE *fp;
    int n;
    SD a[100];
    printf("Enter the number of students \n");
    scanf("%d",&n);
    fp=fopen("StudentDetails.txt","w");
    read(a,n,fp);
    fclose(fp);
}

void read (SD a[100],int n,FILE *fp)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the student Name and Roll number\n");
        scanf("%s%d",a[i].name,&a[i].rollN);
        fprintf(fp,"Name:%s\t RollNum:%d\n",a[i].name,a[i].rollN);
    }
}

void display(SD a[100],int n,FILE fp)
{
    char name;
    int rollN;
    printf("The file contains: \n");
    while(1)
    {
        fscanf("%s",name);
        fscanf("%d",rollN);
        printf("Name:%s\t RollNum:%d");
    }
}
