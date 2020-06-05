#include<iostream> 
#include<forward_list>  
using namespace std; 

int main() 
{  
    forward_list<int> list;  
    forward_list<int> list1={10,12,15,18};
	forward_list<int>::iterator ptr; 
	 
    //Assigning the values 
    list.assign({1,2,3,4,5,6}); 

    //Inserting value emplace_front()
    list.emplace_front(8);
  
    //insert_after() 
    ptr= list.insert_after(list.begin(),{3, 5, 7});

    //Removing element on condition 
    list.remove_if([](int j)
	{
	return ((j<5)&&(j>15));
    }
	); 

    //Printing the forward list 
    cout<<"The forward list elements are:\n"; 
    for(int&i : list)  
    	cout<<i<<" "; 
    cout<<endl; 
	
  	list.splice_after(list.begin(),list1);
    cout<<"List :\n"; 
    for(int&i:list)  
    	cout<<i<<""; 
    cout<<endl;

    //Sorting the List
    list.sort();
    cout<<"Sorted list:\n"; 
    for(int&i:list)  
    	cout<<i<<""; 
    cout<<endl;

    return 0;
} 
