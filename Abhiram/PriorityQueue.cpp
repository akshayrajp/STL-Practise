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

void display(priority_queue<int> pq)
{
	while(!pq.empty())
	{
		cout<<pq.top()<<sp;
		q.pop();
	}
	cout<<endl;

}


int main(){
	priorityqueue<int> pq;
	f(3) pq.push(i+1);
	
	display(pq);

	cout<<"size()  "<<pq.size()<<endl;
	cout<<"top()  "<<pq.top()<<endl;
	cout<<"pop() ";
	pq.pop();

	display(pq);

}

