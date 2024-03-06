#include<stdio.h>
main()
{

void display_pattern();

display_pattern();
 }
 void display_pattern()
 {
 int c,i;
 for(c=1;c<=6;c++)
 {
 for(i=6;i>=c;i--)
 {
 printf("%d\t",i);
 }
 printf("\n");
 }
 }
