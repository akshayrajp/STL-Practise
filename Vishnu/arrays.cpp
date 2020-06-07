#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
	//Initializing 
	array<int,5> arr={2,4,6,8,10};
	array<int,5> arr1={1,3,5,7,9};
	
	cout<<"Front"<<arr.front()<<endl;  //front()
	cout<<"Back"<<arr.back()<<endl;   //back()
	
	//size()
	cout<<"No.of elements:"<<arr1.size();
	
	//swapping arr and arr1
	arr.swap(arr1);
	cout<<"After Swap arr:"<<arr<<endl<<"arr1:"<<arr1;
	
	//empty() and fill()
	arr.empty()?cout<<"Empty":cout<<"Array isn't empty";
	
	arr1.fill(10);
	cout<<"After Fill()";
	//at() to display array
	for(int i=0;i<5;i++)
		cout<<arr1.at(i);
		
}
