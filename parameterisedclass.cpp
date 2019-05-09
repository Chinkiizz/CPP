#include<iostream>
 using namespace std;

 class triangle{
 private:

 int base, height,ar,pe;
 int side1,side2,side3;

 public:

    triangle(int b,int h,int s1,int s2,int s3)        //parameter constructor
{ base=b;
height=h;
side1=s1;
side2=s2;
side3=s3;
}
  int area();        //definition of  function inside class public
     int per();

};


int triangle:: area(){
    ar=0.5*base*height;
return ar;
}

int triangle ::per(){
pe=side1+side2+side3;
return pe;

}
int main()
{
    triangle t1(4,2,3,3,3);
cout<<t1.per();
cout<<t1.area();
return 0;
}
