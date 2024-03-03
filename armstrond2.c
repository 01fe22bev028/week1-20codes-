#include<stdio.h>
main()
{
int n ,dig,sum=0,m;
printf("enter the number\n");
scanf("%d",&n);
m=n;
while(n!=0)
{
dig=n%10;
sum=sum+dig*dig*dig;
n=n/10;
}
if(sum==m)
{
printf("%d is armstrong number\n",m);
}
else
printf("%d is not an armstrong number\n",m);

}


