#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,i,f=1;
	string op;

	 cout<<" a va b ra vared konid:";
	 cin>>a>>b;
	 cout<<" yeki az amaliat ha ra vared konid: zarb / taghsim/ radical / cos / cot / tan / factorial:";
	  cin>>op;
	  c=(a*3.14)/180;
	  
	  if(op=="taghsim")
	  if(b==0)
	  cout<<" error";
	  else 
	  cout<<"result is:"<<a/b;
	  
	  if(op=="zarb")
	  cout<< "result is:"<<a*b;
	  
	  
	  else if(op=="radical")
	   cout<< "result is:"<<sqrt(a);
	   
	    
	    else if(op=="sin")
	    cout<< "result is:"<<sin(c);
	    

	   else if(op=="cos")
	    cout<< "result is:"<<cos(c);
	    
	    
	    else if(op=="tan")
	     cout<< "result is:"<<tan(c);
	     
	     
	      
	    else if(op=="cot")
	     cout<< "result is:" <<1/tan(c);
	     
	     	    else if(op=="factorial")
	     	    {
				 
	            for(i=1;i<=a;i++)
	            f=f*i;
	            cout<< "result is:"<<f;}
	        }
	            
	     
	     
	   
	   
	  
	  
	
