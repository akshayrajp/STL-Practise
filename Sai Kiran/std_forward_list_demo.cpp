#include <iostream>
#include <forward_list>
using namespace std;

void print_list(forward_list<int> list)
{
	forward_list<int>::iterator itr = list.begin();
	while(itr != list.end()) cout << *(itr++) << " ";
	cout << endl;
}

bool remove_condition(int a)
	{
		return (a>=7 && a<=10);
	}

int main()
{
	forward_list<int> number_list;
	number_list.assign({10,9,8,7,6,5,4,3,2,1});
	print_list(number_list);
	number_list.emplace_after(number_list.begin(), 0);
	print_list(number_list);
	number_list.emplace_front(999);
	print_list(number_list);
	number_list.insert_after(number_list.before_begin(), 400);
	print_list(number_list);
	number_list.remove(6);
	print_list(number_list);
	number_list.remove_if(remove_condition);
	print_list(number_list);
	number_list.sort();
	print_list(number_list);
	number_list.reverse();
	print_list(number_list);
	return 0;
}
