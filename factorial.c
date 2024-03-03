#include<stdio.h>
main()
{
int i,n,pro=0,fact;
printf("enter the number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
pro=pro+i;
i++;
}
printf("%d",pro);
}
