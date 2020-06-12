#include <iostream> 
#include <map> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	multimap <int, int> mm;	 
 
	mm.insert(pair <int, int> (1, 40)); 
	mm.insert(pair <int, int> (2, 30)); 
	mm.insert(pair <int, int> (3, 60)); 
	mm.insert(pair <int, int> (4, 20)); 
	mm.insert(pair <int, int> (5, 50)); 
	mm.insert(pair <int, int> (6, 50)); 
	mm.insert(pair <int, int> (6, 10)); 

	multimap <int, int> :: iterator itr; 
	cout << "\nThe multimap mm is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = mm.begin(); itr != mm.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 
 
	multimap <int, int> mm1(mm.begin(),mm.end()); 

	cout << "\nThe multimap mm1 after assign from mm is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = mm1.begin(); itr != mm1.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	cout << "\nmm1 after removal of elements less than key=3 : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	mm1.erase(mm1.begin(), mm1.find(3)); 
	for (itr = mm1.begin(); itr != mm1.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	 
	int num; 
	num = mm1.erase(4); 
	cout << "\nmm1.erase(4) : "; 
	cout << num << " removed \n" ; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = mm1.begin(); itr != mm1.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	cout << endl; 
 
	cout << "mm.lower_bound(5) : " << "\tKEY = "; 
	cout << mm.lower_bound(5)->first << '\t'; 
	cout << "\tELEMENT = " << mm.lower_bound(5)->second << endl; 
	cout << "mm.upper_bound(5) : " << "\tKEY = "; 
	cout << mm.upper_bound(5)->first << '\t'; 
	cout << "\tELEMENT = " << mm.upper_bound(5)->second << endl; 

	return 0; 

} 

