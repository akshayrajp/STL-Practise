#include <iostream> 
#include <deque> 
  
using namespace std; 
  
void showq(deque <int> q) 
{ 
    deque <int> :: iterator it; 
    for (it = q.begin(); it != q.end(); ++it) 
        cout << ends << *it; 
    cout << endl; 
} 
  
int main() 
{ 
    deque <int> dq; 
    
	dq.push_front(3);
	dq.push_front(5); 
	dq.push_front(7);
	dq.push_back(2);
	dq.push_back(4); 
  	dq.push_back(6);
    
	cout << "The deque dq is : "; 
    showq(dq); 
  
    cout << "Size : " << dq.size()<<endl; 
  
    cout << "At():" << dq.at(2)<<endl; 
    cout << "Front:" << dq.front()<<endl; 
    cout << "End:" << dq.back()<<endl; 
  
    cout << "Pop_front(): "; 
    dq.pop_front(); 
    showq(dq); 
  
    cout << "Pop_back() : "; 
    dq.pop_back(); 
    showq(dq); 
  
    return 0; 
} 
