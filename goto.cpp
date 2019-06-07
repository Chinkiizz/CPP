//GOTO LOOP

#include<stdio.h>
 #include<iostream>
   using namespace std;
   
   int main()
   {
   	  int i=1;
   	  AGAIN:  //this again is the label name, name it anything  u want
   	  cout<<i<<endl;
   	  i++;
   	 
			 if(i<=20)
   	  			goto AGAIN;
   	  
   	 return 0;
   	 
   }
