#include <iostream> 
#include <queue> 
  
using namespace std; 

int main() 
{ 
    queue <int> a; 
    // push and pop function
    a.push(10); 
    a.push(20); 
    a.push(30);
    a.push(50);
     cout <<a.size();  
     cout <<a.pop();
     cout <<a.size();
// front and back fun
cout <<a.front():
 cout <<a. back();
//empty fun
 while (!a.empty()) 
    { 
        cout <<'\t'<< a.front(); 
        a.pop(); 
    } 
 return 0;
}
