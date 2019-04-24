
#include<iostream>

using namespace std;

int main()
{
int a=24;
int &s=a;
cout<<a;
cout<<"\n"<<s;
s++;
s++;
s+=50;
cout<<endl<<a;

return 0;
}
