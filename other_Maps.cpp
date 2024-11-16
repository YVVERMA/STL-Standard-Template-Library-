#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;
/* Multi Map
A multimap in C++ is a type of associative container that stores elements in sorted key-value pairs as tuples. Unlike a map, which requires unique keys, a multimap allows multiple values to be associated with the same key. This means that a key can have multiple entries, and the container will store all of them.
*/
/*Unordered Map
An unordered_map is a type of associative container in the C++ Standard Template Library (STL) that stores key-value pairs in a hash table. It is an unordered associative container that contains unique keys and their associated values.

*/

// multi map
/*
int main()
{
    multimap<string, int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // m.erase("tv"); // clear all element
    m.erase(m.find("tv"));

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}
*/

// Unorderd Map
int main()
{
    unordered_map<string, int> m;
    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("watch", 100);
    m.emplace("camara", 100);

    // m.erase("tv"); // clear all element
    // m.erase(m.find("tv"));

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}
