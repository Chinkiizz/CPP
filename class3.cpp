#include<iostream>
 using namespace std;

 class triangle{
 private:

 int base, height,area,per;
 int a,b,c;

 public:
 int get(){
cout<<"Enter base, height of the triangle\n";
cin>>base>>height;
}
    int calcarea()
    {

        cin>>base>>height;
        cout<<endl;
                    area=0.5*base*height;
            cout<<"Area of triangle is \n"<<area;
 }
    int calcper()
 {
        cout<<"Enter sides of a triangle";
        cin>>a>>b>>c;
        per=0;
        per=a+b+c;
        cout<<"perimeter is "<<per;
 }
        triangle()
 {
 }
 ~triangle()
 {
}

}t1;

int main()
{
t1.calcper();
t1.calcarea();
return 0;}
