#include<iostream> 
#include<list> 
#include<iterator>
using namespace std; 

int main()
{
	list<int> l,l1;
	list<int>::iterator it=l.begin();
 	for(int i=0;i<6;i++) 
    { 
        l.push_back(i);  
    } 
    for(int i=6;i<12;i++) 
    { 
        l1.push_back(i);  
    } 
      
    cout<<"List elements :\n";
    for(it=l.begin();it!=l.end();it++)
    	cout<<*it<<" ";
     cout<<endl;
 
    //advance 
    advance(it,4);
    l.insert(it,20);
    advance(it,1);
    l.insert(it,12);

    //Printing the list 
    cout<<"After insertion :"; 
    for(it=l.begin();it!=l.end();it++) 
    	cout<<*it<<" "; 
	cout<<endl;

	l.reverse();
	cout<<"After Inversion:";
	for(it=l.begin();it!=l.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	
	//unique
    l.unique();
    cout<<"List:\n"; 
    for(it=l.begin();it!=l.end();it++) 
    	cout<<*it<<" "; 
	cout<<endl;

	//Sorting the list
	l.sort();
    cout<<"The sorted list is:\n";
    for(it=l.begin();it!=l.end();++it) 
    cout<<*it<<" ";
	cout<<endl;
	
	//splice
	l.splice(l.begin(),l1);
  
	l1.clear();
	
	//empty()
    l1.empty()?cout<<"Empty List\n":cout<<"Not Empty\n";

	return 0;
}
