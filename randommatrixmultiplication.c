#include<stdio.h>
int main()
{
  int r11=rand()%10+1;
  int r12=rand()%10+1;
  int r13=rand()%10+1;
  int r14=rand()%10+1;
  printf("first matrix=\n");
  printf("%d  %d\n",r11,r12);
  printf("%d  %d\n",r13,r14);
  int r21=rand()%10+1;
  int r22=rand()%10+1;
  int r23=rand()%10+1;
  int r24=rand()%10+1;
  printf("\nsecond matrix=\n");
  printf("%d  %d\n",r21,r22);
  printf("%d   %d\n",r23,r24);
  int r1=(r11*r21);
  int r3=(r13*r22);
  int r2=(r12*r23);
  int r4=(r14*r24);
  printf("\nMatrix after multiplication=\n");
  printf("%d  %d\n",r1,r2);
  printf("%d  %d\n",r3,r4);

}
