#include<stdio.h>
main()
{
char operation;
int a,b,ans;
printf("enter the two numbers and operation \n");
scanf("%d %d %d",&a,&b,&operation);
switch(operation)
{
case'+':ans=a+b;
printf("%d",ans);
break;

case'-':ans=a-b;
printf("%d",ans);
break;

case'*':ans=a*b;
printf("%d",ans);
break;

case'/':ans=a/b;
printf("%d",ans);
break;

}
}
