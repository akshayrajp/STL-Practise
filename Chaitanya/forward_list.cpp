#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int>l;
    l.assign({1,2,3});
    forward_list<int>::iterator i;
    cout<<"f_list l:";
    for( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    l.pop_front();
    l.push_front(4);
    l.emplace_front(5);
     cout<<"f-list l:";
    for( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    l.insert_after(l.begin(),{9,8});
    l.remove(4);
     cout<<"f_list l:";
    for( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    
    return 0;
}