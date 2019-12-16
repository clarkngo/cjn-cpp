#include <iostream>
#include <set>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(0));
    set <int> s;
    // insert operations (11 items in total)
    // the set gets sorted as the element gets added
    for(int i = 0; i < 10; i++)
    {
        s.insert(rand()%100);
    }
    s.insert(101);

    set <int>::iterator it;
    it = s.find(101); // sequence container has no find()

    set <int>::iterator itb = s.begin();
    set <int>::iterator ite = s.end();
    for(set <int>::iterator it = itb; it != ite; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.erase(itb);
    for(set <int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.insert(40); // sorted so index is not known
    it = s.find(40); // it now points to index of the value 40

    return 0;
}
