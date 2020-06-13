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

void display(stack<int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<sp;
		s.pop();
	}
	cout<<endl;

}


int main(){
	stack<int> s;
	for(int i=0;i<3;i++)
		s.push(i+5);
	display(s);

	cout<<"size is "<<s.size()<<endl;
	cout<<"top element is  "<<s.top()<<endl;

	cout<<"pop() ";
	s.pop();
	display(s);
}
