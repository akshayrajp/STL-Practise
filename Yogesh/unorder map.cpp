#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main(){
	unordered_map <int, int> unMap;
	unordered_map <int, int> :: iterator it;
	
	for (int i=0; i<5; i++) {
		unMap [i]= i+10; 
	}
	
	cout << "key - value pairs in unordered map are" << endl;	
	cout << "|Key , Value|" << endl;
	for (it= unMap.begin(); it!= unMap.end(); ++it) {
		cout << it->first << " , " << it->second << endl;
	}
	
	cout << "Erasing pair whcih has key value 5" << endl;
	unMap.erase(5);
	it= unMap.begin();
	cout << "Erasing first pair" << endl;
	unMap.erase(it);
	
	cout << "Remaining pairs are" << endl;
	cout << "|Key , Value|" << endl;
	for (it= unMap.begin(); it!= unMap.end(); ++it) {
		cout << it->first << " , " << it->second << endl;
	}
	
	unordered_map <int, int> unMap2;
	for(int i=0; i<5; i++) {
		unMap2[i]= i+100;
	}
	cout << "New unordered map elements are " << endl;
	cout << "|Key , Value|" << endl;
	for (it= unMap2.begin(); it!= unMap2.end(); ++it) {
		cout << it->first << " , " << it->second << endl;
	}
	
	cout << "Performing swap operation......." << endl;
	unMap.swap(unMap2);
	cout << "After swap operation second unordered map is " << endl;
	cout << "|Key , Value|" << endl;
	for (it= unMap2.begin(); it!= unMap2.end(); ++it) {
		cout<< it->first << " , " << it->second<< endl;
	}
	
	cout << "After swap operation unMap1 is " << endl;
	cout << "|Key , Value|" << endl;
	for (it= unMap.begin(); it!= unMap.end(); ++it) {
		cout<< it->first << " , " << it->second<< endl;
	}
	
	cout << "Applying clear operation on unMap2" << endl;
	unMap2.clear();
	
	cout << "Now unMap2 is " << endl;
	cout << "|Key , Value|" << endl;
	for (it= unMap2.begin(); it!= unMap2.end(); ++it) {
		cout<< it->first << " , " << it->second<< endl;
	}
	
	return 0;
}