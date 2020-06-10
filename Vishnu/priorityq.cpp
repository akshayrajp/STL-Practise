#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void showpq(priority_queue <int> pqq) 
{ 
    priority_queue <int> pq = pqq; 
    while (!pq.empty()) 
    { 
        cout << ends << pq.top(); 
        pq.pop(); 
    } 
    cout << endl; 
} 
  
int main () 
{ 
    priority_queue <int> pq; 
    pq.push(1); 
    pq.push(3); 
    pq.push(5); 
    pq.push(7); 
    pq.push(9); 
  
    cout << "Queue: "; 
    showpq(pq); 
  
    cout << "Size : " << pq.size()<<endl; 
    cout << "Top: " << pq.top()<<endl; 
  
  
    cout << "Pop : "; 
    pq.pop();
	pq.pop(); 
    showpq(pq); 
  
    return 0; 
} 
