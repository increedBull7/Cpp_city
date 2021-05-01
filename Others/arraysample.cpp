#include<iostream>
using namespace std;
int main ()
{
	
	int arr[1000];
	int i;
	int count=0;
	cout<<"Enter the elements"<<endl;
	cout<<"Enter any character to stop reading"<<endl;
	for(i=0;i<1000;i++)
	{
		
		cin>>arr[i];
		if(arr[i]>=0&&arr[i]<=9)
		    count++;
		else 
		    break;
}
	cout<<count;
	
}