#include <iostream>
#include <deque>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(0)); // set the seed for rand()
    deque <int> d;
    // populating the container (deque)
    for(int i = 0; i < 10; i++)
    {
        d.push_back(rand()%100); // 10 random numbers < 100
    }

    d.push_front(-11);
    d.push_back(192);

    deque <int>::iterator itb = d.begin();
    deque <int>::iterator ite = d.end();

    for(deque <int>::iterator it = itb; it != ite; ++it)
    {
        cout << *it << " ";
    }
    return 0;
}
