#include <iostream>
#include <set>
using namespace std;

//multiset allows storing duplicates in an ordered set.
//the presence/absence can be easily checked.
//other properties are similar to that of a set.

ostream& operator<<(ostream& os, multiset<int> set)
{
	multiset<int>::iterator itr = set.begin();
	os << endl;
	while(itr!=set.end()){
		os << *(itr++) << ' ';
	}
	return os << endl;
}

int main()
{	
	int nums[] = {7,8,2,11,8,8,8,4,95,1,4,485};
	multiset<int> mySet(nums, nums+(sizeof(nums)/sizeof(int)));
	
	cout << "Initial:" << mySet;
	
	pair<set<int>::iterator, set<int>::iterator> bounds = mySet.equal_range(8);
	multiset<int> all_8s(bounds.first, bounds.second);
	cout << "All eights:" <<  all_8s;
	cout << "There are " << mySet.count(8) << " eights." << endl;
	mySet.erase(bounds.first, bounds.second);
	cout << "After removing all 8s:" << mySet;
	cout << "The set size is : " << mySet.size() << endl;
	
	mySet.insert(999);
	mySet.emplace(1111);
	multiset<int>::iterator itr = mySet.begin();
	advance(itr, 3);
	mySet.emplace_hint(itr, 45);

	cout << "After insertions and emplacing:" << mySet;

	multiset<int> between_1_and_10(mySet.lower_bound(1), mySet.upper_bound(10));

	cout << "All elements between 1 and 10 inclusive:" << between_1_and_10;

	return 0;
}
