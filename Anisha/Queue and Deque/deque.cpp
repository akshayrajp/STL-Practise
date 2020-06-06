//CPP code to illustrate Deque implementation
#include<iostream> 
#include<deque> 
using namespace std; 
int main() 
{ 
    deque<int> deque1; 
    deque<int>::iterator it;
    deque1.push_back(24); 
    deque1.push_front(36); 
    deque1.push_back(12); 
    deque1.push_front(48); 
    cout<<"The deque is:\n"; 
    for(it=deque1.begin();it!=deque1.end();++it) 
    cout<<*it<<" "; 
    cout<<endl;

    it=deque1.end(); 
    deque1.erase(it);
    //Deleting the first element
    deque1.pop_front();

    //Print the first element of deque using cbegin() 
    cout<<"First element of the deque is: "; 
    cout<<*deque1.cbegin();
    cout<<endl;
    
    it=deque1.begin();
    //Inserting element at the front
    deque1.insert(it,60);
    it=deque1.end();
    it--;
    it=deque1.insert(it,30);
    cout<<"The final deque is:\n"; 
    for(it=deque1.begin();it!=deque1.end();++it) 
    cout<<*it<<" "; 
    cout<<endl;
    deque1.clear();
    return 0;
}