#include <iostream>
#include <vector>
using namespace std;

// Vector Iterators
/*
 * vec.begin();
 * vec.end();
 * vec.rbegin();
 * vec.rend();
 */

/*int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "vec.begin val = : " << *(vec.begin()) << endl;
    cout << "vec.begin val = : " << *(vec.end()) << endl;// garbage value
    cout << "vec.begin val = : " << *(vec.end()-1) << endl;

}
*/

// Iterators
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " "; // Forword loop
    }
    cout << endl;
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " "; // Backword loop
    }
}