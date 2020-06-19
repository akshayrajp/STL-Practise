#include <iostream>
#include <utility>
#include <unordered_map>
template<class t1, class t2>
	using ump = std::unordered_map<t1,t2>;
using namespace std;

ostream& operator<<(ostream& os, ump<int,string>& mp)
{
	os << endl;
	for(pair<int,string> x: mp){os << x.first << ' ' << x.second << endl;}
	return os << endl;
}
void iterate_print(ump<int,string>& mp)
{
	cout << endl;
	auto itr = mp.begin();
	while(itr!=mp.end()) cout << itr->first << ' ' << (itr++)->second << endl;
}
void bucket_iterate_print(ump<int,string>& mp)
{	
	cout << endl;
	for(unsigned int i = 0; i<mp.bucket_count();i++)
	{
		auto itr = mp.begin(i);
		while(itr!=mp.end(i)) cout << itr->first << ' ' << (itr++)->second << endl;
	}
}
int main()
{
	ump<int, string> myMap = {{1,"ADASD"}, {2, "sdfgsdf"}, {3,"Adgdfgvcbxc"}};
	cout << "Initial: " << myMap;
	cout << "Iterate print: ";
	iterate_print(myMap);
	cout << "Bucket iterate print: ";
	bucket_iterate_print(myMap);
	myMap.insert(pair<int,string>(4,"ajsaljdhksdjf"));
	myMap.emplace(pair<int,string>(5,"askldfnsaljdkhfsadfhasdkjf"));
	myMap.emplace_hint(myMap.begin(), pair<int,string>(0,"00000"));
	cout << "After inserting and emplacing:" << myMap;
	cout << "Map hashtable load factor is: " << myMap.load_factor() << endl;
	myMap.rehash(10);
	cout << "After rehash: " << myMap;
	cout << "Map size is : " << myMap.size() << endl;
	cout << "Bucket count is : " << myMap.bucket_count() << endl;
	return 0;
}
