#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int myint[] = {5, 6, 3, 2, 7};
    list<int> l, l1 (myint, myint + sizeof(myint) / sizeof(int));
    list<int>::iterator it;
    int choice, item;
    while (1)
    {
        cout<<"1.Insert Element at the Front"<<endl;
        cout<<"2.Insert Element at the End"<<endl;
        cout<<"3.Delete Element at the Front"<<endl;
        cout<<"4.Delete Element at the End"<<endl;
        cout<<"5.Front Element of List"<<endl;
        cout<<"6.Last Element of the List"<<endl;
        cout<<"7.Size of the List"<<endl;
        cout<<"8.Reverse the order of elements"<<endl;
        cout<<"9.Sort Forward List"<<endl;
        cout<<"10.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted at the front: ";
            cin>>item;
            l.push_front(item);
            break;
        case 2:
            cout<<"Enter value to be inserted at the end: ";
            cin>>item;
            l.push_back(item);
            break;
        case 3:
            item = l.front();
            l.pop_front();
	    cout<<"Element "<<item<<" deleted"<<endl;
            break;
        case 4:
            item = l.back();
            l.pop_back();
	    cout<<"Element "<<item<<" deleted"<<endl;
            break;
        case 5:
	    cout<<"Front Element of the List: ";
	    cout<<l.front()<<endl;
            break;
        case 6:
            cout<<"Last Element of the List: ";
            cout<<l.back()<<endl;
            break;
        case 7:
            cout<<"Size of the List: "<<l.size()<<endl;
            break;
        case 8:
            l.reverse();
            cout<<"List reversed"<<endl;
            break;
        case 9:
            l.sort();
            cout<<"List Sorted"<<endl;
            break;
	    case 10:
            exit(1);
	        break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}