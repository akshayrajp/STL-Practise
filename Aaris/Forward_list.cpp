#include <iostream>
#include <forward_list>
using namespace std;

void printlist(forward_list <int> q) 
{ 
    forward_list <int> :: iterator it; 
    for(it = q.begin(); it != q.end(); ++it) 
    {
        cout << ' ' << *it; 
    }
    cout << endl; 
} 

int main()
{ 
    // Initializing forward list 
    forward_list<int> fl; 
    
    //Taking in elements into forward list
    int c,e;
    cout << "Enter size of List: ";
    cin >> c;
    cout << "Pushing elements from front" << endl;
    cout << "Enter " << c <<" elements in List:" << endl;
    for (int i=0;i<c;i++)
    {
        cin >> e;
       fl.push_front(e); 
    }
    cout << "Elements entered are:";
    printlist(fl);
    
    //deleting first elemetn using pop_front(); 
    cout << "Deleting first element using pop_front()" << endl;
    fl.pop_front();
    cout << "List after deleting first element:";
    printlist(fl);
    
    //Removing an element using remove();
    int r;
    cout << "Enter element to be removed from the above list: ";
    cin >> r;
    fl.remove(r); 
    cout << "List after removing element:";
    printlist(fl);
    
    cout << endl;
    cout << "Program ends!";
    return 0; 
} 