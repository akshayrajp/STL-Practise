#include <iostream>
#include <utility>
#include <unordered_set>
using namespace std;
template <class t>
	using ums = std::unordered_multiset<t>;

/*
	unordered_multiset is a container that stores elements in no
	particular order, and also allows duplicate elements to be 
	inserted. In unordered_multiset, the elements themselves are
	keys. Equal elements are stored in the same bucket, making it
	easy to iterate through them at once.(Equal elements are grouped together)
	Finding things in an unordered_multiset is easy and very fast
	as compared to a vector or a multiset.
	There are caveats though:
	1)unordered_multiset's memory consumption may be very high somtimes but it can be fixed by tuning the container parameters.
	2)Worst case insertion time complexity might be linear as compared to logarithmic in ordered container.
	3)Sometimes the hashing might be costly.
*/

ostream& operator<<(ostream& os, ums<int>& m)
{
	os << endl;
	for(int x:m){os << x << ' ';}
	return os << endl;
}
void iterate_print(ums<int>& m)
{
	ums<int>::iterator itr = m.begin();
	while(itr!=m.end())
	{
		cout << *(itr++) << ' ';
	}
	cout << endl;
}
void bucket_iterate_print(ums<int>& m)
{
	for(int i=0;i<m.bucket_count();i++)
	{
		ums<int>::local_iterator itr = m.begin(i);
		while(itr!=m.end(i))
		{
			cout << *(itr++) << ' ';
		}
	}
	cout << endl;
}
int main()
{
	ums<int> mySet = {4,5,8,52,3,34,34,34,85,48,6,21,8,78,651,84,91673,87+6,3};
	cout << "Initial:" << mySet;
	cout << "Iterate print:";
	iterate_print(mySet);
	bucket_iterate_print(mySet);
	mySet.insert(121);
	mySet.emplace(454);
	mySet.emplace_hint(mySet.begin(), 123232132);
	cout << "After inserting and emplacing: " << mySet;
	pair<ums<int>::iterator, ums<int>::iterator> bounds = mySet.equal_range(34);
	mySet.erase(bounds.first, bounds.second);
	cout << "After removing duplicate 34: " << mySet << endl;
	
	mySet.rehash(mySet.bucket_count()+5);

	cout << "After rehashing: " << mySet;
	cout << "Current load factor: " << mySet.load_factor() << endl;
	mySet.clear();
	cout << "After clearing: " << mySet;
	return 0;
}
