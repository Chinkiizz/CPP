#include<iostream>
using namespace std;


int main()
{

int number=0,n=0,i,temp=0,rever=0;
cout<<"Enter a number";
cin>>number;
temp=number;
for(i=0;;i++)
{
    n=number%10;
    rever=(rever*10)+n;

    number=number/10;
if(number==0)
break;
}
cout<<temp<<endl;
cout<<rever;
if(temp==rever)
{
    cout<<"Palindrome";}
else{
        cout<<"no";
}
}
