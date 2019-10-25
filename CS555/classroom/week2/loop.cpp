#include <iostream>
using namespace std;

int main()
{
/*
    int *x = new int (10);

    for(int i = 0; i < 10; i++)
    {
        x[i] = i;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << x[i] << endl;
        if(i == 4)
        {
            break;
        }
    }
*/
/*    for(unsigned int count = 9; count >= 0; --count) // unsigned int
    {
        cout << count << " ";
    }
*/
/*
    for(;;)
    {
        char c;
        cout << "enter a character -->";
        cin >> c;
        if(c != 'k')
        {
            cout << "please try it again..." << endl;
            continue;
        }
        else
        {
            break;
        }
    }
*/
/*
    int a = 0;
    while (a < 10)
    {
        cout << a << endl;
        a++;
    }
*/


    int selection;
    do
    {
        std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> selection;
    } while (selection != 1 && selection != 2 &&
        selection != 3 && selection != 4);

    // do something with selection here
    // such as a switch statement

    std::cout << "You selected option #" << selection << "\n";

    return 0;
}
