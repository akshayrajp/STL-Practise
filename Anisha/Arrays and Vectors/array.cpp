//C++ code to demonstrate working of array container 
#include<iostream> 
#include<array>
#include<tuple> 
using namespace std; 
int main() 
{ 
	array<int,5> a= {10, 20, 30, 40, 50};
	int i;
	array<int,5> a1;

	cout<<"First and last elements of array a are : "<<a.front()<<" and "<<a.back()<<endl;
	 a1.empty()? cout<<"empty Array": 
        cout<<"Non empty Array"; 
    cout<<endl; 

    //finding out maximum size
    cout<<"Maximum number of elements array a1 can have is:"<<a1.max_size()<<endl;

    //filling empty array a1
    a1.fill(10);

	//Swapping arrays
    a.swap(a1); 

    //Printing swapped elements of array a using at()
    cout<<"The elements of array a are:\n"; 
    for(i=0;i<5;i++) 
    cout<<a.at(i)<<" ";
    cout<<endl;
     
    //Printing swapped elements of array a1 using operator[]
	cout<<"The elements of array a1 are:\n"; 
    for(i=0;i<5;i++) 
    cout<<a1[i]<<" ";
    cout<<endl;
	
    return 0;
}



