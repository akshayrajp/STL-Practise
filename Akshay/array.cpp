#include <iostream>
#include <array>
using namespace std;
int main()
{
    //Declaring an array of size 20 and type int
    array<int, 20> arr;

    // Assigning the values of the array.
    for (int i = 0; i < 20; i++)
        arr[i] = i + 1;

    // Printint the elements of the array using at(), and [].
    cout << "\nUsing the at() method to print the contents of the array arr\n";
    for (int i = 0; i < 20; i++)
        cout << arr.at(i) << "\t";

    cout << "\nUsing the [] operator to print the contents of the array arr\n";
    for (int i = 0; i < 20; i++)
        cout << arr[i] << "\t";

    // Print the first element of the array using front()
    cout << "\nThe first element of the array arr using front() is : " << arr.front() << "\n";

    // Print the first element of the array using back()
    cout << "\nThe first element of the array arr using back() is : " << arr.back() << "\n";

    // Print the curent size of the array
    cout << "\nThe current size of the array arr : " << arr.size() << "\n";

    // Print the maximum size of the array
    cout << "\nThe maximum size of the array arr : " << arr.max_size() << "\n";

    // Declare another array arr2 and use fill to assign values.
    array<int, 20> arr2;
    arr2.fill(69);

    // Print the contents of the array arr2
    cout << "\nUsing the [] operator to print the contents of the array arr2\n";
    for (int i = 0; i < 20; i++)
        cout << arr2[i] << "\t";

    // Print the arrays arr and arr2 before swapping
    cout << "\nBefore Swapping\n";
    cout << "\nArray 1 (arr) \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n Array 2 (arr2) \n";
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << "\t";

    // Swap the arrays arr and arr2
    arr.swap(arr2);

    cout << "\nAfter Swapping\n";
    cout << "\nArray 1 (arr) \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n Array 2 (arr2) \n";
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << "\t";

    return 0;
}