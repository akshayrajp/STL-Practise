#include <iostream>
#include <set>
using namespace std;

//set is a collection of UNIQUE, ORDERED elements;
//an order is always maintained in the set.
//Sets are typically implemented as binary search trees!
//Sets can be iterated through.
//Sets are associative i.e the values they store are stored as keys and not as something that can be accessed using the absolute position in the container.
struct myComparator{
	bool operator()(const int a,const int b)const{return a<b;}
};
ostream& operator<<(ostream& os, set<int, myComparator>& s)
{
	set<int>::iterator itr = s.begin();
	while(itr!=s.end()) os << *(itr++) << ' ';
	return os << endl;
}


int main()
{

	int nums[] = {7,25,6,2,4,5,23,9,5,2,0,5,9,8,965};
	set<int, myComparator> mySet(nums, nums+(sizeof(nums)/sizeof(int)));
	cout << mySet;

	//printing numbers within a range;

	set<int, myComparator>::iterator init = mySet.lower_bound(6);
	set<int, myComparator>::iterator last = mySet.upper_bound(10);
	set<int, myComparator> set2(init, last);
	cout << "only values between 6 and 10 " << set2;

	//inserting.

	mySet.insert(46);
	mySet.insert(1238);
	cout << "After insert:" << mySet;
	
	int temp;
	cout << "Type an int:" << endl;
	cin >> temp;
	cout << temp << (mySet.find(temp)!=mySet.end()?" exists in the set.":" does not exist in the set.");

	mySet.emplace_hint(mySet.begin(),88);

	cout << endl;
	cout << mySet;

	cout << " count of 2 is: " << mySet.count(2) << endl;
	return 0;
}
