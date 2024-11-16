#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
using namespace std;
/* Multi set
multiset in C++ is a container that stores elements in a sorted order, allowing multiple elements with the same value. It is a part of the Standard Template Library (STL) and is defined in the <set> header.*/
/*Unordered set
unordered_set is an unordered associative container that stores unique elements. It is a part of the Standard Template Library (STL) and provides fast lookup, insertion, and deletion operations. Unlike a set, which is sorted, an unordered_set does not maintain a specific order among its elements.

*/

// multi set

int main()
{
    multiset<int> m;
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.insert(5);

    for (auto p : m)
    {
        cout << p << endl;
    }
}

// Unorderd Map
// int main()
// {
//     unordered_set<int> m;
//     m.insert(1);
//     m.insert(2);
//     m.insert(3);
//     m.insert(4);

//     for (auto p : m)
//     {
//         cout << p << endl;
//     }
// }
