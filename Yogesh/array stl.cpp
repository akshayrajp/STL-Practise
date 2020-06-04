#include<iostream> 
#include<array> 
#include<tuple> 
using namespace std; 
int main() 
{ 
    int x;
    array<int,10> ar1 = {1, 2, 3, 4, 5, 6,7,8,9,10};
    array<int,10> ar2 = {11, 12, 13, 14, 15, 16,17,18,19,20};
    cout<<"Enter 1:first element of ar1 "<<endl;
    cout<<"Enter 2:last element of ar1 "<<endl;
    cout<<"Enter 3:size of ar1 "<<endl;
    cout<<"Enter 4:max_size of ar2 "<<endl;
    cout<<"Enter 5:swapping of ar1 with ar2 "<<endl;
    cout<<"Enter 6:Check ar1 is empty or not"<<endl;
    cout<<"Enter 7:To fill ar2 with 5"<<endl;
    cout<<"enter 0: exit"<<endl;
      while(1){
          cin>>x;
          switch(x){
              case 1:
              cout << ar1.front() << endl;
              break;
              case 2:
              cout << ar1.back() << endl;
              break;
              case 3:
              cout << ar1.size() << endl;
              break;
              case 4:
              cout << ar1.max_size() << endl;
              break;
              case 5:
              ar1.swap(ar2);
              for (int i=0; i<6; i++) 
              cout << ar1[i] << " ";
              cout<<endl;
              for (int i=0; i<6; i++) 
              cout << ar2[i] << " "; 
              cout << endl; 
              break;
              case 0:
              exit(1);
              case 6:
              ar1.empty()? cout << "Array empty": 
              cout << "Array not empty"; 
              cout << endl;
              break;
              case 7:
              ar2.fill(5); 
              for ( int i=0; i<10; i++) 
              cout << ar2[i] << " "; 
              break;
  
          }
      }
      return 0;
}
  