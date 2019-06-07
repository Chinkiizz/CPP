#include<iostream>
 
 #include<stdio.h>
 using namespace std;
 
 
 
 int main()
 {
 	int i;
 	for(i=20;i>=1;i--)
 	{
 		if(i%3!=0)
 			continue;
 		
		 cout<<i<<endl;
 		
	 }
	 return 0;
	 
 }
