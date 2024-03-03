#include<stdio.h>
int x[5],i;
main()
{
int n;
void read_array(int n);
void display_array(int n);
void display_even_array(int n);
printf("how many elements\n");
scanf("%d",&n);
if(n>=1&&n<=5)
{
read_array(n);
display_array(n);
display_even_array(n);
}
else
{
printf("array size is till 5 elements\n");
}
}
void read_array(int n)

{
for(i=0;i<n;i++)
{
printf("enter the array elements\n");
scanf("%d",&x[i]);
}
}
void display_array(int n)
{
printf("the array elements are\n");
for(i=0;i<n;i++)
{
printf("%d",x[i]);
}
}
void display_even_array(int n)
{
printf("\nthe even array are\n");
for(i=0;i<n;i++)
{
if(x[i]%2==0)
{
printf("%d",x[i]);
}
}

}
