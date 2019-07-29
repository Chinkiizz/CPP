#include<stdio.h>
 int main()
 {
 int static val=5;
 printf("%d", val--);
 if(val){
 main();
 }
 return 0;}
