#include<stdio.h>
void read_marks(int n,int m[]);
void result(int n,int m[]);
main()
{
int n,m[10];
printf("enter the number of students\n");
scanf("%d",&n);
read_marks(n,m);
result(n,m);
}
void read_marks(int n,int m[10])
{
int i;
for(i=0;i<n;i++)
{
printf("enter the marks of students\n");
scanf("%d",&m[i]);
}
}

void result(int n,int m[10])
{
    int i;
for(i=0;i<n;i++)
{
if(m[i]<40)
{
printf("fail!!\n");
}
else
printf("pass\n");
}
}
