#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <string> q;
    q.push("Tim");
    q.push("Kay");
    q.push("Jackson");
    q.push("Maria");
    cout << "size of queue: " << q.size() << endl;
    cout << "first element in the queue: " << q.front() << endl;
    cout << "first element in the queue: " << q.back() << endl;

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop(); // to move to the next element
        //cout << "size of queue: " << q.size() << endl;
    }
    return 0;
}
