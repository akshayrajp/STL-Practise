#include<bits/stdc++.h>
#define endl "\n"
#define sp "\t"
#define f(n) for (int i = 0; i < int(n); i++)
#define ll long long int
#define ln long int
#define pb push_back
#define mk make_pair
#include <algorithm>
#include <iostream>
#include <iterator>
#include <type_traits>
#include <utility>
#include <vector>
#include <map>
using namespace std;

void display(deque<int> d)
{
	//using size()
	for(auto it  = d.begin(); it!= d.end(); it++)
	cout<<*it<<sp;
	cout<<endl;
}


int main()
{
	deque<int> d;
	d.push_front(1);
	d.push_back(2);
	d.push_front(3);
	d.push_back(4);
	display(d);
	cout<<"front() "<<d.front()<<endl;
	cout<<"back() "<<d.back()<<endl;
	d.pop_front();
	display(d);
	d.pop_back();
	display(d);

}

