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


int main() {
    vector<int> vec = {1,2,3,4,5};

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
}