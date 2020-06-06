#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
    //Declaring a vector
    vector<int> a; 
  
    //Pushing elemest to vector using push_back()
    for (int i = 1; i <= 5; i++) 
        a.push_back(i); 
  
    //Printing size of vector
    cout << "Size of vector: " << a.size(); 
    cout << endl;
    
    //Printing elements from beginning to end using begin() & end() 
    cout << "Output from beginning to end: "; 
    for (auto i = a.begin(); i != a.end(); ++i) 
    {
        cout << *i << " "; 
    }
    cout << endl;
     
    //Printing elements from end to beginning using rbegin() & rend() 
    cout << "Output from end to beginning: "; 
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir) 
    {
        cout << *ir << " "; 
    }
    cout << endl;
    
    //Swapping 2 vectors using swap()
    vector<int> v1, v2; 
    int x,y;
    
    cout << "Swapping 2 vectors" << endl;
    cout << "enter elements in 1st vector:" << endl;
    for (int i=0;i<5;i++)
    {
        cin >> x;
        v1.push_back(x);        //Taking in elements into 1st vector
    }
    
    cout << "enter elements in 2nd vector:" << endl;
    for (int i=0;i<5;i++)
    {
        cin >> y;
        v2.push_back(y);        //Taking in elements into 2st vector
    }
    cout << endl;
    
    cout << "Before swapping" << endl;
    cout << "Vector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
    {
        cout << v1[i] << " "; 
    }
    cout << endl;
    cout << "Vector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    // swapping vector 1 and vector 2
    v1.swap(v2); 
  
    cout << "After Swap" << endl;
    cout << "Vector 1: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " "; 
    }
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "End of program!";
    
    return 0; 
} 