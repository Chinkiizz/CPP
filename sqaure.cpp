#include<iostream>

 using namespace std;

 struct square{
 int a;
 int area;

 }x;
 int main()
 {
 struct square *pointer=&x;
 cout<<"Enter side";
 cin>>pointer->a;
//pointer->area=(pointer->a)*(pointer->a);
(*pointer)
cout<<pointer->area;
//pointer.area=pointer->a* pointer->a;
 return 0;}
