#include<iostream>
 using namespace std;

 int main()
 { int a[7], b[9], c[20]={0};
 int i,j;
 //entering array1
cout<<"Enter elements of this array : ";
 for( i = 0 ; i < 7 ; i ++)
 {

        cin>>a[i];
}

//entering array 2
 cout<<"\nEnter elements of second array \n ";
for(i=0;i<9;i++)
{

    cin>>b[i];
}
for(int j=0;j<20;j++)
{
    c[j]=a[i];

  c[j+7]= b[i];
  }
for(i=0;i<20;i++)
{cout<<"\nthe merged array is \n"<<c[j];


}

/*
int MAX,MIN;

MAX=c[0];

for(j=0;j<20;j++)
{
    if(a[i]>MAX)
        MAX=a[i];
        cout<<"Maximum element is : "<<MAX;
        break;
}
MIN=c[0];

for(j=0;j<20;j++)
{
    if(a[i]<MIN)
        MIN=a[i];
        cout<<"minimum element is \n "<<MIN;
}
*/
return 0;
 }
