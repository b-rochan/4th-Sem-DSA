#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct employ
{
          char name[100];
          int id;
}emp;

void main()
{        int n,i;
      printf("Enter the Numbers of employ:\n");
      scanf("%d",&n);
      printf("\n");
       emp *eptr;
       eptr=(struct employ*) malloc(n*sizeof(struct employ));
              read(eptr,n);
            display(eptr,n);
}
void read( emp *eptr, int n )
  {
      int i;
      for(i=0; i<n ;i++)
          {
                   printf("employee %d Detail:\n",i+1);

                   printf("\Name:\n");
                   scanf("%s",(eptr+i)->name);

                   printf("Id:\n");
                   scanf("%d",&(eptr+i)->id);
}
  }
void display( emp *eptr, int n)
{
    int i;
    for(i=0;i<n;i++)
         {
            printf("\n emp No = %d \n",i+1);
          printf("employee Name is=%s \n", (eptr+i)->name);
          printf("id no. =%d \n", (eptr+i) ->id);
}
}
