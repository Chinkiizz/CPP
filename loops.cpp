//infinite loops

#include<iostream>
 using namespace std;
 
 int main()
 {
 /*
 	for(int i=1;;i++)
 	{
 		cout<<"#"<<endl;
 		
	 }
 	return 0;
 }
 
 */
 /*
 while(true)
 {
 	cout<<"$"<<endl;
 	cout<<"#"<<endl;
 	
 }
 
 return 0;
}
*/





//nested loops
int m,n;

cout<<"Enter m and n\n ";
cin>>m>>n;

for(int i=0;i<=m;++i)
{
	 for(int j=0;j<=n;++j)
	 	cout<<"#";
	 
	 cout<<endl;

}
return 0;

}
