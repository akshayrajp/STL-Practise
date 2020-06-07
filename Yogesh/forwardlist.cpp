#include<iostream>
#include <forward_list>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
   forward_list<int> forw_l;
   forward_list<int>::iterator it;
   int c, n;
      cout<<"Enter any option from given below to perform Forward list"<<endl;
      cout<<"1.Insert Element at the Front"<<endl;
      cout<<"2.Delete Element at the Front"<<endl;
      cout<<"3.Front Element of Forward List"<<endl;
      cout<<"4.Resize Forward List"<<endl;
      cout<<"5.Remove Elements with Specific Values"<<endl;
      cout<<"6.Remove Duplicate Values"<<endl;
      cout<<"7.Reverse the order of elements"<<endl;
      cout<<"8.Display Forward List"<<endl;
      cout<<"9.Exit"<<endl;
      while (1) {
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter value to be inserted at the front: ";
            cin>>n;
            forw_l.push_front(n);
         break;
         case 2:
            n = forw_l.front();
            forw_l.pop_front();
            cout<<"Element "<<n<<" deleted"<<endl;
         break;
         case 3:
            cout<<"Front Element of the Forward List: ";
            cout<<forw_l.front()<<endl;
         break;
         case 4:
            cout<<"Enter new size of Forward List: ";
            cin>>n;
            if (n <= forw_l.max_size())
               forw_l.resize(n);
            else
               forw_l.resize(n, 0);
         break;
         case 5:
            cout<<"Enter element to be deleted: ";
            cin>>n;
            forw_l.remove(n);
         break;
         case 6:
            forw_l.unique();
            cout<<"Duplicate Items Deleted"<<endl;
         break;
         case 7:
            forw_l.reverse();
            cout<<"Forward List reversed"<<endl;
         break;
         case 8:
            cout<<"Elements of Forward List: ";
            for (it = forw_l.begin(); it != forw_l.end(); it++)
               cout<<*it<<" ";
            cout<<endl;
         break;
         case 9:
            exit(1);
         break;
         default:
            cout<<"Wrong Choice"<<endl;
      }
   }
return 0;
}
