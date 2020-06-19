#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 

	map<int, int> m; 

	m.insert(pair<int, int>(1, 40)); 
	m.insert(pair<int, int>(3, 60)); 
	m.insert(pair<int, int>(5, 50)); 
	m.insert(pair<int, int>(7, 10)); 
	m.insert(pair<int, int>(9, 50));

	map<int, int>::iterator itr; 
	cout << "Map m :"<<endl; 
	cout << "\tKEY\tELEMENT"<<endl; 
	for (itr = m.begin(); itr != m.end(); ++itr) { 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	// assigning the elements from m to m1 
	map<int, int> m1(m.begin(), m.end()); 

	
	cout << "Map m1"
		<< " assign from m is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = m1.begin(); itr != m1.end(); ++itr) { 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	cout << "\nm1 after removal of"
			" elements less than key=3 : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	m1.erase(m1.begin(), m1.find(3)); 
	for (itr = m1.begin(); itr != m1.end(); ++itr) { 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	
	int num; 
	num = m1.erase(4); 
	cout << "\nm1.erase(4) : "; 
	cout << num << " removed \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = m1.begin(); itr != m1.end(); ++itr) { 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	cout << endl; 

	cout << "m.lower_bound(5) : "
		<< "\tKEY = "; 
	cout << m.lower_bound(5)->first << '\t'; 
	cout << "\tELEMENT = "
		<< m.lower_bound(5)->second << endl; 
	cout << "m.upper_bound(5) : "
		<< "\tKEY = "; 
	cout << m.upper_bound(5)->first << '\t'; 
	cout << "\tELEMENT = "
		<< m.upper_bound(5)->second << endl; 

	return 0; 
} 

