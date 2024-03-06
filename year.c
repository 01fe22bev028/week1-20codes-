#include<stdio.h>
main()
{
int y,a;
void year(int y);
 y=rand()%10000+1;
        printf("%d \t",y);
if(y>=1920&&y<=2700)
{
year(y);
}
else
printf("invalid input");
}
void year(int y)
{
if(y/400==0&&y/4==0)
{
printf("the 256th day of the year is 14.09.%d",y);
}
else if(y/100!=0)
printf("the 256th day of the year is13.09.%d",y);
}
