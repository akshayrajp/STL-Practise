//CPP code to demonstrate Set implementation
#include<iostream> 
#include<set> 
#include<iterator> 
using namespace std;   
int main() 
{ 
    set<int> set1;  

    set1.insert(10); 
    set1.insert(11); 
    set1.insert(12); 
    set1.insert(13); 
    set1.insert(14);
    set1.insert(15); 
    set<int,greater<int>>::iterator it;
    set<int>::value_compare comp = set1.value_comp(); 
    cout<<"Elements of the set1 are:\n"; 
    for(it=set1.begin();it!=set1.end();++it) 
    { 
        cout<<*it<<" "; 
    } 
    cout<<endl;
    it=set1.emplace_hint(set1.begin(),8); 
    it=set1.emplace_hint(it,9);

    //Assign the elements from set1 to set2
    set<int>set2(set1.begin(),set1.end()); 
    cout<<"The set2 is:\n"; 
    for(it=set2.begin();it!= set2.end();++it) 
    { 
        cout<<*it<<" "; 
    } 
    cout<<endl; 
  
    //Remove all the numbers after the given number
    set2.erase(set2.begin(),set2.find(12)); 
    cout<<"Set2 after removal of elements is:\n";
    for(it=set2.begin();it!=set2.end();++it) 
    { 
        cout<<*it<<" "; 
    } 
    cout<<endl;

    //check if given element is present or not 
    if(set1.count(9)) 
        cout<<"9 is present in the set\n"; 
    else
        cout<<"9 is not present in the set\n";
    int start = *set1.rbegin();
    it=set1.begin();

    cout<<"The Set1 elements are:\n";
     do
     {
       cout<<*it<<" "; 
     }while(comp(*(++it),start));
    cout<<endl;
    return 0;
} 