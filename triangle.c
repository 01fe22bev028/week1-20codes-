#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
int r=rand()%10+1;
        printf("%d \t",r);}
printf("\n");
}
}
