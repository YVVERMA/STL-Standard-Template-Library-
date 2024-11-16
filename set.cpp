#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
/*set
set is a container from the Standard Template Library (STL) that stores unique elements in a sorted order. It is an Associative Container, meaning that each element is associated with a unique key, and the elements are arranged according to the ordering defined by a comparison function
*/
int main()
{
    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(-1);

    cout << s.size() << endl;

    // for (auto val : s)
    // {
    //     cout << val << " " << endl;
    // }

    if (s.find(0) != s.end())
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
}
