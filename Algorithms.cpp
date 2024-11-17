/*Algorithms
An algorithm is a well-defined procedure that takes one or more inputs, processes them systematically, and produces one or more outputs. It is a set of instructions designed to accomplish a specific task, often used in computing and computer programming.
*/

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;

/* Sorting
Sorting is the process of rearranging data in a specific order based on a predetermined criterion, such as numerical value, alphabetical sequence, or other relevant attributes. In computer science, sorting algorithms are designed to efficiently reorder elements in a list, array, or other data structure according to a specified comparison operator.
/*
    1) sort(arr,arr+n);  -> Sort Array
    2) sort(arr+n,grater<int>()) -> Sort Array reverse
    3) sort(v.begin(),v.end()) -> Sort Vector
*/

// 1)
//  sort is ascending order;
/* int main()
{
    int arr[] = {4, 1, 2, 0, 8, 3, 0};
    int n = sizeof(arr) / sizeof(int); // size of arr;
    sort(arr, arr + n); //

    for (auto val : arr)
    {
        cout << val << " ";
    }
}
*/

// 2) desending order array
/* int main()
{
    int arr[] = {0, 5, 1, 2, 7, 3, 1};
    int n = sizeof(arr) / sizeof(int); // size of arr;
    sort(arr, arr + n, greater<int>());

    for (auto val : arr)
    {
        cout << val << " ";
    }
}

*/

// 3) Sort Vector
/* int main()
{
    vector<int> v = {9, 0, 4, 1, 5, 2, 3};
    sort(v.begin(), v.end());

    for (auto val : v)
    {
        cout << val << " ";
    }
}

*/

// Sort Vector desending order
/*int main()
{
    vector<int> v = {2, 1, 0, 3, 4, 5, 0};
    sort(v.begin(), v.end(), greater<int>());
    for (auto val : v)
    {
        cout << val << " ";
    }
}
*/

// How To Sort Pair of vector
// ascending
/*int main()
{
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vec.begin(), vec.end());

    for(auto v : vec){
        cout << v.first << " " << v.second << endl;
    }
}
*/

// sort of pair second values custom comparator -> bool

bool camparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    else
        return false;
};

int main()
{
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vec.begin(), vec.end(), camparator);

    for (auto v : vec)
    {
        cout << v.first << " " << v.second << endl;
    }
}
