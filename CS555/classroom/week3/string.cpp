#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char Greeting1[] = "Hello!";
    char Greeting2[] = "How are you?";
    string Greeting3 = "What's up!";
    string Name;

    for(int i = 0; i < strlen(Greeting1); i++)
    {
//        cout << Greeting1[i];
    }
    cout << strcat(Greeting1, Greeting2);
    if(!strcmp(Greeting1, Greeting2))
    {
        cout << "same" << endl;
    }

    cout << "Enter your name " << endl;

    getline(cin, Name);

    cout << "Is your name " << Name << "?" << endl;

    return 0;
}
