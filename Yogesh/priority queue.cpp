#include<iostream>
#include <queue>
using namespace std;
int main() {
   priority_queue<int> pq;
   int x, i;
    cout<<"1.Size of the Priority Queue"<<endl;
    cout<<"2.Insert Element into the Priority Queue"<<endl;
    cout<<"3.Delete Element from the Priority Queue"<<endl;
    cout<<"4.Top Element of the Priority Queue"<<endl;
    cout<<"5.Exit"<<endl;
   while (1) {
      
      cout<<"Enter your Choice: ";
      cin>>x;
      switch(x) {
         case 1:
            cout<<"Size of the Queue: ";
            cout<<pq.size()<<endl;
         case 2:
            cout<<"Enter value to be inserted: ";
            cin>>i;
            pq.push(i);
         break;
         case 3:
            i = pq.top();
            if (!pq.empty()) {
               pq.pop();
               cout<<i<<" Deleted"<<endl;
            } else {
               cout<<"Priority Queue is Empty"<<endl;
            }
         break;
         case 4:
            cout<<"Top Element of the Queue: ";
            cout<<pq.top()<<endl;
         break;
         case 5:
            exit(1);
         break;
         default:
            cout<<"Wrong Option"<<endl;
      }
   }
return 0;
}
