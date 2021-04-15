//CPP code to demonstrate Stack implementation
#include<bits/stdc++.h> 
using namespace std; 
bool isStackEqual(stack<string> s1,stack<string> s2) 
{ 
    bool flag=true;
    if(s1.size()!=s2.size())
    { 
        flag=false; 
        return flag; 
    }

    //Comparing top of both the stacks 
    while(s1.empty()==false)
    { 
        if(s1.top()==s2.top())
        { 
            s1.pop(); 
            s2.pop(); 
        } 
        else
        {
            flag=false; 
            break; 
        } 
    }
    return flag; 
}
int main() 
{ 
    stack<string> stack1; 
    stack<string> stack2; 

    stack1.push("HII"); 
    stack1.push("HELLO"); 
    stack1.push("HEYY"); 
    stack1.push("HOII"); 
    stack1.push("HOLA"); 

    stack2.push("hii"); 
    stack2.push("hello"); 
    stack2.push("heyy"); 
    stack2.push("hoii"); 
    stack2.push("hola"); 
  
    if(isStackEqual(stack1,stack2)) 
        cout<<"Stack1 and Stack2 are equal\n"; 
    else
        cout<<"Stack1 and Stack2 are not equal\n"; 
    
    cout<<"Stack 1 is:\n";
    while(!stack1.empty())
    {
        cout<<stack1.top()<<" ";
        stack1.pop();
    }
    cout<<endl;
    cout<<"Stack 2 is:\n";
    while(!stack2.empty())
    {
        cout<<stack2.top()<<" ";
        stack2.pop();
    }
    cout<<endl;
    return 0; 
}