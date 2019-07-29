#include<stdio.h>
int main()
{
int a=5;
int b;
b=a++ + ++a + a++ + ++a;
printf("%d", b);
return 0;}
