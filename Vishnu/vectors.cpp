#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Declaring vector 
    vector<int> v,v1; 
  	
  	//inserting elements from  back
    for (int i = 1; i <= 5; i++) 
        v.push_back(i);
    for (int i = 6; i <= 10; i++) 
        v1.push_back(i);
    
   // deleting last element 
    v.pop_back(); 
  
    cout << "The vector elements : "<<endl; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts at the beginning 
    v.insert(v.begin(), 10); 
  
     // removes the first element 
    v.erase(v.begin()); 
  
    cout << "The first element is: " << v[0]<<endl; 
  
    
    
  
   // Swap() 
    v.swap(v1); 
  
    cout << "After Swap V: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    cout <<endl<< "V1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
    cout<<endl;
    // erases the vector 
    v.clear(); 
    cout << "Vector size after erase(): " << v.size(); 
    	return 0;
} 
