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

int main()
{
	//initializing array
	array<int,3> a;

	//inserting into array
	f(3) a[i] = i+1;


	//front() and back() function
	cout<<"front"<<sp<<a.front()<<endl;
	cout<<"back"<<sp<<a.back()<<endl;


	//empty() funciton
	a.empty();

	//fill()
	a.fill(10);
	
	//displaying output using size() and at()
	f(3) cout<<"elements in an array"<<sp<<a.at(i)<<endl;
	 		
}

