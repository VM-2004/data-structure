#include<iostream>
using namespace std;
int main()
{
	 int n,r,c=0;
	 cout<<"enter number:";
	 cin>>n;
	 while(n != 0)
	 {
	 	 r=n%10;
	 	 if(r==0)
	 	 {
	 	     c++;	
		 }
		 n=n/10;
	 }
	 if(c > 0)
	 {
	 	 cout<<"number is duck";
	 }
	 else
	 {
	 	 cout<<"number is not duck";
	 }
}
