#include <iostream>
#include <array>
#include <queue>
using namespace std;

ostream& operator<<(ostream& os, queue<int> q)
{
	os << endl;
	while(!q.empty()) {os << q.front() << ' ';q.pop();}
	return os << endl;
}
void insert_vals(queue<int>& q, int a[], int size)
{
	for(int i=0;i<size;i++) q.push(a[i]);
}

//std::queue

int main()
{
	queue<int> request_id;
	int vals[] = {1,2,3,4,5,6,7,8,9,0};
	insert_vals(request_id, vals,10);
	cout << "Initial: " << request_id;
	request_id.pop();
	request_id.pop();
	cout << "After pops:" << request_id;
	cout << "Is empty?: " << request_id.empty() << endl;
	cout << "Front: " << request_id.front() << endl;
	cout << "Back: " << request_id.back() << endl;
	cout << "Size: " << request_id.size() << endl;

	return 0;
}
