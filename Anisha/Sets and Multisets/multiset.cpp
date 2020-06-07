//CPP code to demonstrate Multiset implementation
#include<iostream> 
#include<set> 
#include<iterator>
using namespace std; 
int main() 
{ 
    multiset<int> mset1;
    mset1.insert(100); 
    mset1.insert(500); 
    mset1.insert(800); 
    mset1.insert(300); 
    mset1.insert(300); 
    mset1.insert(600);
    mset1.insert(200); 
    mset1.insert(90);

    multiset<int>:: iterator it; 
    cout<<"Mset1 is:\n"; 
    for(it=mset1.begin();it!=mset1.end();++it) 
    { 
        cout<<*it<<" "; 
    } 
    cout << endl;

    auto pos=mset1.find(300);
    cout<<"The multiset elements after 300 are:\n"; 
    for(it=pos;it!=mset1.end();it++) 
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    int n=mset1.erase(800); 
    cout<<"Mset1 is:\n"; 
    for(it=mset1.begin();it!=mset1.end();++it) 
    { 
        cout<<*it<<" "; 
    }
    cout<<endl;

    auto itr = mset1.equal_range(300); 
    cout<<"The lower bound of 300 is: "<<*itr.first<<"\n"; 
    cout<<"The upper bound of 300 is: "<<*itr.second;
    return 0;
}