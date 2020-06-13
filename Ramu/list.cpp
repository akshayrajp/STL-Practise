
#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 

int main() 
{ 
  
    list <int> a,b; 
    
    list <int> :: iterator j; 
  
    for (int i = 1; i < 10; ++i) 
    { 
        a.push_back(i ); 
        b.push_front(i + 1 );
    }
    for (j= a.begin(); j!= a.end(); j++) 
        cout << *j << '/n';
    for (j= b.begin(); j!= b.end(); j++) 
        cout << *j << '/n';
//front and back function
 cout <<a.front(); 
    cout << a.back(); 
    // poping the element
      a.pop_front();  
    a.pop_back(); 
    for (j= a.begin(); j!= a.end(); j++) 
        cout << *j << '/n';
// sort nd reverse method
a.reverse();
b.sort(); 
 for (j= a.begin(); j!= a.end(); j++) 
        cout << *j << '/n';
    for (j= b.begin(); j!= b.end(); j++) 
        cout << *j << '/n';

        return 0;
}


