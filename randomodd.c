#include<stdio.h>
int r[5],i;
main()
{
int n;
void read_array(int n);
void display_even_array(int n);
read_array(n);
display_even_array(n);
}

void read_array(int n)

{
int i;
for(i=0;i<5;i++)
{
      r[i]=rand()%10+1;
        printf("%d \n",r[i]);
        }
}

void display_even_array(int n)
{
printf("\nthe odd array are\n");
for(i=0;i<n;i++)
{
if(r[i]%2!=0)
{
printf("%d\n",r[i]);
}
}

}
