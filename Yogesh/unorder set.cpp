#include<iostream>
#include<unordered_set>
 
using namespace std;
 
int main(){
	unordered_set<int> s1;
	unordered_set<int> :: iterator it;
	
	for(int i=0; i<5; i++) 
	s1.insert(i+10);
	s1.erase(12); 
	cout << "elements after deleting  12 -->";
	for(it= s1.begin(); it!=s1.end(); it++) cout << *it << " ";
	cout << endl;
	
	unordered_set<int> s2;
	for(int i=0;i<4;i++)
	s2.insert(i);
	cout << "unordered_set 1 elements before swapping -->";
	for(it= s1.begin(); it!= s1.end(); it++) cout<< *it << " ";
	cout << endl;
	
	cout << "unordered_set 2 elements before swapping -->";
	for(it= s2.begin(); it!= s2.end(); it++) cout<< *it << " ";
	cout << endl;
	
	s1.swap(s2); 
 
	cout << "unordered_set 1 elements after swapping -->";
	for(it= s1.begin(); it!= s1.end(); it++) cout<< *it << " ";
	cout << endl;
	
	cout << "unordered_set 2 elements after swapping -->";
	for(it= s2.begin(); it!= s2.end(); it++) cout<< *it << " ";
	cout << endl;
 
	s1.clear(); 
	cout << "Performing clear() operation on unordered_set1......" << endl;
	s1.empty() ? cout <<"Unordered_set is empty" << endl: cout << "unordered_set is not empty" << endl;
	
	return 0;
}