#include<stdio.h>
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
if(n%3==0 && n%5==0)
{
printf("%d is divisible by both 3 and 5\n",n);
}
else
{
printf("%d is not divisible by both 3 and 5\n",n);
}
}
