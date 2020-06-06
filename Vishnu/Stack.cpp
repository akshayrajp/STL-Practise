#include <bits/stdc++.h> 
using namespace std; 

void show(stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << ends << s.top(); 
		s.pop(); 
	} 
	cout << endl; 
} 

int main () 
{ 
	stack <int> s; 
	s.push(2); 
	s.push(4); 
	s.push(6); 
	s.push(8); 
	 

	cout << "Stack : "; 
	show(s); 

	cout << "Size : " << s.size()<<endl; 
	cout << "Top : " << s.top()<<endl; 


	cout << "Pop(): "; 
	s.pop();
	s.pop(); 
	show(s); 

	return 0; 
} 

