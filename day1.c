#include<stdio.h>
 using namespace std;



 struct Anoushka{
 char name[10];
 char add[20];
 int age;
 int dob;

 };
//This structure has memory of 34 bytes in the main memory.
 int main()
 {

 struct Anoushka A;
 cin>>"Enter name";
cout<<"Name is "<<A.name<<endl;

cin>>"Age : ";
cout<<"Age is "<<A.age;

cin>>"Address";
cout<<"Address is "<<A.add<<endl;
 return 0;
 }
