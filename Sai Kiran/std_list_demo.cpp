#include <iostream>
#include <list>
using namespace std;


ostream& operator<<(ostream& output, list<int>&numbers)
{
	list<int>::iterator itr = numbers.begin();
	while(itr!=numbers.end()) output << *(itr++) << ' ';
	return output << endl;
}

int main()
{
	list<int> numbers;
	numbers.assign({10,9,8,7,6,5,4,3,2,1});
	cout << "Initial:" << numbers;
	cout << "Back:" << numbers.back() << endl;
	cout << "Front: " << numbers.front() << endl;
	numbers.emplace_front(123456);
	cout << "After emplace_front:";
	cout << numbers;
	numbers.push_back(9999999);
	cout << "After push back:" << numbers ;
	numbers.push_front(0xe1ee7);
	cout << "After push_front:" << numbers;
	numbers.sort();
	cout << "After sort :" << numbers;
	numbers.reverse();
	cout << "After reverse:" << numbers;
	numbers.unique();
	cout << "Only unique:" << numbers;
	list<int>::iterator temp = numbers.begin();
	advance(temp,3);
	numbers.erase(numbers.begin(), temp);
	cout << "After erase:" << numbers;

	return 0;
}
