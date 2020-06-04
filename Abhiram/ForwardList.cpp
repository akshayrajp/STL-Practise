
#include <bits/stdc++.h>
#define endl "\n"
#define sp "\t"
#define f(n) for (int i = 0; i < int(n); i++)
#define ll long long int
#define ln long int
#define pb push_back
#include <algorithm>
#include <iostream>
#include <iterator>
#include <type_traits>
#include <utility>
#include <vector>
#include <map>
#include <forward_list>
using namespace std;

void display(forward_list<int> l)
{
	for(auto it = l.begin(); it != l.end() ; it++)
	{
		cout<<*it<<sp;
	}
	cout<<endl;

}



int main()
{
	forward_list<int> fl;
	fl.assign({1,2,3});
	display(fl);
	fl.push_front(25);
	display(fl);
	fl.pop_front();
	display(fl);
	auto ptr = fl.insert_after(fl.begin()+1, 911);
	display(fl);
	fl.emplace_after(ptr, 100);
	display(fl);
	fl.remove(1);
	display(fl);

}
