#include<stdio.h>
 #include<iostream>

  using namespace std;
template<class T> // This means effect of template starts from class and ends right after class ends

  class Arithmetic{
  private:
  T a,b;    // now they are generic type data type
  public:
  Arithmetic(T x,T y);          //constructor
  T add();
  T mul();
  };
  template<class T>
  Arithmetic <T>::Arithmetic(T x,T y)
 {
    this->a=x;
  this->b=y;
  }
  template<class T>
  T Arithmetic<T>::add()
  {
  T c;
  c=a+b;
  }
  template<class T>
  T Arithmetic<T>::mul()
  {
  T c;
  c=a*b;
  }
  int main()
  {
      Arithmetic<float> A(10.5,5.2);        // due to this, everywhere T will be replaced by int
                                            //Hence this class becomes a pure integer class
cout<<A.add();
cout<<"\nEnter two numbers";


  cout<<"Add and multiply numbers";
Arithmetic<int> A1(2,5);
  cout<<A1.mul();
cout<<A1.add();
  return 0;}
