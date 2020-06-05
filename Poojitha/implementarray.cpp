#include<iostream>
#include<array>
using namespace std;

int main()
{
    cout<<"\nITERATING, USING AT, [] , GET"<<endl;
    array<int,5> arr={6,2,8,9,5};
    cout<<"\nElements in the array are: "<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    //at returns the value in the array at that position within given range.
    cout<<"Element AT index 4: "<<arr.at(4)<<endl;
    //operator returns element at specific position
    cout<<"Element at [3]: "<<arr[3]<<endl;
    //get returns value of element at specific position
    cout<<"getting 0 element: "<<get<0>(arr)<<" "<<endl;
    cout<<"\n--------------------------------------------------"<<endl;

    array<int,5> arr1={11,22,33,44,55};
    //front returns first element in the array
    cout<<"\nReturning first element in the array"<<endl;
    cout<<arr1.front()<<endl;
    //back returns last element in array
    cout<<"Returning last element in the array"<<endl;
    cout<<arr1.back()<<endl;
    cout<<"\n-------------------------------------------"<<endl;

    array<int,10> arr2={};
    //fill function, fills the array with a particular value
    arr2.fill(10);
    cout<<"\ndisplaying elements in array after filling with 10 in all indexs"<<endl;
    for(int i=0;i<=10;i++)
    cout<<arr2[i]<<" ";
    cout<<endl;
    //empty checks if array is empty
    arr2.empty()? cout << "Array empty":
    cout << "Array not empty"<<endl;
    cout<<"\n-----------------------------------------"<<endl;
    //swaps all elements with another array
    cout << "\nafter swap (replaces values in arr with values in arr1 and vice versa: "<<endl;
    cout<<"\nvalues in arr after swap: "<<endl;
    arr.swap(arr1);
    for(int i=0;i<=4;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"\nvalues in arr1 after swap: "<<endl;
    for(int i=0;i<=4;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    cout<<"\n---------------------------------------"<<endl;
    //size returns size of array
    array<int,8> arr3={};
    cout<<"Size of array"<<endl;
    cout << arr3.size() << endl;
    //max size returns max size of array
    cout<<"Max size of array"<<endl;
    cout << arr3.max_size() << endl;

}
