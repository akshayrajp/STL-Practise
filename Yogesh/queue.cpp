#include<iostream>
#include <queue>
using namespace std;
int main() {
   queue<int> q;
   int x, i;
   cout<<"1.Size of the Queue"<<endl;
   cout<<"2.Insert Element into the Queue"<<endl;
   cout<<"3.Delete Element from the Queue"<<endl;
   cout<<"4.Front Element of the Queue"<<endl;
   cout<<"5.Last Element of the Queue"<<endl;
   cout<<"6.Exit"<<endl;
   while (1) {
      
      cout<<"Enter your Choice: ";
      cin>>x;
      switch(x) {
         case 1:
            cout<<"Size of the Queue: ";
            cout<<q.size()<<endl;
         break;
         case 2:
            cout<<"Enter value to be inserted: ";
            cin>>i;
            q.push(i);
         break;
         case 3:
            i = q.front();
            q.pop();
            cout<<"Element "<<i<<" Deleted"<<endl;
         break;
         case 4:
            cout<<"Front Element of the Queue: ";
            cout<<q.front()<<endl;
         break;
         case 5:
            cout<<"Back Element of the Queue: ";
            cout<<q.back()<<endl;
         break;
         case 6:
            exit(1);
         break;
         default:
            cout<<"Wrong Option"<<endl;
      }
   }
   return 0;
}