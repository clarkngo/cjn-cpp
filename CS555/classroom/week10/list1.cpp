#include <iostream>
#include <list>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(0)); // set the seed for rand()
    list <int> L = {1, 43, 29};
    L.push_back(-10);
    L.push_front(10);

    for(list<int>::iterator it = L.begin(); it != L.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    list<int>::iterator itr = find(L.begin(), L.end(), 29); // note find() not a member method
    cout << "item found: " << *itr << endl;
    L.insert(itr, -999);
    itr++;
    cout << "item to be removed: " << *itr << endl;;
    L.erase(itr);

    for(list<int>::iterator it = L.begin(); it != L.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}
