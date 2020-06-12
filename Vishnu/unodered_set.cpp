#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	
	unordered_set <string> Set ; 


	Set.insert("code") ; 
	Set.insert("in") ; 
	Set.insert("c++") ; 
	Set.insert("is") ; 
	Set.insert("fast") ; 

	string key = "slow" ; 

	if (Set.find(key) == Set.end()) 
		cout << key << " not found" << endl << endl ; 
	else
		cout << "Found " << key << endl << endl ; 

	key = "c++"; 
	if (Set.find(key) == Set.end()) 
		cout << key << " not found\n" ; 
	else
		cout << "Found " << key << endl ; 

	cout << "\nAll elements : "; 
	unordered_set<string> :: iterator itr; 
	for (itr = Set.begin(); itr != Set.end(); itr++) 
		cout << (*itr) << endl; 
} 

