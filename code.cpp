#include<iostream>

using namespace std;
int main(){

int i,a[10];
for(i=0;i<10;i++)
{
cout<<"Enter value of array"<<i+1<<endl;
cin>>a[i];
}

int MIN,MAX;
MAX=a[0];

for(i=1;i<10;i++)
{
    if(a[i]>MAX)
        MAX=a[i];

}
MIN=a[0];
for(i=1;i<10;i++)
{
    if(a[i]<MIN)
       MIN=a[i];

}

cout<<"max is "<<MAX<<"min is "<<MIN;
return 0;
}
