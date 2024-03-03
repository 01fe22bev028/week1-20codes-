#include<stdio.h>
main()
{
int a,b,c;
printf("enter the two numbers\n");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("the swapped numbers are\n %d %d",a,b);
}
