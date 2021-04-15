#include <iostream>
#include <queue> // <queue> also declares the priority_queue
using namespace std;

ostream& operator<<(ostream& os, priority_queue<int> pq)
{
	os << endl;while(!pq.empty()){os << pq.top() << ' ';pq.pop();}return os<<endl; 
}


int main()
{
	int nums[9] = {7,8,6,4,7,2,1,9,2};
	cout << sizeof(nums) << endl;
	priority_queue<int> pq(nums, nums+(sizeof(nums)/sizeof(int)));
	cout <<"Initially:" <<  pq;
	pq.emplace(999);
	cout << "After emplace:" << pq;
	pq.push(123456);
	cout << "After push: " << pq;
	cout << "Top is: " << pq.top() << endl;
	cout << "empty?:" << "	" << (pq.empty()?"true":"false") << endl;
	cout << "Finally: " << pq;

	return 0;
}
