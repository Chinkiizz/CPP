#include<iostream>
using namespace std;

struct Student{
int  age;
int rollno;
char name[20];

}s;


int main()
{
 //s={20,36,"Anoushka"};
 cin>>s.age;

struct Student *p=&s;
p->age=22;
cout<<s.age;
cout<<s.rollno;
return 0;
}
