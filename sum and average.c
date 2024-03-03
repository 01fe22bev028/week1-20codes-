/* c program to print sum of three numbers and average of three numbers*/
#include<stdio.h>
main()
{
    int a,b,c,sum;
    float Average;
    printf("Enter the values for a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("addition of a,b and c is %d",sum);
    Average=sum/3;
    printf("average of a,b and c is %f",Average);
}
