#include<stdio.h>
void read_marks(int m[],int n);
float maximum_marks(int m[], int n);
main()
{
int n,m[10];
float average;
printf("enter the number of students\n");
scanf("%d",&n);
read_marks(m,n);
maximum_marks(m,n);
}

void read_marks(int m[10],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("enter the marks of students\n");
scanf("%d",&m[i]);
}
}

float maximum_marks(int m[10],int n)
{
int x,i,max=m[0];
for(i=0;i<n;i++)
{
if(m[i]>max)
max=m[i];
x=i;
}
printf("the maximum roll number is %d\n",x);
}
