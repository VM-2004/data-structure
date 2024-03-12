#include<iostream>
using namespace std;

int main()
 {
    int arr[5],item,i,j;
    
    for(i=0; i < 5; i++)
    {
    	cout<<"enter array elements :";
    	cin>>arr[i];
	}
    cout<<"enter element fo search :";
    cin>>item;
    
    for(j=0; j<5; j++)
	{
        if(arr[j] == item)
		{
            cout << item << " Found at index : " << j;
            break;
        }
    }
    if(j >= 5)
    cout << "Not found";
   
}
