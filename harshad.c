#include<stdio.h>
main()
{
int num;
void harshad(int num);
  num=rand()%100+1;
        printf("%d \t",num);harshad(num);
}
void harshad(int num)
{
int sum=0,dig,x;
x=num;
while(num!=0)
{
dig=num%10;
sum=sum+dig;
num=num/10;
}
if(x%sum==0)
printf("%d is a harshad number\n",x);
else
printf("%d is not a harshad number\n",x);
}
