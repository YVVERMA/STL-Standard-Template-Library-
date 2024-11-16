#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
// Deque : Double Ended Queue
/*
    deque<int> d = {1,2,3};
    * push_back & push_front
    * emplace_back & emplace_front
    * pop_back & pop_front
very similar to list
*/
/*
{push_back, push_front, emplace_back & emplace_front, pop_back & pop_front};
// size, erase, clear, begin, end, rbegin, rend, insert, front, back
*/

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};

    for (auto val : d)
    {
        cout << val << " ";
    }
} 
