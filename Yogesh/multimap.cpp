#include<iostream>
#include <map>
#include <string>
using namespace std;
int main () {
   multimap<char, int> Mm;
   multimap<char, int>::iterator it;
   Mm.insert (pair<char, int>('a', 5));
   Mm.insert (pair<char, int>('b', 25));
   Mm.insert (pair<char, int>('b', 50));
   Mm.insert (pair<char, int>('a', 75));
   cout<<"Size of the multimap: "<< Mm.size() <<endl;
   cout << "Multimap contains:"<<endl;
   for (it = Mm.begin(); it != Mm.end(); ++it)
      cout << (*it).first << " => " << (*it).second <<endl;
   for (char c = 'a'; c <= 'b'; c++) {
      cout << "There are " << Mm.count(c) << " elements with key " << c << ":";
      multimap<char, int>::iterator it;
      for (it = Mm.equal_range(c).first; it != Mm.equal_range(c).second; ++it)
         cout << ' ' << (*it).second<<endl;
   }
   it = Mm.find('b');
   Mm.erase (it);
   cout<<"Size of the multimap: "<<Mm.size()<<endl;
   cout << "Multimap contains:"<<endl;
   for (it = Mm.begin(); it != Mm.end(); ++it)
      cout << (*it).first << " => " << (*it).second <<endl;
   return 0;
}