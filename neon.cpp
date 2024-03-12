#include<iostream>
using namespace std;
int main()
{
	  int num,square=0,sum=0,rem;
	  cout<<"enter num:";
	  cin>>num;
	  square=num*num;
	  cout<<"numberi is:"<<num<<" "<<"square="<<square<<endl;
	  while(square != 0)
	  {
	  	  rem=square%10;
	  	  sum=sum+rem;
	  	  square=square/10;
	  }
	  cout<<"addition is"<<sum;
	  if(num==sum)
	      cout<<"num is neon";
	  else
	      cout<<"num is not neon";
	
}
