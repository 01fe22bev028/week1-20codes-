#include<stdio.h>
main()
{
float a,b,c,s,area;
printf("enter a,b,c");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
printf("enter s");
scanf("s=%f",s);
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f",area);
}
