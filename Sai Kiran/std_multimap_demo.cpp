#include <iostream>
#include <map>
#include <vector>
#include <utility>
using namespace std;

ostream& operator<< (ostream& os, multimap<int, string>& m)
{
	os << endl;
	for(pair<int,string> p:m){os << p.first <<' '<<p.second << endl;}
	return os << endl;
}
void insert_map(multimap<int,string>& m, vector<pair<int,string>>& vec)
{
	for(pair<int,string> p:vec){m.insert(p);}
}
void iterate_print(multimap<int,string>&m)
{
	multimap<int,string>::iterator itr = m.begin();
	while(itr!=m.end()) cout << (itr->first) << ' ' << (*(itr++)).second << endl;
}
void iterate_print_reverse(multimap<int,string>&m)
{
	multimap<int,string>::reverse_iterator r_itr = m.rbegin();
	while(r_itr!=m.rend()) cout << (r_itr->first) << ' ' << (*(r_itr++)).second << endl;
}
int main()
{
	vector<pair<int,string>> vec = {{1,"Hello World"},{2,"Hi World"},{3,"Bye World"}}; //cReAtivitY
	multimap<int,string> m;
	
	insert_map(m, vec);

	cout << "Initial :" << m;
	m.insert(pair<int,string>(0, "The Boomer Diary"));
	m.emplace(pair<int,string>(5,"The Windows plague"));
	m.emplace_hint(m.begin(), pair<int,string>(-1,"CLRS"));

	cout << "After insert, emplace, emplace_hint:" << m;

	m.insert(pair<int,string>(0,"The Code Book"));
	m.insert(pair<int,string>(0,"The Code Book"));

	cout << "After inserting duplicates:" << m;

	pair<map<int,string>::iterator,map<int,string>::iterator> bounds = m.equal_range(0);
	m.erase(bounds.first, bounds.second);

	cout << "Removed duplicate keys:" << m;
	cout << "Size of the map is: " << m.size() << endl;

	iterate_print(m);
	iterate_print_reverse(m);

	return 0;
}
