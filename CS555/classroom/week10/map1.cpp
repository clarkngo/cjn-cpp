#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> m;
    m.insert(pair<char, int> ('A', 20392)); // insert an key-value using pair()
    m.insert(make_pair('D', 20039));

    map<char, int>::iterator it = m.begin();
    m.insert(it, pair<char, int>('V', 30192));

    it = m.find('D'); // takes O(log(n))

    // displaying the elements
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " => " << (*it).second << endl;
    }

    return 0;
}
