//CPP code to demonstrate Multimap immap1lementation
#include<iostream> 
#include<map> 
#include<iterator> 
using namespace std; 
int main() 
{ 
    multimap<int,int> mmap1;
    mmap1.insert({2,40}); 
    mmap1.insert({1,10}); 
    mmap1.insert({3,30}); 
    mmap1.insert({1,20}); 
    mmap1.insert({5,60}); 
    mmap1.insert({6,70});

    multimap<int,int>::iterator it; 
    cout<<"The mmap1 contents are:\n";
    for(it=mmap1.begin();it!=mmap1.end();++it) 
    { 
        cout<<it->first<<' '<<it->second<<'\n'; 
    } 
    cout<<endl;

    auto i=mmap1.equal_range(1);
    cout<<"The multimap element of key 1 is:\n";
    for(auto itr=i.first;itr!=i.second;++itr)
    { 
        cout<<itr->first<<' '<<itr->second<<'\n'; 
    } 
    cout<<endl;

    it=mmap1.find(3); 
    mmap1.insert(it,{4,50});
    cout<<"The mmap1 contents after insertion are:\n";
    for(it=mmap1.begin();it!=mmap1.end();++it) 
    { 
        cout<<it->first<<' '<<it->second<<'\n'; 
    }
    cout<<endl; 
    return 0;
} 