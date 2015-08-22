#include<stdio.h>
void main()
{
    int x,y,a,s,m,d,n;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    a=x+y;
    s=x-y;
    m=x*y;
    d=x/y;
    n=x%y;
    printf("Addition of %d and %d is %d\n\n",x,y,a);
    printf("Substraction of %d and %d is %d\n\n",x,y,s);
    printf("Multiplication of %d and %d is %d\n\n",x,y,m);
    printf("Divide of %d and %d is %d\n\n",x,y,d);
    printf("Modulus of %d and %d is %d\n\n",x,y,n);
    getch();
}
