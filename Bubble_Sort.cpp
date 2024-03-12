//Bubble sort 
#include<iostream>
using namespace std;
class Bubble
{
	int a[100],i,j,temp,n;
	public:
		void getdata();
		void sort();
		void disp();
};
void Bubble::getdata()
{
	cout<<"Enter How Many Elements : ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		cout<<"Enter Elements :";
		cin>>a[i];
	}
	
}
void Bubble::sort()
{
	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void Bubble::disp()
{
	cout<<"sorted array ............"<<endl;
	for(i=1; i<=n; i++)
	{
		cout<<a[i]<<"\t";
	}
}
main()
{
	Bubble obj;
	obj.getdata();
	obj.sort();
	obj.disp();
}
