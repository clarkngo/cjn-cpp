#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(10);
    s.push(9);
    s.push(2);        
    s.push(14);
    cout << "size of stack: " << s.size() << endl;
    cout << "first element in the stack: " << s.top() << endl;
    // s1 = s; // s1 = &s; // deep copy or shallow copy?

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop(); // to move to the next element
        cout << "size of stack: " << s.size() << endl;
    }
/*
    while(!s1->empty())
    {
        cout << s1->top() << endl;
        s1->pop(); // to move to the next element
    }
*/

    return 0;
}