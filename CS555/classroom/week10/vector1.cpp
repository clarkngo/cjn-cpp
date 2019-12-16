#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

bool isEven(int i)
{
    return (i % 2) == 0 ? true : false;
}
int main()
{
    srand(time(0)); // set the seed for rand()
    vector <int> v;
    // populating the container (vector)
    for(int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100); // 10 random numbers < 100
    }
    vector <int> v1(v); // copy constructor v1 = v
    
    // getting the iterators (begin and end)
    vector <int>::iterator itb = v.begin();
    vector <int>::iterator ite = v.end();
    cout << "first = ";
    cout << v.front(); // returning the first element
    cout << " last = ";
    cout << v.back();  // returning the last element
    cout << endl;
    // traversing the container (vector) using an iterator
    for(vector <int>::iterator it= itb; it != ite; ++it)
    {
        // note that dereferencing the iterator 
        // to access the element in the container
        cout << *it << " "; 
    }
    cout << endl;

    // now calling an (non-modifying) algorithms
    // 1. val = count_if(being(),end(),functor) to the container
    cout << "# of even numbers = " << count_if(v.begin(), v.end(), isEven) << endl; // returning the value
    // 2. itr = max_element() of the container
    vector <int>::iterator itr;
    itr = max_element(v.begin(), v.end()); // returning the iterator
    cout << "maximum value = " << *itr << endl;
    // 3. itr = min_element() of the container
    itr = min_element(v.begin(), v.end()); // returning the iterator
    cout << "minimum value = " << *itr << endl;

    // now calling an 
    // (modifying) algorithm (sort) to the container
    sort(itb, ite);   //v.begin(), v.end());
    for(vector <int>::iterator it= itb; it != ite; ++it)
    {
        // note that dereferencing the iterator 
        // to access the element in the container
        cout << *it << " "; 
    }


    return 0;
}