#include<iostream>
using namespace std;
int main()
{
	  int n,r,s,m;
	  cout<<"emter a number:";
	  cin>>n;
	  while(n != 0)
	  {
	  	   r=n%10;
	  	   s=s+r;
	  	   m=m*r;
	  	   n=n/10;	   
       }
      if(s == m)
      {
      	     cout<<"spy number";
	  } 
      else
      {
      	     cout<<"not spy number";
	  }
}
          

