#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;
/*
A stack is a fundamental data structure in computer science, characterized by a linear sequence of elements, with operations performed in a specific order. It follows the Last In First Out (LIFO) principle, meaning that the most recently added element is the first one to be removed.
*/

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
