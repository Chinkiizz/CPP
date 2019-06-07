#include<stdio.h>
 #include<conio.h>
 #include<iostream>
  using namespace std;
  
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2!=0 && j%2!=0)
			
				cout<<" "<<endl;
			
			
			else if(i%2==0 && j%2==0)
			
				cout<<"$";
				
		
		}
	cout<<endl;
	}
	
}
