//Pass by reference i.e any changes done to formal parameters is reflected to actual parameters.
#include<iostream>
  using namespace std;


  void swap(int *c,int *d)
  {
        int temp=0;
        temp=*c;
        *c=*d;
        *d=temp;
  }
  int main()
  {
  int a=0,b=0;
    cout<<"Enter two values ";
  cin>>a>>b;
  swap(&a,&b);
  cout<<"Swapped values are \n"<<a<<endl<<b;
  return 0;
  }
