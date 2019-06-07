#include<stdio.h>
#include<iostream>
 using namespace std;
 // to skip one loop iteration
 
 
 int main()
 {
 	
 	for(int i=1;i<=20;i++)
{
if(i%3==0)
	continue; //if above if conditions comes true, the compiler will skip since continue is there

cout<< i<<endl;
 }
  	return 0;

 }
