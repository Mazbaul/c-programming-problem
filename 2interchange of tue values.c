#include<stdio.h>
int main()
{
 int C,D,E;
 printf("Enter two numbers C and D\n");
 scanf("%d%d",&C,&D);
 printf("value of C is=%d\nvalue of D is=%d\n",C,D);
 E=C;
 C=D;
 D=E;
 printf("After interchange\nValue of C=%d\nValue of D=%d\n",C,D);
 return 0;
}
