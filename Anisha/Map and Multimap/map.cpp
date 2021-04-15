//CPP code to demonstrate Map implementation
#include<iostream> 
#include<iterator> 
#include<map> 
using namespace std; 
int main() 
{ 
    map<int,int> map1,map2; 
    map1.insert(pair<int,int>(2,20)); 
    map1.insert(pair<int,int>(1,10)); 
    map1.insert(pair<int,int>(3,30)); 
    map1.insert(pair<int,int>(5,50)); 
    map1.insert(pair<int,int>(4,40));

    map<int,int>::iterator it; 
    cout<<"The map1 elements are:\n";
    for(it=map1.begin();it!=map1.end();++it)
    { 
        cout<<it->first<<' '<<it->second<<'\n'; 
    } 
    cout<<endl;

    //Copying elements of one map to another
    map2=map1;
    cout<<"The map2 elements after copying are:\n";
    for(it=map2.begin();it!=map2.end();++it)
    { 
        cout<<it->first<<' '<<it->second<<'\n'; 
    } 
    cout<<endl;

    //Finding elements associated with the key in map
    auto itr=map1.find(2);
    cout<<"The map element associated with given key is:\n";
    cout<<itr->first<<' '<<itr->second<<'\n'; 

    map2.erase(map2.find(2),map2.find(4)); 
    cout<<"Map2 after deletion of elements:\n";
    for(it=map2.begin();it!=map2.end();++it) 
    { 
        cout<<it->first<<' '<<it->second<<'\n'; 
    } 
    cout<<endl;
    return 0; 
} 