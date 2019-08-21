#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],b[20],j,c[20][20],s[20],u[20],g[20],sum=0,p,i,k=1,m=1,z=0,n=0;
    char l;
    printf("enter how many projects \n");
    scanf("%d",&p);
    printf("enter arrival time\n");
    for(i=0;i<p;i++)
    {
        printf("for project %d\n",i);
        scanf("%d",&a[i]);

    }
     l : printf("please check arrival time\n");
   for(i=0;i<p;i++)
    {

        if(a[i]<=a[i+1])
        {
            printf("process on\n");
        }
        else{
            printf("check ur arrival  time **project%d arrival time always < project%d** \n",i,i+1);
            goto l;
        }
    }

    for(i=0;i<p;i++)
    {
        printf("enter burst time for project %d\n",i);
        scanf("%d",&b[i]);

    }

    printf("your data is\n");
    for(i=0;i<p;i++)
    {
        printf("\n");
        if(k==1)
        {
        for(j=0;j<1;j++)
        {
            printf("project no\t");
            printf("arrival time\t");
            printf("burst time\t");
        }
        }
        k++;
            printf("\n");
         for(j=0;j<1;j++)
        {
            printf("%d\t\t",i);
            printf("%d\t\t",a[i]);
            printf("%d\t\t",b[i]);
        }

    }
    printf("\n");
s[0]=b[0];
for(i=0;i<p;i++)
{
    s[i+1]=s[i]+b[i+1];
    if((a[i+1]-s[i]>0))
    {
        n=a[i+1]-s[i];
        s[i+1]=s[i+1]+n;
    }
}

    for(i=0;i<p;i++)
    {
        u[i]=s[i]-a[i];
    }
     for(i=0;i<p;i++)
    {
        g[i]=u[i]-b[i];
    }
    printf("after execution data is\n");
    for(i=0;i<p;i++)
    {
        printf("\n");
        if(m==1)
        {
        for(j=0;j<1;j++)
        {
            printf("project no\t");
            printf("arrival time\t");
            printf("burst time\t");
            printf("completion time\t\t");
            printf("turn around time\t\t");
            printf("waiting time\t");
        }
        }
        m++;
            printf("\n");
         for(j=0;j<1;j++)
        {
            printf("%d\t\t",i);
            printf("%d\t\t",a[i]);
            printf("%d\t\t",b[i]);
             printf("%d\t\t\t",s[i]);
              printf("%d\t\t\t\t",u[i]);
               printf("%d",g[i]);
        }

    }



}
