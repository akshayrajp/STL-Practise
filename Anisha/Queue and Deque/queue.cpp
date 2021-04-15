//CPP code to illustrate Queue implementation
#include<iostream> 
#include<queue> 
using namespace std; 
int main() 
{ 
    queue<int> queue1,queue2; 
    queue1.push(12); 
    queue1.push(23); 
    queue1.push(34); 
    queue1.push(45);
    queue1.push(56);
    
    cout<<"queue1.size():"<<queue1.size()<<"\n";
  
    for(int i=0;i<5;i++)
    { 
      queue2.push(i*2);
    } 

    cout<<"queue2.size():"<<queue2.size()<<"\n"; 

    //Swap elements of queues 
    queue1.swap(queue2); 

    cout<<"Queue1 Elements are:\n"; 
    while(!queue1.empty())
    {
        cout<<queue1.front()<<" ";
        queue1.pop();
    }
    cout<<endl;

    cout<<"Queue2 Elements are:\n"; 
    while(!queue2.empty())
    {
        cout<<queue2.front()<<" ";
        queue2.pop();
    }
    cout<<endl;

    //Delete first element of the queue
    queue1.pop();
    queue2.pop();
  
    cout<<"queue1.front():"<<queue1.front()<<"  "<<"queue2.front()"<<queue2.front()<<"\n"; 
    cout<<"queue1.back():"<<queue1.back()<<"  "<<"queue2.back()"<<queue2.back()<<"\n"; 
    return 0; 
} 