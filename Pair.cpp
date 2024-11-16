#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
// we create a std::pair object person with an int and a std::string as its elements. We access the elements using the first and second keywords and print the result.

// int main()
// {
//     // pair<int, int> p = {1, 5}; // Pair
//     pair<string, int> p = {"Coding", 4}; // Pair

//     // How to access element
//     cout << p.first << " " << p.second << endl;
// }

// int main()
// {
//     // pair of pair
//     pair<int, pair<char, int>> p = {2, {'a', 10}};
//     cout << p.first << endl;
//     cout << p.second.first << endl;
//     cout << p.second.second << endl;
// }

int main()
{
    // pair of vector
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {4, 5}, {6, 7}};

    vec.push_back({8,9});// insert
    vec.emplace_back(10,11);// in-place objects create

    for (auto val : vec)
    {
        cout << val.first << " " << val.second << endl;
        
    }
}