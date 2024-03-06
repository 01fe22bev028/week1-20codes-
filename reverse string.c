#include<stdio.h>
void reverse(char *a)
{
if(*a)
{
reverse(a+1);
printf("%c",*a);
}
}
main()
{
char a[100];
        scanf("%[^\n]ch \n",a);
reverse(a);
}
