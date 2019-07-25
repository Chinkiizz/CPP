#include<iostream>
using namespace std;
int main()
{
string A;
int i;

cout<<"Enter a string \n";
cin>>A;
for( i=0;A[i]!='\0';i++)
{
   if(A[i]=='a'|| A[i]=='e' || A[i]=='i'|| A[i]=='o' ||A[i]=='u')
      {
       A[i]='#';
      }
}

for(i=0;A[i]!='\0';i++)
{
cout<<A[i];
}
return 0;}
