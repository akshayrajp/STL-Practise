#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
    
    set <int, greater <int> > s;         
  
    
    s.insert(40); 
    s.insert(30); 
    s.insert(60); 
    s.insert(20); 
    s.insert(50); 
    s.insert(50);  
    s.insert(10); 
  
     
    set <int, greater <int> > :: iterator itr; 
    cout << "The set : "; 
    for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << ends << *itr; 
    } 
    cout << endl; 
  
     
    set <int> s1(s.begin(), s.end()); 
  
   
    cout << "S1: "; 
    for (itr = s1.begin(); itr != s1.end(); ++itr) 
    { 
        cout << ends << *itr; 
    } 
    cout << endl; 
  
    
    cout << " After removal of elements less than 30 : "; 
    s1.erase(s1.begin(), s1.find(30)); 
    for (itr = s1.begin(); itr != s1.end(); ++itr) 
    { 
        cout << ends << *itr; 
    } 
  
     
    int num; 
    num = s1.erase (50); 
    cout << "s1.erase(50) : "; 
    cout << num << " removed "<< ; 
    for (itr = s1.begin(); itr != s1.end(); ++itr) 
    { 
        cout <<ends << *itr; 
    } 
  
    cout << endl; 
  
     
    cout << "s.lower_bound(40) : "
         << *s.lower_bound(40) << endl; 
    cout << "s.upper_bound(40) : "
         << *s.upper_bound(40) << endl; 
  
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl; 
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl; 
  
    return 0; 
  
} 
