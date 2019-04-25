#include<iostream>
  using namespace std;


  int [] fun(int n){
  int *P;
  P=new int[5];             //heap memory allocation
  cout<<P;
  }

  int main()
  {
  int *A;
  A=fun(5);
  cout<<A;
  return 0;
  }
