#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;
/*Lower Bound
In C++, std::lower_bound is a binary search algorithm that returns an iterator pointing to the first element in the range [first, last) that is not less than the specified value. In other words, it finds the smallest element in the range that is greater than or equal to the target value.
*/
/*Upper Bound
std::upper_bound is a standard library function that returns an iterator pointing to the first element in a sorted range that is strictly greater than a given value. It is defined in the <algorithm> header.

The function takes four parameters:
*/
// lower bound- should NOT be less than key
// upper bound- grater than key
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    // s.insert(4);
    s.insert(5);
    s.insert(6);

    cout << "LowerBound: " << *s.lower_bound(4) << endl;
    cout << "LowerBound: " << *s.upper_bound(8) << endl;
}