#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Initializing vector:
    vector<int>v1;
    //push_back
    cout<<"adding elements to the end using push back"<<endl;
    for(int i=0; i<=5 ;i++)
    v1.push_back(10*(i+1));
    for(int i=0;i<=5;i++)
    cout<<v1[i]<<endl;
    cout<<"\n----------------------------------------------"<<endl;
    cout<<"ITERATION"<<endl;
    cout << "\nOutput of begin and end: ";
    for (auto i = v1.begin();i != v1.cend(); ++i)
    cout << *i << " "<<endl;
    cout << "\nOutput of reverse begin and  reverse end: ";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
    cout << *ir << " "<<endl;
    cout<<"\n----------------------------------------------"<<endl;
    cout<<"\nCAPACITY,SIZE,MAXSIZE,RESIZE,EMPTY,SHRINK"<<endl;
    cout<<"\ncapacity of vector:"<<v1.capacity()<<endl;
    cout<<"size of vector:"<<v1.size()<<endl;
    cout<<"max size of vector:"<<v1.max_size()<<endl;
     // resizing vector to 4 elements
    v1.resize(4); // resizing vector
    cout<<"size of vector after resizing:"<<v1.size()<<endl;
    //reserve the vector to 8 elements
    v1.reserve(8);
    cout<<"capacity of vector after reserving:"<<v1.capacity()<<endl;
    //checking is vector is empty
    v1.empty()? cout << "Vector empty":
        cout << "Vector not empty"<<endl;
    //Reduces the capacity of the container to fit its size and destroying rest
    v1.shrink_to_fit();
    cout<<"capacity of vector after shrinking:"<<v1.capacity()<<endl;
     for(int i=0;i<=5;i++)
    cout<<v1[i]<<endl;
    cout<<"\n----------------------------------------------"<<endl;
    cout<<"\nUSING [], AT, FRONT, BACK, DATA"<<endl;
    cout << "\nreturning element at [0] index :" << v1[0]<<"\n";
    cout << "returning element AT index 2 :" << v1.at(2)<<"\n";
    cout << "returning front/first element :" << v1.front()<<"\n";
    cout << "returning back/last element :" << v1.back()<<"\n";
    //Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    auto i = v1.data();
    cout <<"Memory Pointer :"<<*i<<endl;
    cout<<"\n----------------------------------------------"<<endl;
    cout<<"\nUSING ASSIGN,PUSH_BACK,POP_BACK, ERASE, SWAP, EMBRASE, CLEAR"<<endl;
    vector<int> v;
    v.assign(5, 6); // assigns 6 value to 5 elements
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    v.push_back(16);
    cout <<"Elements in vector after inserting 16 :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout<< v[i] << " ";
    cout<<endl;
    //removes last element
    v.pop_back();
    cout<<"Elements in vector after removing last element :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
    cout<<"Elements in vector after inserting in beginning 5 :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    // removes the first element
    v.erase(v.begin());
    cout<<"Elements in vector after removing first element :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout<<"Elements in vector after inserting in beginning 5 :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    // Inserts 20 at the end
    v.emplace_back(20);
    cout<<"Elements in vector after inserting in beginning 5 :"<<endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout<<endl;
    // Swaps v1 and v2
    v1.swap(v);
    cout << "\nafter swap (replaces values in v1 with values in v and vice versa: "<<endl;
    cout<<"\nvalues in v1 after swap: "<<endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
        cout<<endl;
    cout << "values in v after swap: "<<endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
        cout<<endl;
    // erases the vector
    v.clear();
    cout << "vector size after clear: " << v.size()<<endl;
    cout<<"\n----------------------------------------------"<<endl;
}
