#include <iostream>
#include <vector>
#include <list>
using namespace std;
// list (doubly linked list)
/*
list<int> l = {1,2,3};
    *   push_back & push_front
    *   emplace_back & emplace_front
    * pop_back & pop_front
    // size, erase, clear, begin, end, rbegin, rend, insert, etc.;
*/

/*
int main()
{
    list<int> l;
    l.emplace_back(4);
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

*/
int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    for (auto val : l)
    {
        cout << val << " ";
    }
    /// You not Access Random idx val in list
}  

