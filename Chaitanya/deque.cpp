#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>d,c;
    for(int i=0;i<10;i++){
        d.push_back(i);
        c.push_front(i);
    }
    cout<<"size : "<<d.size()<<endl;
    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;
    deque<int> p=d;
       while(!d.empty())
	{
		cout<<d.front()<<" ";
		d.pop_front();
	}
	cout<<endl;
	deque<int>::iterator i=c.begin();
	c.insert(i,3);
	while(!c.empty()){
	    cout<<c.front()<<" ";
	    c.pop_front();
	}
	cout<<endl;
    return 0;
}