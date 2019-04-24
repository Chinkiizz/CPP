#include<iostream>
using namespace std;

struct Student{
char name[10];
int age;
int marks;

};

int main()
{
struct Student S1[4];
for(int i=0;i<5;i++)
{

    cin>>S1[i].name>>S1[i].age>>S1.marks;


}

for(int i=0;i<5;i++)
{

cout<<" Name is "<<S1[i].name;
cout<<" Age is "<<S1[i].age;
cout<<" marks is "<<S1[i].marks;
}
return 0;}
