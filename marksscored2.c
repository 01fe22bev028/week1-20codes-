#include<stdio.h>
void marks(int m);
main()
{
int m;
printf("enter the marks\n");
scanf("%d",&m);
marks(m);
}

void marks(int m)
{
if(m>=0&&m<=39)
{
printf("FAIL\n");
}

else if(m>=40&&m<=59)
{
printf("SECOND CLASS\n");
}
else if(m>=60&&m<=79)
{
printf("FIRST CLASS\n");
}

else if(m>=80&&m<=100)
{
printf("DISTINCTION\n");
}

 else
 printf("invalid marks");
}
