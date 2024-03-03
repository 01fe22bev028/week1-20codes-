#include<stdio.h>
main()
{
float r,volume;
float pi=3.14;
printf("enter r\n");
scanf("%f",&r);
volume=(4*pi)/3*pow(r,3);
printf("volume of sphere=%f",volume);
}
