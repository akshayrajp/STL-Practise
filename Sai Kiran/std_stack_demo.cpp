#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;


int main()
{
	stack<int, vector<char>> coolStack; //the underlying container type can be a deque,list or a vector. the default is a deque bcos of efficiency.

	coolStack.push(65);
	coolStack.push(66);
	coolStack.push(67);
	coolStack.emplace(68);

	cout << "Stack size is: " << coolStack.size() << endl;
	cout << "Stack is" << (coolStack.empty()?" empty":" not empty") << endl;
	cout << "Stack looks like:" << endl; //theres a small surprise here.

	while(!coolStack.empty()) {cout << coolStack.top() << endl; coolStack.pop();}

	return 0;
}
