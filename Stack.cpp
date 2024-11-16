#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;
//  Stack called for (LIFO)-: LAST IN FIRST OUT

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // s.pop();

    // cout << "top = "  << s.top()<< endl;;
    stack<int> s2;
    s2.swap(s);// s all element int s2

    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}
