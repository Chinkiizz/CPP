//Standard template library makes programming experience a lot easier and save overheads and time
//vector represents arrays that can change in size, i.e dynamic arrays. it is flexible and reliable.

#include<vector>
#include<iostream>
using namespace std;

int main()
{
vector<int>vec1(10);
vector<double>vec2(5);
vector<int> vec3();         //empty vector of int type.
vector<int> vec4(3,7);      //3 elements and all 3 will be initialized to 7
unsigned int vec1_size= vec1.size();

int a=vec4.at(0);
cout<<endl<<a;
int b=vec4.empty();
cout<<endl<<vec4.size();
return 0;
}

