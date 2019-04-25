//Pass by value , We see that the changes done inside function does not get reflected to actual parameters



#include<iostream>
 using namespace std;

void swap(int c, int d)
{
    int e;
    e=c;
    c=d;
    d=e;
    cout<<"\nSwapped values are "<<c<<endl<<d;
}
 int main()
 {
int a,b;
 cout<<"\nEnter a and b values";
 cin>>a>>b;
 swap(a,b);
 cout<<"Swapped values are "<<a<<b;
 return 0;
 }
