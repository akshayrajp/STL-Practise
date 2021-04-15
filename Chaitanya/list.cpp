#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l,m;
    for(int i=0;i<5;i++){
        l.push_back(i);
        m.push_front(i);
    }
    list<int>::iterator i;
    cout<<"list l:";
    for( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"list 2:";
    for( i=m.begin();i!=m.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    l.pop_front();
    m.pop_back();
     cout<<"list l:";
    for( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
      cout<<"list 2:";
    for( i=m.begin();i!=m.end();i++){
        cout<<*i<<" ";
    }
    
    return 0;
}