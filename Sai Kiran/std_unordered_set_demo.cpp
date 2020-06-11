#include <iostream>
#include <unordered_set>
using namespace std;

ostream& operator<<(ostream& os, unordered_set<int>& s)
{
	os << '\n';
	for(int x:s) os << x << ' ';
	return os << '\n';
}

int main()
{
	unordered_set<int> mySet = {4,5,1,3,8,8,9,5,6,58,14};
	cout << "Initially: " << mySet;
	cout << "Size:" << mySet.size() << endl;
	cout << "Iterate  print: ";
	unordered_set<int>::iterator itr = mySet.begin();
	while(itr!=mySet.end()) cout << *(itr++) << ' ';
	cout << endl;
	cout << "Iterate print (using buckets): ";
	for(int i=0;i<mySet.bucket_count();i++)
	{
		unordered_set<int>::local_iterator itr = mySet.begin(i);
		while(itr!=mySet.end(i)) cout << *(itr++) << ' ';
	}
	cout << endl;

	mySet.insert(24);
	mySet.emplace(56);
	mySet.emplace_hint(mySet.begin(), 0);

	cout << "After inserting and emplacing: " << mySet;
	cout << "Current load factor: " << mySet.load_factor() << endl;
	mySet.rehash(25);
	cout << "After rehashing (for 25 buckets) :" << mySet << endl;
	mySet.erase(mySet.begin(), mySet.end());
	cout << "After erasing: " << mySet;
	return 0;	
}
