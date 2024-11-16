#include <iostream>
#include <vector>
// Standard Template Library (STL)
/* STL
*  Container
*  Iterators
*  Algorithms
*  Functors

*/
using namespace std;

/*Vector
    // vector<int> vec;
    // vector<int> vec = {1,2};
    // vector<int> vec(2,10);
    // vector<int> vec2(vec1);
    (size, capacity, push_back, pop_back, emplace_back, at, [], front, back)
*/

/*int main()
{
    vector<int> vec; // 0;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back(); // remove the last element

    // for Each loop
    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    cout << "val at idx 2: " << vec[2] <<" or " << vec.at(2) << endl;
    cout << "val at front " << vec.front() <<"\nor back " << vec.back() << endl;

    cout << endl;
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    return 0;
}
*/

/*
int main()
{
    // vector<int> vec = {1,2,3,4,5};// dynamic programming - tabulation DP[][]
    vector<int> vec(10, 5);
    vector<int> vec2(vec);

    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;
}
*/

// vector- {erase, insert, clear, empty }; TC = O(n);
int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin()+0); // index 0 delete
    // vec.erase(vec.begin()+2); // index 2 delete
    /// Delete range of number
    // vec.erase(vec.begin()+1,vec.begin()+3);

    vec.insert(vec.begin() + 2, 100); // insert element in idx

    vec.clear();// clear all Element

    if (vec.empty()) // check vec is emty or not
    {
        cout << "emty";
    }
    else
    {
        cout << "Not emty\n"; 
    }
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}