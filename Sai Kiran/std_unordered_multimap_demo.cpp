#include <iostream>
#include <utility>
#include <string>
#include <unordered_map>
template<typename t1, typename t2>
	using umm = std::unordered_multimap<t1,t2>;
using namespace std;

/*

	unordered_multimap allow duplicate keys and do not store keys in any order.
	the values of equal keys are stored in the same bucket.

*/
ostream& operator<<(ostream& os, umm<int,string>& m)
{
	os << endl;
	for(auto x:m){os << x.first << ' ' << x.second << endl;}
	return os << endl;
}
void iterate_print(umm<int,string>& m)
{
	cout << endl;
	auto itr = m.begin();
	while(itr!=m.end()) cout << itr->first << ' ' << (itr++)->second << endl;
}
void bucket_iterate_print(umm<int,string>& m)
{
	cout << endl;
	for(unsigned int i=0; i<m.bucket_count(); i++)
	{
		auto itr = m.begin(i);
		while(itr!=m.end(i)) cout << itr->first << ' '  << (itr++)->second << endl;
	}
}
int main()
{
	umm<int,string> myMap = {{1,"ABC"}, {2, "BCD"}, {3,"BCD"}};
	cout << "Initial: " << myMap;
	cout << "Iterate print: ";
	iterate_print(myMap);
	cout << "Bucket iterate print: ";
	bucket_iterate_print(myMap);
	myMap.insert(pair<int,string>(2,"ZXT"));
	myMap.emplace(pair<int,string>(4,"QWE"));
	myMap.emplace_hint(myMap.end(),pair<int,string>(5,"UTU"));
	cout << "After inserting and emplacing: " << myMap << endl;
	pair<umm<int,string>::iterator, umm<int,string>::iterator> bounds = myMap.equal_range(2);
	myMap.erase(bounds.first, bounds.second);
	cout << "After removing keys that repeat themselves: " << myMap;
	cout << "Load Factor is :" << myMap.load_factor() << endl;
	myMap.rehash(10);
	cout << "After rehashing, load factor is: " << myMap.load_factor() << endl;
	cout << "Map size is: " << myMap.size() << endl;
	myMap.clear();
	return 0;
}
