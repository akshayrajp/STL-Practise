#include <bits/stdc++.h> 
using namespace std; 

typedef unordered_multimap<string, int>:: iterator umit; 

bool find_kv(unordered_multimap<string, int>& umm, 
			pair<string, int> p) 
{ 
	pair<umit, umit> it = umm.equal_range(p.first); 
	umit it1 = it.first; 

	pair<string, int> tmp; 

	while (it1 != it.second) 
	{ 
		tmp = *it1; 
		if (tmp == p) 
			return true; 
		it1++; 
	} 
	return false; 
} 

void erase_kv(unordered_multimap<string, int>& umm, 
			pair<string, int> p) 
{ 
	pair<umit, umit> it = umm.equal_range(p.first); 
	umit it1 = it.first; 
	pair<string, int> tmp; 

	while (it1 != it.second) 
	{ 
		tmp = *it1; 
		if (tmp == p) 
		{ 
			umm.erase(it1); 
			break; 
		} 
		it1++; 
	} 
} 

void printUmm(unordered_multimap<string, int> umm) 
{ 
	umit it = umm.begin(); 
	for (; it != umm.end(); it++) 
		cout << "<" << it->first << ", " << it->second << "> "; 
	cout << endl; 
} 

int main() 
{ 
	
	unordered_multimap<string, int> umm ({{"apple", 1}, 
		{"ball", 2}, 
		{"apple", 10}, 
		{"cat", 7}, 
		{"dog", 9}, 
		{"cat", 6}, 
		{"apple", 1} 
	}); 

	cout << "Initial content\n"; 
	printUmm(umm); 
	pair<string, int> kv = make_pair("apple", 1); 

	cout << "\nAfter insertion of one more <apple, 1>\n"; 
	printUmm(umm); 

	if (find_kv(umm, kv)) 
		erase_kv(umm, kv); 
	else
		cout << "key-value pair is not there in unordered multimap\n"; 

	cout << "\nAfter deletion one occurrence of <apple, 1>\n"; 
	printUmm(umm); 
} 

