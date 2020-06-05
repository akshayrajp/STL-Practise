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

void display(queue<int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<sp;
		q.pop();
	}
	cout<<endl;

}


int main(){
	queue<int> q;
	f(3) q.push(i+1);
	
	display(q);

	cout<<"size()  "<<q.size()<<endl;
	cout<<"front()  "<<q.front()<<endl;
	cout<<"back() "<<q.back()<<endl;

}

