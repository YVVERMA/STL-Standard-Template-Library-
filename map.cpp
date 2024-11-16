#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;

/*map
  is an associative container that stores elements in a --key-value pair-- format. Each element in the map is composed of a unique key and a corresponding value. The keys are used to sort and identify the elements, while the values store the content associated with the keys.
*/
/*Map

map<string,int> m;
m[key] = value;

{insert,emplace,count,erase,find,size,empty}
*/



int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    m.insert({"camera", 25});
    m.emplace("keybord", 10);

    m.erase("tv"); // delete tv

    // count returns the number of keys
    // cout << "Count: " << m.count("keybord") << endl;
    // cout << "Value of tablet: " << m["tablet"] << endl;

    // find
    if (m.find("tv") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    };

    for (auto p : m)
    {
        cout << p.first << " -- " << p.second << endl;
    }

    return 0;
}
