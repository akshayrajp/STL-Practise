
#include <iostream> 
#include <deque> 
  
using namespace std; 

int main() 
{
 deque <int> a; 
  deque <int> :: iterator j;
  // pushing the elements
    a.push_back(1); 
    a.push_front(2); 
     a.push_front(9);
    a.push_back(3); 
    a.push_front(4);  
    for (j= a.begin(); j!= a.end(); j++) 
        cout << *j << '/n';
     cout << a.size(); 
    cout << a.max_size(); 
  cout << a.at(5); 
     //poping the elements
    a.pop_front();  
    a.pop_back(); 
    for (j= a.begin(); j!= a.end(); j++) 
        cout << *j << '/n';

        return 0;
}
