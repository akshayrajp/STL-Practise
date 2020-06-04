#include<iostream> 
#include<array> 
#include<tuple> 
using namespace std; 
int main() 
{ 
    int x;
    array<int,10> ar = {1, 2, 3, 4, 5, 6,7,8,9,10}; 
    cout<<"Enter any number from 1 to 10"<<endl;
    cin>>x;
    for ( int i=0; i<10; i++) 
      {
          if(ar.at(i)==x)
          cout<<"Element "<<ar.at(i)<<" found at "<<i;
          
      }
      if(x>10)
      {
          cout<<"Number is out of range"<<endl;
           cout << "The elements in the array : "; 
              cout << get<0>(ar) << " " << get<1>(ar) << " "; 
              cout << get<2>(ar) << " " << get<3>(ar) << " "; 
              cout << get<4>(ar) << " " << get<5>(ar) << " ";
              cout << get<6>(ar) << " " << get<7>(ar) << " "; 
              cout << get<8>(ar) << " " << get<9>(ar) << " ";
              cout << endl; 
      }
      
      return 0;
}
  