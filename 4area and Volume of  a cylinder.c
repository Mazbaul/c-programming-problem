#include<stdio.h>
void main()
{
    float pi=3.1416,r,h,area,volume;
    scanf("%f%f",&r,&h);

    area=2*pi*r*(h+r);
    volume=pi*r*r*h;

    printf("area is =%f\nvolume is =%f\n",area,volume);


}
