#include<iostream>
 using namespace std;

 struct student{

 char name[9];
 int age;

 }s1;

 int main()
 {
     s1.name={"Anoushka"};
     s1.age=20;

     struct student *p=&s1;
     (*p).age=20;
     p->age=20;
     cout<<"pointer accessing data member of structure\n"<<&p;

 return 0;
 }
