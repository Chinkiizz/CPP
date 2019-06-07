#include<iostream>
 using namespace std;

 int main()
{
int a[7],b[9], c[20]={0},i;
cout<<"\nEnter values in array a\n";
for(int i=0;i<7;i++)
{
cin>>a[i];

}


cout<<"Enter values in array b\n";

for(int i=0;i<9;i++)
{
cin>>b[i];

}





for( i=0;i<7;i++)
{

    c[i]= a[i];
}

for(i=0;i<9;i++)
{
    c[i+7]=b[i];

}
cout<<"\n";

for(i=0;i<16;i++){

cout<<c[i];
}

 return 0;
 }
