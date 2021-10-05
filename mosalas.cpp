#include <iostream>
using namespace std;
int main()
{   int a,b,c;
	cout<<"andaze azla mosalas ra vared konid :";
	cin>>a>>b>>c;
	
	
	if(a+b>c  &&  a+c>b  &&  b+c>a)
	cout<<"tashkil mosalas midahad";
	    else  
	       cout<<"tashkil mosalas nemidahad";
}