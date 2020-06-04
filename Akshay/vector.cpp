#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring a vector of int-type
    vector<int> vec;

    // Printing the maximum size that the above vector can hold.
    cout << "\nMaximum size of vector = " << vec.max_size() << endl;

    // Adding elements to the vector using push_back()
    for (int i = 1; i <= 10; i++)
        vec.push_back(i);
    cout << "\nThe contents of the vector vec\n";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\t";

    // Printing the current size of the Vectors
    cout << "\nCurrent size of the vector = " << vec.size() << endl;

    // Insert a element at a specific position
    vec.insert(vec.begin() + 2, 69);
    cout << "\nInserted an element into the vector at a specific position.\n"
         << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\t";

    // Remove last element from the vector
    vec.pop_back();
    cout << "\nRemoved the last element from the vector.\n"
         << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\t";

    // Declare another vector, initialize it using assign(), and then swap this vector with the above declared one.
    vector<int> vec2;

    // Add the element 420 a total of 10 times to the vec2 vector.
    vec2.assign(10, 420);
    cout << "\nInserted elements into the vector vec2 using assign()\n"
         << endl;
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << "\t";

    cout << "\nBefore Swapping\n";
    cout << "\nVector 1 (vec) \n";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\t";
    cout << "\n Vector 2 (vec2) \n";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << "\t";

    // Swap both the Vectors
    vec2.swap(vec);

    cout << "\nAfter Swapping\n";
    cout << "\nVector 1 (vec) \n";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\t";
    cout << "\n Vector 2 (vec2) \n";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << "\t";

    // Demonstrate the begin(), end() iterators.
    vector<int>::iterator it;
    cout << "\nUsing forward iterators to print the contents of the vector vec1.\n";
    for (it = vec2.begin(); it != vec2.end(); it++)
    {
        cout << *it << "\t";
    }

    // Demonstrate the rbegin(), rend() functions.
    vector<int>::reverse_iterator rit;
    cout << "\nUsing reverse iterators to print the contents of the vector vec1.\n";
    for (rit = vec2.rbegin(); rit != vec2.rend(); rit++)
    {
        cout << *rit << "\t";
    }

    // Clear the vec2 vector.
    vec2.clear();
    cout << "\n Cleared the vector 1 (vec). It's contents: \n";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << "\t";

    return 0;
}