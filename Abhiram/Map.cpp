include<bits/stdc++.h>
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

void display(map<int,int> mp)
{
	cout<<"displaying"<<endl;
	for(auto it = mp.begin();it!= mp.end();i++)
		cout<<it->first<<sp<<it->second<<endl;
}


int main()
{
	map<int,int> mp;
	for(int i=1;i<=10;i++)
		mp.insert(mk(i,i+10));
	display(mp);
	mp.insert(mk(2,32));//this wont be inserted into map
	display(mp);

	mp.erase(mp.begin(),mp.find(3));
	cout<<"removing elements less than 3"<<endl;

	display(mp);
	cout<<"lower bound"<<sp<<mp.lower_bound(5)->first<<sp<<mp.lower_bound(5)->second<<endl;
	cout<<"upper bound"<<sp<<mp.upper_bound(5)->first<<sp<<mp.upper_bound(5)->second<<endl;



}
