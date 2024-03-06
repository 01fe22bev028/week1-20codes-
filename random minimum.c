#include<stdio.h>
main()
{
int a,b,c,i,r[10];
for(i=0;i<5;i++)
{
      r[i]=rand()%10+1;
        printf("%d \n",r[i]);
        }
    int  min=r[0];
    for(i=1;i<5;i++)
    {
        if(r[i]<min)
        {
            min=r[i];
        }
    }
     printf("minimum number is %d",min);
}
