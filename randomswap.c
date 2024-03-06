#include<stdio.h>
main()
{
int a,b,c,i,r[3];
for(i=0;i<2;i++)
{
      r[i]=rand()%10+1;
        printf("%d \n",r[i]);
        a=r[0];
        b=r[1];
        }
c=a;
a=b;
b=c;
printf("the swapped numbers are\n %d %d",a,b);
}
