/*

 	deques (pronounced "deck") are just like queues but with the following properties:
		1) insertion/deletion at both ends.
		2) They are very similar to vectors but more efficient in terms of memory.
		3) They can have iterators (unlike queues)
		4) They are not allocated contiguous memory like vectors but still provide random access through the [] operator.

*/

#include <deque>
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, deque<int> &qu)
{
	os << endl;
	qu.shrink_to_fit();
	deque<int>::iterator itr = qu.begin();

	for(;itr!=qu.end();itr++)
	{ 
		os << *itr << ' ';
	}
	return os << endl;
}
void insert_funny(deque<int>& q, int arr[], int size)
{
	for(int i=0;i<size;i++) {if(i&1)q.push_back(arr[i]); else q.push_front(arr[i]);}
}
int main()
{
	int vals[] = {0,1,2,3,4,5,6,7,8,9};
	deque<int> nums;
	insert_funny(nums, vals, 10);
	
	cout << "Initially: " << nums;
	cout << "Size: " << nums.size() << endl;
	nums.pop_front();
	nums.pop_back();
	cout << "After pops: " << nums ;
	cout << "Print using random access" ;

	for(int i=0;i<nums.size();i++) cout << nums[i] << ' ';
	cout << endl;

	nums.insert(nums.begin()+4, 999);
	cout << "After insert: " << nums << endl;

	return 0;
}
