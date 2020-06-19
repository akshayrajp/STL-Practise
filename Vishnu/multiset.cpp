
#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
    // empty multiset container 
    multiset <int, greater <int> > ms;         
  
    // insert elements in random order 
    ms.insert(40); 
    ms.insert(30); 
    ms.insert(60); 
    ms.insert(20); 
    ms.insert(50); 
    ms.insert(50);  
    ms.insert(10); 
  
    multiset <int, greater <int> > :: iterator itr; 
    cout << "\nThe multiset ms is : "; 
    for (itr = ms.begin(); itr != ms.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
  
    multiset <int> ms1(ms.begin(), ms.end()); 
  
    cout << "\nThe multiset ms1 after assign from ms is : "; 
    for (itr = ms1.begin(); itr != ms1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
  
    cout << "\nms1 after removal of elements less than 30 : "; 
    ms1.erase(ms1.begin(), ms1.find(30)); 
    for (itr = ms1.begin(); itr != ms1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    int num; 
    num = ms1.erase(50); 
    cout << "\nms1.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = ms1.begin(); itr != ms1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    cout << endl; 
  
    cout << "ms.lower_bound(40) : " 
         << *ms.lower_bound(40) << endl; 
    cout << "ms.upper_bound(40) : " 
         << *ms.upper_bound(40) << endl; 
  
    cout << "ms1.lower_bound(40) : " 
         << *ms1.lower_bound(40) << endl; 
    cout << "ms1.upper_bound(40) : " 
         << *ms1.upper_bound(40) << endl; 
           
         return 0; 
  
} 
