#include<stdio.h>
int main()
{
  int r11=rand()%10+1;
  int r12=rand()%10+1;
  int r13=rand()%10+1;
  int r14=rand()%10+1;
    int r15=rand()%10+1;
  int r16=rand()%10+1;
    int r17=rand()%10+1;
  int r18=rand()%10+1;
    int r19=rand()%10+1;



  printf("first matrix=\n");
  printf("%d  %d  %d\n",r11,r12,r13);
  printf("%d  %d  %d\n",r14,r15,r16);
    printf("%d  %d  %d\n",r17,r18,r19);
  int r1=(r11+r15+r19);
  printf("\nsum of secondary diagonal elements=\n");
  printf("%d\n",r1);

}
