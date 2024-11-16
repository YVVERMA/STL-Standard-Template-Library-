#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;
/*
A Priority Queue is a type of abstract data structure that stores elements with associated priorities. The elements are ordered based on their priorities, and the highest-priority element is served or dequeued first. In other words, elements with higher priority values are retrieved or removed before elements with lower priority values.
*/

/*
priority_queue<int> q;
priority_queue<int, vector<int>,greater<int>> q;
push,emplace
top
pop
size
empty

*/
// MaxHeap / MinHeap > CBT

int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(5);
    q.push(3);
    q.push(15);
    q.push(12);

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    cout << endl;
    // grater -> functor is nothing but a function object use for some work
    priority_queue<int, vector<int>, greater<int>> rev;
    rev.push(10);
    rev.push(5);
    rev.push(3);
    rev.push(15);
    rev.push(12);

    while (!rev.empty())
    {
        cout << rev.top() << endl;
        rev.pop();
    }
}