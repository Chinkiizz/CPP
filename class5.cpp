#include<iostream>
using namespace std;

class rectangle{

private:
int base;
int height;
int area;
public:
int getval(int , int );
int display();
};

int rectangle::getval(int x,int y)
{
base=x;
height=y;
area=0.5*base*height;
return area;

}
int rectangle ::display()
{cout<<area;
}

int main()
{
rectangle R;
int a,b;
cin>>a>>b;

R.getval(a,b);
R.display();
return 0;
}
