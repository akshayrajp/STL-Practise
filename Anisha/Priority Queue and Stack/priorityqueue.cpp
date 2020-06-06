//CPP code to demonstrate Priority Queue implementation
#include<iostream> 
#include<queue> 
using namespace std; 
int main()
{
    //Declaring value_type for priority queue 
    priority_queue<string>::value_type AString;
    priority_queue<string> pqueue; 
    
    pqueue.emplace("codeCraft");
  
    //here AString acts as a varibale of string data type 
    AString="coding.studio();"; 
    cout<<"The value_type AString is = "<<AString;
    cout<<endl; 
 
    AString="CSSOC"; 
    pqueue.push(AString); 
    AString="I/O 2020"; 
    pqueue.push(AString); 
    AString="codeCraft beta"; 
    pqueue.push(AString);

    cout<<"Size of priority queue is:"<<pqueue.size()<<"\n";
  
    cout<<"Elements of priority queue are :\n";
    while(!pqueue.empty())
    { 
        cout<<pqueue.top()<<" ";
        pqueue.pop(); 
    }
        cout<<endl;
  
    return 0; 
}