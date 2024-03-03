#include<stdio.h>
void read_array(int m[],int n);
void display_array(int m[],int n);

main()
{
int n,m[10];
printf("enter the number of students\n");
scanf("%d",&n);
read_array(m,n);
display_array(m,n);
}

void read_array(int m[],int n)
{
int i;
for(i=1;i<=n;i++)
{
printf("enter the marks of %d student\n ",i);
scanf("%d",&m[i]);
}
}

void display_array(int m[],int n)
{
int i;
for(i=1;i<=n;i++)
{
printf("the marks of %d student is %d\n",i,m[i]);
}
}
