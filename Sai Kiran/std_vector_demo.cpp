#include <iostream>
#include <vector>
using namespace std;


void print_vector(vector<int>& vec)
{
	vector<int>::iterator vec_itr =vec.begin();
	while(vec_itr != vec.end()) cout << *(vec_itr++) << ',';
	cout << endl;
}
void print_vector_reverse(vector<int>& vec)
{
	vector<int>::reverse_iterator vec_itr =vec.rbegin();
	while(vec_itr != vec.rend()) cout << *(vec_itr++) << ',';
	cout << endl;
}


int main()
{
	
	/*
    vector::assign
    vector::clear
    vector::data
    vector::emplace
    vector::emplace_back
    vector::empty
    vector::erase
    vector::front
    vector::get_allocator
    vector::insert
    vector::max_size
    vector::operator=
    vector::operator[]
    vector::pop_back
    vector::push_back
    vector::reserve
    vector::resize
    vector::shrink_to_fit
    vector::size
	*/

	vector<int> vec ={10,9,8,7,6,5};

	print_vector(vec);
	print_vector_reverse(vec);

	cout << "Vector is empty? : " << vec.empty() << endl;
	cout << "Vector size is: " << vec.size() << endl;
	vec.pop_back();
	cout << "Vector size is: " << vec.size() << endl;
	print_vector(vec);
	
	vec.emplace(vec.begin()+3 , 100);
	cout << "VECTOR SIZE IS:" << vec.size() << endl;
	print_vector(vec);
	vec.emplace_back(500);
	cout << "VECTOR SIZE IS:" << vec.size() << endl;
	print_vector(vec);
	
	cout << "Vector capacity is: " << vec.capacity() << endl;
	vec.shrink_to_fit();
	cout << "Vector capacity now is: " << vec.capacity() << endl;
	
	vec.erase(vec.begin()+3, vec.begin()+4);
	cout << "VECTOR SIZE IS:" << vec.size() << endl;
	print_vector(vec);
	vec.clear();
	cout << "VECTOR SIZE IS:" << vec.size() << endl;
	print_vector(vec);

	return 0;
}
