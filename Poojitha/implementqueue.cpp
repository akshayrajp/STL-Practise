#include<iostream>
#include<queue>
using namespace std;

void print(queue<int> que) {
     while(!que.empty()){
     cout<<que.front()<<endl;
     que.pop();
}
}
int main()
{
    queue<int>que;
    que.push(5);
    que.push(6);
    que.push(7);
    cout<<"\ndisplaying elements in queue: "<<endl;
    print(que);

    cout << "\nsize() of queue : " << que.size();
    cout << "\nfront() of queue : " << que.front();
    cout << "\nback() of queue : " << que.back();

    cout<<endl;
    que.pop();
    cout<<"\ndisplaying elements after pop(): "<<endl;
    print(que);

    return 0;
}
