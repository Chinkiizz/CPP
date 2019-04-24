#include<iostream>
 using namespace  std;
  struct Rectangle
 {
 int len;
 int breadth;
 int area;
 }r;
 int main()
 {
 struct Rectangle *p=&r;
 p=new int[2];
//cin>>r.len;
//cin>>r.breadth;
//cout<<r.len;
//p->area=  2* ((p->len)+(p->breadth));
//cout<<p->area;
//area=2*len*breadth;
cout<<"Enter numbers";
cin>>(*p).len>>(*p).breadth;
//(//*p).area=(2*(((*p).len) + ((*p).breadth)));
(*p).area= (2*(((*p).len) + ((*p).breadth)));
cout<<(*p).area;
return 0;
 }
