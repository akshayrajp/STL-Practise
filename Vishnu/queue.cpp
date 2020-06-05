#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void showq(queue <int> temp) 
{ 
    queue <int> t = temp; 
    while (!t.empty()) 
    { 
        cout << ends << t.front(); 
        t.pop(); 
    } 
    cout << endl; 
} 
  
int main() 
{ 
    queue <int> q; 
    
    q.push(1); 
    q.push(3); 
    q.push(5); 
  	q.push(7);
    
	cout << "The queue  is : "; 
    showq(q); 
  
    cout << "Size:" << q.size()<<endl; 
    cout << "Front:" << q.front()<<endl; 
    cout << "End :" << q.back()<<endl; 
  	
	q.pop();
    cout << "After Poping:"; 
    showq(q); 
  
    return 0; 
} 
