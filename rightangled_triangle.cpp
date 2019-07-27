#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c;
int side1,side2;
int i,j;
cout<<"Enter sides of the triangle\n";
cin>>a>>b;
side1=pow(a,2);
side2=pow(b,2);

c=sqrt(side1+side2);
cout<<"Hypotenus of triangle is \n" <<c;

return 0;}
