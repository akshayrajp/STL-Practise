//C++ code to demonstrate working of forward list container 
#include<iostream> 
#include<forward_list>  
using namespace std; 
  
int main() 
{  
    forward_list<int> flist;  
  
    //Assigning values using assign() 
    flist.assign({11,22,33,44,55,66}); 

    //Inserting value at the front using emplace_front()
    flist.emplace_front(1);

    //Declaring a forward list iterator 
    forward_list<int>::iterator ptr; 
  
    //Inserting value using insert_after() 
    ptr= flist.insert_after(flist.begin(),{3, 6, 9});

    //Removing element according to the condition 
    flist.remove_if([](int x){return ((x<20)&&(x>10));
    }); 

    //Displaying the forward list 
    cout<<"The forward list elements are:\n"; 
    for(int&i : flist)  
    cout<<i<<" "; 
    cout<<endl; 
  
  	forward_list<int> flist2={10,12,15,18};

  	//Adding elements of 1 list to another
  	flist.splice_after(flist.begin(),flist2);
    cout<<"The list elements are:\n"; 
    for(int&i:flist)  
    cout<<i<<" "; 
    cout<<endl;
    
    //Sorting elements
    flist.sort();
    cout<<"The final list is:\n"; 
    for(int&i:flist)  
    cout<<i<<" "; 
    cout<<endl;
    
    return 0;
}