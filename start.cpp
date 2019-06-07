//functions are sub programs which are used to reduce code
/*
1 functions without parameters
2 functions with return value
3 function with return values and parameters
*/

#include<iostream>

using namespace std;

int main()     //this is an example of function
{
    int n;
while(1)
{
cout<<"Enter a number (0 for end)";

        if( n == 0 ){
            break;
        Print(n);
        }
}
return 0;
}
void Print(int n)
{                   //function
for(int i = 1 ; i <= n ; i++)
cout<<"*";
cout<<endl;
}
