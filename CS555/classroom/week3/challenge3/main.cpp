#include <iostream>
using namespace std;

int main()
{
    // Challenge
    int scores[10];
    cout << "score = ";
    for(int i = 0; i < 10; i++)

    {

        scores[i] = rand()%100;
        cout << scores[i] << " ";

    }

    // get the number of elements
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxScore = 0;
    int maxIndex = 0;
    for (int student = 0; student < numStudents; student++)
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
            maxIndex = student;
        }
    cout << endl;
    cout << "The best score was: " << maxScore << endl;
    cout << "The best score's index: " << maxIndex - 1  << endl;
    return 0;
}
