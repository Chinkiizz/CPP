#include<iostream>
using namespace std;

class a{
private:
char name[10];
int age;
public:
 void getdata(void);
 void display(void);
}b;


void a::getdata(void)
{
cout<<"Enter name and age";
cin>>name>>age;

}

void a::display(void)
{

cout<<name;
cout<<age;
}

int main()
{
b.getdata();
b.display();
return 0;
}
