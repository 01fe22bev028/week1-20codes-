#include<stdio.h>
main()
{
int i,rev=0,rem,dig,m,n;
printf("enter the number\n");
scanf("%d",&m);
n=m;
while(m!=0)
{
dig=m%10;
rev=rev*10+dig;
m=m/10;
}
if(rev==n)
{
printf("armstrong number\n");
}
else
printf("not an armstrng number\n");
}
