#include<stdio.h>
main()
{
int r;
float area;
printf("enter the side of the square for which area needs to be calculated\n");
scanf("%d",&r);
area=3.14*(pow(r,2));
printf("area of square is 0.%f",area);
}
