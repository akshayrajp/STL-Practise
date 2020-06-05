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
#include<list>
using namespace std;

void display(list<int> l)
{
	for(auto it = l.begin(); it != i.end() ; it++)
	{
		cout<<*it<<sp;
	}
	cout<<endl;

}



int main()
{
	list<int> li1,li2;

	f(n) {li1.push_back(i+1); li2.push_front(i+2);}
	
	display(li1); display(li2);

	cout<<"using front() " <<li1.front()<<endl;
	cout<<"using front() " <<li2.front()<<endl;

	li1.pop_front();
	li2.pop_back();
	cout<<"using pop_front() and pop_back()"<<endl;
	display(li1); display(li2);


}
