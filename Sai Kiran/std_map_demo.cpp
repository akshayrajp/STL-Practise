
/*
	Maps are associative containers that store key-value pairs
	where the values can be accessed by directly using the key.
	In a map, the keys are sorted. Also the keys are unique in a map.
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>
using namespace std;


bool comparator(int first, int second){ return first > second;}

template<typename type1, typename type2>
void map_insert(map<type1,type2> &m, vector<pair<type1, type2>> &vec)
{
	for(pair<type1,type2> p: vec){
		m.insert(pair<type1,type2>(p.first,p.second));
	}
}

ostream& operator<< (ostream& os, map<int,string>& m)
{
	os << endl;
	for(pair<int,string> x:m){os << x.first << " " << x.second << endl;}
	return os << endl;
}
int main()
{
	vector<pair<int, string>> my_books = {{1,"The Code Book"},{2,"Cosmos"}, {3, "61 Hours"}, {4, "The Godfather"},{5,"The family"},
		{6, "Mind Master"}
	};
	map<int, string> names;
	map_insert<int,string>(names, my_books);
	
	cout << names;

	map<int,string>::iterator itr = names.begin();
	map<int,string>::reverse_iterator r_itr = names.rbegin();

	cout << "Map values:" << endl;
	while(itr!=names.end()) cout << itr->first << ' ' << (*(itr++)).second << '\n';
	cout << "Map values in reverse:" << endl;
	while(r_itr!=names.rend()) cout << r_itr->first << ' ' << (*(r_itr++)).second << '\n';

	names.emplace(pair<int,string>(7,"The Jungle Book"));
	names.emplace_hint(names.begin(), pair<int,string>(0,{"Surely You're Joking Mr. Feynman!"}));

	cout << "After the emplacing:" << names;

	//removing books from keys 3 to 4(not including)
	names.erase(names.find(3), names.find(4));
	cout << "After removing:" << names;
	names.clear();
	cout << "After clearing" << names;

	return 0;
}
