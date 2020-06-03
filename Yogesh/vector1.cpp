
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   vector<int> v = {3, 4, 5};

   auto it = v.insert(v.begin(), 2);
   v.insert(it, 1);

   for (auto it = v.begin(); it != v.end(); ++it)
      cout << *it <<" ";

   return 0;
}