#include<stdio.h>
int main()
{
       int n,i,j,k,l,m,x;
       printf("enter the no.of processes");
       scanf("%d",&n);
       float a[n],b[n],wt[n],min,tb,t,ta[n],w,ws,ts,y;
       for(i=0;i<n;i++)
       {
              printf("enter the arrival time");
              scanf("%f",&a[i]);
              printf("enter the burst time");
              scanf("%f",&b[i]);
       }
       min=a[0];
      for(i=0;i<n;i++)
      {
             if(a[i]<min)
             {
                    min=a[i];
             }
      }
       for(i=0;i<n;i++)
       {
              for(j=i+1;j<n;j++)
              {
                     if((a[j]<=min)&&(b[j]<b[i]))
                     {
                            t=a[j];
                            a[j]=a[i];
                            a[i]=t;
                            t=b[j];
                            b[j]=b[i];
                            b[i]=t;
                     }
              }
              min+=b[i];
       }
        x=0;
       for(i=0;i<n;i++)
       {
              y=0;
              if(a[i]>x)
              {
                     y=a[i]-x;
              }
              x+=y;
              wt[i]=x-a[i];
              x+=b[i];
       }
       for(i=0;i<n;i++)
       {
              ta[i]=wt[i]+b[i];
       }
       printf("pid\twaiting time\tturn around time\n");
       ws=0;ts=0;
       for(i=0;i<n;i++)
       {
              ws=ws+wt[i];
              ts=ts+ta[i];
              printf("%d\t",i);
              printf("%f\t",wt[i]);
              printf("%f\n",ta[i]);
       }
       w=ws/n;
       t=ts/n;
       printf("average waiting time is %f\n",w);
       printf("average turn around time is %f",t);
}
