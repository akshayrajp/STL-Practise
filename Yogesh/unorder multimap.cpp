#include <iostream>
#include <string>
#include <unordered_map>
 
using namespace std;
 
int main ()
{
	unordered_multimap <string, int> unmmp1,unmmp2;
	unordered_multimap <string, int> :: iterator it;
	
	unmmp1 = { {"Rohit", 264} , {"Guptil" , 237}};
	unmmp1.insert ( {{"Sehwag" , 219} , {"Gayle" , 215}} );
	pair < string, int> hit2 ("Rohit" , 209);
	unmmp1.insert (hit2);
	
	unmmp1.insert (make_pair <string, int> ("Rohit" , 208));
	
	cout << "Unordered multimap contains: " << endl;
	for (it= unmmp1.begin(); it!= unmmp1.end(); ++it) 
	{
		cout<< it->first << " , " << it->second<< endl;
	}
	
	cout << "Erasing first pair " << endl;
	unmmp1.erase (unmmp1.begin());
	cout << "Erasing record contains key as \"Guptil\" " << endl;
	unmmp1.erase ("Guptil");
	
	cout << "After performing above erase operations...." << endl;
	for (it= unmmp1.begin(); it!= unmmp1.end(); ++it) 
	{
		cout<< it->first << " , " << it->second<< endl;
	}
	
	cout << "Applying clear() operation... " << endl;
	unmmp1.clear();
	cout << "Checking unordered multi map empty or not " << endl;
	bool chk= unmmp1.empty();
	if (chk == 1)
	cout << "Unordered multi map is empty " << endl;
	else
	cout << "Unordered multi map is not empty " << endl;

    unmmp2 = { {"Sachin" , 49} , {"Kohli" , 32} , {"Ponting" , 30} , {"JayaSurya" , 28} };
	cout << "Unordered multimap :: 2  Before swap: " << endl;
	for (it= unmmp2.begin(); it!= unmmp2.end(); ++it)
	{
		cout << it->first << " , " << it->second << endl;
	}
	
	cout << endl << "Performing swap operation " << endl;
	unmmp1.swap(unmmp2);
	cout << "Unordered multimap :: 1  After swap: " << endl;
	for (it= unmmp1.begin(); it!= unmmp1.end(); ++it)
	{
		cout<< it->first << " , " << it->second<< endl;
	}
	
	unmmp2 = { {"Sachin" , 49} , {"Kohli" , 32} , {"Ponting" , 30} , {"JayaSurya" , 28} };
	cout << "Unordered multimap :: 2  After swap: " << endl;
	for (it= unmmp2.begin(); it!= unmmp2.end(); ++it)
	{
		cout << it->first << " , " << it->second<< endl;
	}

	return 0;
}