#include <iostream>
#include <list>
using namespace std;

void printlist(list <int> q) 
{ 
    list <int> :: iterator it; 
    for(it = q.begin(); it != q.end(); ++it) 
    {
        cout << ' ' << *it; 
    }
    cout << endl; 
} 

int main()
{ 
    //Creating List
    list<int> lst;
    
    //Assigning elements to list
	lst.assign({4,7,2,3,6,8,1});
	
	//Printing List
	cout << "Current list:";
	printlist(lst);  
	
	//Printing First and Last element from list using front() and back()
	cout << "Front: " << lst.front() << endl;
	cout << "Back:" << lst.back() << endl;
	
	//Sorting numbers
	cout << "Sorting the list" << endl;
	cout << "Before Sorting:";
	printlist(lst); 
	lst.sort();
	cout << "After Sorting:";
	printlist(lst); 

	
	//Removing First and Last element from list using pop_front() and pop_back()
	cout << "\nRemoving first element using pop_front()" << endl;
	lst.pop_front(); 
	cout << "After removing first element:";
    printlist(lst); 
    cout << endl;
    
    cout << "Removing last element using pop_back()" << endl;
	lst.pop_back(); 
	cout << "After removing last element:";
    printlist(lst); 
    cout << endl;
    
    //Printing the Current list and clearing it
    cout << "Final list elements:";
    printlist(lst); 
    lst.clear();
    cout << "After clearing list elements: NULL" << endl;
    printlist(lst); 
    cout << "List cleared successfully!" << endl;
    cout << "\nProgram ends!";
    
    return 0; 
} 