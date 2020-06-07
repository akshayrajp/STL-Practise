#include <iostream>
#include <array>

using namespace std;

int main ()
{
    array<int,8> a = {1,2,3,4,5,6,7};
    array<int,8> b = {7,6,5,4,3,2,1};
     array<int,8> c;   
    //using at fuction
   cout << "The element at index 5 " << arr.at(5) << endl;
   // front and back fuction
  cout << a.front()<<endl;
  cout << a.back()<<endl;
  //The use of operator [ ] 
  cout << a[3]<<endl
  //find out the size nd max size of the array
  cout << a.size() << endl;
	cout << a.max_size() << endl;
  // using the begin and end

cout<<"the a element"<<endl;
	for(auto it=numbers.begin(); it!=numbers.end(); it++)
		cout<<" "<<*it;
 //swap function
   a.swap(b);
 cout<<"a elements= "; 
    for(int i=0;i<a.max_size();i++) 
        cout<<a[i]; 
    cout<<"b element"; 
    for(int i=0;i<b.max_size() ;i++)
        cout<<b[i]; 

    //fill function
    cin >> d;
    c.fill(d);

    return 0;
}
