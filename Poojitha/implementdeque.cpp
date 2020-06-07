#include <iostream>
#include <deque>

using namespace std;

void print(deque <int> deq)
{
    deque <int> :: iterator it;
    for (it = deq.begin(); it != deq.end(); ++it)
    cout << " " << *it;
    cout <<endl;
}

int main()
{
    deque <int> deq;
    deq.push_back(10);
    deq.push_front(20);
    deq.push_back(30);
    deq.push_front(15);
    cout << "The deque elements are : ";
    print(deq);
    cout << "\ndeque size() : " << deq.size();
    cout << "\ndeque max_size() : " << deq.max_size();

    cout << "\nelement at at(2) is : " << deq.at(2);
    cout << "\nfront element in queue : " << deq.front();
    cout << "\nback element in deque : " << deq.back();

    cout << "\nafter pop_front() : ";
    deq.pop_front();
    print(deq);

    cout << "\nafter pop_back() deque : ";
    deq.pop_back();
    print(deq);

    return 0;
}
