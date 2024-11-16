#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;
/*
A queue is a linear data structure that stores the elements sequentially. It uses the FIFO (First In First Out)*/

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << endl;
}
// Stack all function are same in queue