#include<stdio.h>
main()
{
int i,rev=0,rem,dig,m;
printf("enter the number\n");
scanf("%d",&m);
while(m!=0)
{
dig=m%10;
rev=rev*10+dig;
m=m/10;
}
printf("teh reverse number is %d",rev);
}
