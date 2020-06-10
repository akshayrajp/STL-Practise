#include<iostream>
#include <set>
using namespace std;
int main() {
    multiset<int>ms;
    multiset<int>::iterator it,it1;
    int x,i;
      cout<<"1.Size of the Multiset"<<endl;
      cout<<"2.Insert Element into the Multiset"<<endl;
      cout<<"3.Delete Element from the Multiset"<<endl;
      cout<<"4.Find Element in a Multiset"<<endl;
      cout<<"5.Count Elements with a required key"<<endl;
      cout<<"6.Display Multiset"<<endl;
      cout<<"7.Exit"<<endl;
    while(1){
      cout<<"Enter your Option: ";
      cin>>x;
      switch(x){
         case 1:
            cout<<"Size of the Multiset: "<<ms.size()<<endl;
         break;
         case 2:
            cout<<"Enter value to be inserted: ";
            cin>>i;
            if (ms.empty())
               it1 = ms.insert(i);
            else
               it1 = ms.insert(it1, i);
         break;
         case 3:
            cout<<"Enter value to be deleted: ";
            cin>>i;
            ms.erase(i);
         break;
         case 4:
            cout<<"Enter element to find ";
            cin>>i;
            it = ms.find(i);
            if (it != ms.end())
               cout<<"Element found"<<endl;
            else
               cout<<"Element not found"<<endl;
         break;
         case 5:
            cout<<"Enter element to be counted: ";
            cin>>i;
            cout<<i<<" appears "<<ms.count(i)<<" times."<<endl;
         break;
         case 6:
            cout<<"Elements of the Multiset: ";
            for (it = ms.begin(); it != ms.end(); it++)
               cout<<*it<<" ";
            cout<<endl;
         break;
         case 7:
            exit(1);
         break;
         default:
            cout<<"Wrong Option"<<endl;
      }
   }
   return 0;
}