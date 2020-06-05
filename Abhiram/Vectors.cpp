
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

void display(vector<int> v)
{
	//using size()
	f(v.size()) cout<<v[i]<<endl;
}


int main()
{
	//declaring a vector
	vector<int> v;

	//inserting into vector
	f(4) v.pb(i+1);

	cout<<"after using push_back() elements are" <<endl;
	display(v);

	//using pop_back() to remove last element
	v.pop_back();

	cout<<"after using pop_back() elements are" <<endl;
	display(v);

	//insert()
	v.insert(v.begin()+2,23);

	cout<<"after using insert() elements are" <<endl;
	display(v);
	
	//erase()
	v.erase(v.begin()+2);

	cout<<"after using erase() elements are" <<endl;
	display(v);

	//at()
	cout<<"element at pos 1 is"<<sp<<v.at(1)<<endl;

}
