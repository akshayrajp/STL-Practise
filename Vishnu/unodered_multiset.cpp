#include <bits/stdc++.h> 
using namespace std; 

typedef unordered_multiset<int>::iterator umit; 
 
void printUset(unordered_multiset<int> ums) 
{  
	umit it = ums.begin(); 
	for (; it != ums.end(); it++) 
		cout << *it << " "; 
	cout << endl; 
} 

int main() 
{ 
	unordered_multiset<int> ums1; 
 
	unordered_multiset<int> ums2 ({1, 3, 1, 7, 2, 3, 
								4, 1, 6}); 

	// Initialization by assignment 
	ums1 = {2, 7, 2, 5, 0, 3, 7, 5}; 

	if (ums1.empty()) 
		cout << "unordered multiset 1 is empty\n"; 
	else
		cout << "unordered multiset 1 is not empty\n"; 

	cout << "The size of unordered multiset 2 is : "
		<< ums2.size() << endl; 

	printUset(ums1); 

	ums1.insert(7); 

	printUset(ums1); 

	int val = 3; 

	if (ums1.find(val) != ums1.end()) 
		cout << "unordered multiset 1 contains "
			<< val << endl; 
	else
		cout << "unordered multiset 1 does not contains "
			<< val << endl; 
	val = 5; 
	int cnt = ums1.count(val); 
	cout << val << " appears " << cnt 
		<< " times in unordered multiset 1 \n"; 

	val = 9; 

	if (ums1.count(val)) 
		cout << "unordered multiset 1 contains "
			<< val << endl; 
	else
		cout << "unordered multiset 1 does not contains "
			<< val << endl; 

	val = 1; 

	pair<umit, umit> erange_it = ums2.equal_range(val); 
	if (erange_it.first != erange_it.second) 
		cout << val << " appeared atleast once in "
						"unoredered_multiset \n"; 


	printUset(ums2); 
	ums2.erase(val); 

	printUset(ums2); 

	ums1.clear(); 
	ums2.clear(); 

	if (ums1.empty()) 
		cout << "unordered multiset 1 is empty\n"; 
	else
		cout << "unordered multiset 1 is not empty\n"; 
} 

