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

void display(set<int> s)
{
	for(auto it = s.begin(); it!=s.end(); it++)
	{
		cout<<*it<<sp;
	}
	cout<<endl;

}


int main(){
	set<int> s;
	s.insert(23);
	s.insert(69);
	s.insert(69);//it will not get inserted
	s.insert(619);
	display(s);

	cout<<"size of set"<<sp<<s.size()<<endl;
	if(s.empty())
		cout<<"set is empty"<<endl;
	else
		cout<<"not empty"<<endl;
	if(s.find(69)!=s.end())
		cout<<"element found"<<endl;
	else
		cout<<"not found"<<endl;
	s.erase(23);
	display(s);

}
