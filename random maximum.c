#include<stdio.h>
main()
{
int a,b,c,i,r[10];
for(i=0;i<5;i++)
{
      r[i]=rand()%10+1;
        printf("%d \n",r[i]);
        }
    int  max=r[0];
    for(i=1;i<5;i++)
    {
        if(r[i]>max)
        {
            max=r[i];
        }
    }
     printf("maximum number is %d",max);
}
