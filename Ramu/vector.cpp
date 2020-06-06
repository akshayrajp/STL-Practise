#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> a; 
    vector<int> b;
  
    for (int i = 1; i <= 5; i++) 
        cin >> a[i];

 //using begin and end fuction 
    for (auto it = a.begin(); it != a.end(); ++it) 
        cout << *it << " "; 
        // find out the size and max size of the vector
        cout << "Size : " << a.size(); 
        cout << "\nCapacity : " << a.capacity(); 
         cout << "\nMax_Size : " << a.max_size(); 

         // accessing the elements
           cout << "\nusing operators " << a[2]; 
       cout << "\nthe elemtnt at 2= " << a.at(2); 
       cout <<a.ront(); 
         cout << a.back(); 
         //using  the assign vector
          b.assign(5, 10); 
           for (int i = 0; i < b.size(); i++) 
           cout << b[i] << " "; 
        // enter the element at last using push method
         b.push_back(15); 
         for (int i = 0; i < b.size(); i++) 
           cout << b[i] << " "; 
           //pop the last element in bb
           b.pop_back(); 
           for (int i = 0; i < b.size(); i++) 
           cout << b[i] << " ";
           
            // Swaps v1 and v2 
    a.swap(b); 
  
    cout << "\na= "; 
    for (int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; 
  
    cout << "\nb="; 
    for (int i = 0; i < b.size(); i++) 
        cout << b[i] << " "; 

return 0;
}
