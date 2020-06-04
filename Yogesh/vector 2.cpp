#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    int x,y;
    vector<int>::iterator it;
    vector<int> vect1{ 1, 2, 3, 4, 5 ,10,9,8,7}; 
    cout<<"Enter 1:push_back"<<endl;
    cout<<"Enter 2:erase"<<endl;
    cout<<"Enter 3:clear"<<endl;
    cout<<"Enter 4:emplace"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    while(1){
        cin>>x;
        switch(x)
        {
        case 0:
        exit(1);
        break;
        case 1:
        vect1.push_back(6); 
        for (auto i=vect1.begin();i!=vect1.end();++i) 
           cout<<' '<<*i<<endl;
        break;
        case 2:
        it = vect1.begin(); 
        vect1.erase(it);
        for (auto i=vect1.begin();i!=vect1.end();++i) 
           cout<<' '<<*i<<endl;
        break;
        case 3:
        vect1.clear();
        for (auto i=vect1.begin();i!=vect1.end();++i) 
           cout<<' '<<*i<<endl;
        break;
        case 4:
        cout<<"Enter position to place element 15"<<endl;
        cin>>y;
        auto i=vect1.emplace(vect1.begin()+y,15);
        for (auto i=vect1.begin();i!=vect1.end();++i) 
           cout<<' '<<*i<<endl;
        break;
        
        }
    }
return 0;
}