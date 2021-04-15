#include<iostream>
#include <forward_list>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
   forward_list<int> a;
   forward_list<int>::iterator j;
   int c, n;

   for(i=0;i<10<;i++)
   {
       cin>>n;
            a.push_front(n);
   }
 for(i=0;i<10;i++)
 {
     cout <<a[i];
 }
 //pop fun
cout<<a.pop_front();
cout<<a.pop_back();

 for(i=0;i<10;i++)
 {
     cout <<a[i];
 }
// remove the specifed element
            cin>>n;
            a.remove(n);
            // reverse fun
       a.reverse();
       for (j = a.begin(); j!= a.end(); j++)
               cout<<*j<<" "<<endl;    
 return 0;
}
