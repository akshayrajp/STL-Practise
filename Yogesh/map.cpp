#include<iostream>
#include <map>
#include <string>
using namespace std;
int main () {
   map<char, int> m;
   map<char, int>::iterator t;
   m.insert (pair<char, int>('a', 2));
   m.insert (pair<char, int>('b', 5));
   m.insert (pair<char, int>('c', 7));
   m.insert (pair<char, int>('d', 1));
   cout<<"Size of the map: "<< m.size() <<endl;
   cout << "map contains:"<<endl;
   for (t = m.begin(); t != m.end(); ++t)
      cout << (*t).first << " => " << (*t).second <<endl;
   for (char c = 'a'; c <= 'd'; c++) {
      cout << "There are " << m.count(c) << " element(s) with key " << c << ":";
      map<char, int>::iterator t;
      for (t = m.equal_range(c).first; t != m.equal_range(c).second; ++t)
         cout << ' ' << (*t).second<<endl;
   }
   if (m.count('a'))
      cout << "The key a is present\n";
   else
      cout << "The key a is not present\n";
   if (m.count('e'))
      cout << "The key e is present\n";
   else
      cout << "The key e is not present\n";
   t = m.find('b');
   m.erase (t);
   cout<<"Size of the map: "<<m.size()<<endl;
   cout << "map contains:\n";
   for (t = m.begin(); t != m.end(); ++t)
   cout << (*t).first << " => " << (*t).second << '\n';
   return 0;
}