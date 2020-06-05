
//STL practice day 1 == std::array

#include <array>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	array<string, 5> names, empty_names;
	array<string, names.size()>::iterator names_itr;

	names_itr = names.begin();

	empty_names.fill("NO NAME");

	names[0] = "Sai Kiran";
	names[1] = "Ian Krais";
	names[2] = "Narik ias";
	names[3] = "Elliot Alderson";
	names[4] = "Mr. Robot";


	cout << "First = " << names.front() << endl;
	cout << "Last = " << names.back() << endl;
	cout << "Second = " << names.at(1) << endl;
	cout << "Third = " << names[2] << endl;
	cout << "Size = " << names.size() << endl;
	cout << "Max Size = " << names.max_size() << endl;

	//Iterating through the elements.
	while(names_itr != names.end())
	{
		cout << *(names_itr++) << endl;
	}

	names.swap(empty_names);

	cout << "names array:\n";
	for(int i=0;i<names.size();i++)
	{
		cout << names[i] << endl;
	}
	cout << "empty_names array:\n";
	for(int i=0;i<empty_names.size();i++)
	{
		cout << empty_names[i] << endl;
	}

	return 0;
}
