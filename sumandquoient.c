#include<stdio.h>
main()
{
int n,m,a,b,sum;
printf("enter the value of n and m\n");
scanf("%d %d",&n,&m);
a=n/m;
b=n%m;
sum=a+b;
printf("the sum and quotient of two numbers are %d",sum);
}
