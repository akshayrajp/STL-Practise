#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    cout<<"USING ASSIGN, FRONT, EMPTY, MAX_SIZE, CLEAR, INSERT_AFTER, EMPLACE_AFTER, REVERSE, SORT, MERGE, SPLICE_AFTER, UNIQUE, REMOVE, REMOVE_IF, RESIZE"<<endl;
//initializing
   forward_list<int>list1 = {5,4,6,2};
   forward_list<int>list2={7,4,1,9};
   cout<<"\ndisplaying elements in forward list"<<endl;
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   //inserting 8
   cout<<"\nafter inserting 8 into forward list"<<endl;
   list1.insert_after(list1.begin(), 8);
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   cout<<"\nafter reversing forward list"<<endl;
   //reversing forward list
   list1.reverse();
   for(auto& elm: list1)
    cout<< elm << " ";
    cout<<endl;
    // Max size
    cout<<"\nlist  max size is : "<<list1.max_size()<<endl;
   //unquie removes adjustent duplicates
   cout<<"\nafter removing duplicates"<<endl;
   list1.unique();
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   //using remive
   list1.remove(2);
   cout<<"\nafter removing 2"<<endl;
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   //resizing
   list1.resize(5);
   cout<<"\nafter resizing to 5"<<endl;
    for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
        //sorting forward lists
   list1.sort();
   list2.sort();
   cout<<"\nafter sorting list1"<<endl;
   for(auto& elm: list1)
   cout<< elm <<" ";
   cout<<endl;
   //merging both lists
   list1.merge(list2);
   cout<<"\nafter merging forward lists"<<endl;
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   //after splice_after
   list1.splice_after(list1.begin(), list2);
    cout<<"\n after using splice_after"<<endl;
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;


   //remove_if
   list1.remove_if([](int n) {
                   return n>4;
                   });
    cout<<"\natfer removing everything greater than 4"<<endl;
   for(auto& elm: list1)
   cout<< elm << " ";
   cout<<endl;
   //front
  cout<<"\nreturning first/front element"<<endl;
  cout<<list1.front();
  //empty
  cout<<"\nchecking if empty or not"<<endl;
   list1.empty()? cout << "\n Forward List empty":
    cout << "Forward List not empty"<<endl;
    //clear
    list1.clear();
    cout<<"after clearing forward list"<<endl;
    list1.empty()? cout << "\nList empty":
    cout << "List not empty"<<endl;
    cout<<"\n---------------------------------"<<endl;
    forward_list<int> listt;
    //Assigning values using assign()
    listt.assign({12,42,3,27,7,69});
    cout<<"\ndisplaying elements after assigning"<<endl;
    for(auto& elp: listt)
   cout<< elp << " ";
   cout<<endl;

    //Inserting value at the front using emplace_front()
    listt.emplace_front(1);
    cout<<"\ndisplaying elements after emplace_front(1)"<<endl;
    for(auto& elp: listt)
   cout<< elp << " ";
   cout<<endl;
   cout<<"\n---------------------------------"<<endl;

}
