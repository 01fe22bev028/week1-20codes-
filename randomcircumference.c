#include<stdlib.h>
int main()
{

    int r=rand()%100+1;
    int area;
    int cir;
    printf("Radius of circle is given by\n");
    printf("%d %d\n",r);

    area=3.142*r*r;
    printf("area of circle is\n");
    printf("%d %d\n",area);

    cir=2*3.142*r;

      printf("circumference of circle is\n");
    printf("%d %d\n",cir);
}
