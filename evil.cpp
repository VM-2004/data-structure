#include<iostream>
using namespace std;
int main()
{
	
	  int n,cnt,r;
	  cout<<"enter a number:";
	  cin>>n;
	  while(n != 0)
	  {
	  	   r=n%10;
	  	      if(r == 1)
	  	      {
	  	           cnt++;	
			  }
			n=n/10;
	  }
	  if(cnt%2 == 0)
	       cout<<"evil num";
	  else
	       cout<<"not evil";
}
