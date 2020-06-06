#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() 
{ 
    //Declaring an Array (size: 50, type: int)
    array<int,50> arr;
    
    //Taking in array
    int t;
    int i;
    cout << "Enter size of array less than or equal to 50: ";
    cin >> t;
    cout << "Enter " << t << " elements:" << endl;
    for (i=0; i<t; i++)
    {
        cin >> arr[i];
    }
    
    //Printing elements normally
    cout << "The array elements are (normal methord):";
    for (i=0; i<t; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Printing array elements using at() 
    cout << "The array elements are (using at() methord) : "; 
    for ( int i=0; i<t; i++) 
    cout << arr.at(i) << " "; 
    cout << endl; 
    
    // Printing array elements using get()
    cout << "The First array element is (using get() methord) : ";
    cout << get<0>(arr) << " ";
    cout << endl; 
    
    // Printing array elements using []
    cout << "The array elements are (using operator[] methord) : "; 
    for ( int i=0; i<t; i++) 
    cout << arr[i] << " "; 
    cout << endl;
    
     // Printing first element of array using front()
    cout << "First element of array is (using front() methord): "; 
    cout << arr.front() << endl; 
  
    // Printing last element of array using back()
    cout << "Last element of array is (using back() methord): "; 
    cout << arr.back() << endl; 
    
    // Printing number of array elements using size()
    cout << "The number of array elements is (using size() methord): "; 
    cout << arr.size() << endl; 
  
    // Printing maximum elements an array can hold using max_size()
    cout << "Maximum elements array can hold is (using max_size() methord): "; 
    cout << arr.max_size() << endl; 
    
    // Swapping elements of 1st Array to 2nd array using swap()
    array<int,5> x; //Declaring Array 1
    array<int,5> y; //Declaring Array 2
    cout << "Swapping elements of 1st Array to 2nd array (using swap() methord)" << endl;
    cout << "Enter 5 elements into first Array:" << endl;
    for (i=0; i<5; i++)
    {
        cin >> x[i];
    }
    cout << "Enter 5 elements into second Array:" << endl;
    for (i=0; i<5; i++)
    {
        cin >> y[i];
    }
    
    //Printing first and second Array before swapping
    cout << "The first array elements before swapping are : "; 
    for (int i=0; i<5; i++) 
    cout << x[i] << " "; 
    cout << endl; 
    cout << "The second array elements before swapping are : "; 
    for (int i=0; i<5; i++) 
    cout << y[i] << " "; 
    cout << endl; 
    
    // Swapping second array values with first array 
    x.swap(y);
    
    //Printing first and second Array after swapping
    cout << "After swapping..." << endl;
    cout << "The first array elements after swapping are : "; 
    for (int i=0; i<5; i++) 
    cout << x[i] << " "; 
    cout << endl; 
    cout << "The second array elements after swapping are : "; 
    for (int i=0; i<5; i++) 
    cout << y[i] << " "; 
    cout << endl; 
    
    // using empty() and fill() methord
    cout << "using empty() and fill() methord" << endl;
    array<int,5>q; //Declaring Array 
    
    // Checking size of array if it is empty 
    q.empty()? cout << "Array empty": 
    cout << "Array not empty"; 
    cout << endl; 
  
    // Filling array with user input
    int w;
    cout << "Enter element to be filled in array: ";
    cin >> w;
    q.fill(w); 
  
    // Displaying array after filling 
    cout << "Array after filling operation is : "; 
    for (i=0; i<5; i++)
    {
        cout << q[i] << " "; 
    }
    cout << endl;
    cout << "Program complete!";
    
    return 0;
} 