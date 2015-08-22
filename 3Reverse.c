#include<stdio.h>
void main()
{
    int num,x1,x2,x3,x4,x5;
    printf("Enter a Integers :");
    scanf("%d",&num);
    x1=num/10;
    x2=num%10;
    x3=x1/10;
    x4=x1%10;
    x5=x2+x3+x4;
    printf("Reverse of the given number is %d%d%d\n",x2,x4,x3);
    printf("The addition of the reverse number is %d",x5);
    getch();

}
