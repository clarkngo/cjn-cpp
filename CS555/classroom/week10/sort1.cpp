#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;
// functor: function object behaves like a function pointer
// a function usually takes one parameter. If you need
// more than one parameter, you can create a class with
// overloading "()" operator
bool lessThan50(int n)
{
    return (n < 50);
}
void printContainer(vector <int> v)
{
    vector <int>::iterator itb = v.begin();
    vector <int>::iterator ite = v.end();
    // traversing the container (vector) using an iterator
    for(vector <int>::iterator it= itb; it != ite; ++it)
    {
        // note that dereferencing the iterator 
        // to access the element in the container
        cout << *it << " "; 
    }
    cout << endl;
}

int main()
{
    srand(time(0)); // set the seed for rand()
    // sorting algorithm requires random access iterators:
    // vector, deque (arrays)

    vector <int> v;
    // populating the container (vector)
    for(int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100); // 10 random numbers < 100
        cout << v.at(i) << " ";
    }
    cout << endl;
    // modifying STL algorithm (SORT)
    // 1. sorting.
    // greater => functor (>, decending order)
    // sort(v.begin(), v.end(), greater<int>()); // descending order
    // less => functor (<, ascending order)
    //sort(v.begin(), v.end(), less<int>()); // ascending order    
    int nRange = 5;
    // 2. partial sorting.
    // sorting on a certain range of the elements (first 5 items)
    // partial_sort(v.begin(), v.begin() + nRange, v.end(), greater<int>());
    // partial_sort(v.begin(), v.begin() + nRange, v.end(), less<int>());    

    // 3. finding 5 largest values 'without' sorting the list
    // nth_element(v.begin(), v.begin() + nRange, v.end(), greater<int>());

    // 4. move the values less than 50 to the beginning of the vector
    // partition(v.begin(), v.end(), lessThan50); // with swapping between elements
    // stable_partition(v.begin(), v.end(), lessThan50);

    // 5. heap algorithm (prority queue)
    // Heap Property: 1st element is always the largest
    // Add/remove takes O(log(n)) time
    make_heap(v.begin(), v.end());
    printContainer(v);

    // 5-1. remove the largest element
    pop_heap(v.begin(), v.end());
    printContainer(v);
    // 5-2. remove the largest item (e.g. highest priority)
    v.pop_back(); // take out the largest from the heap
    printContainer(v);
    // 5-3. add another element (priority)
    v.push_back(1);
    push_heap(v.begin(), v.end());
    printContainer(v);
    // 5-4. sort the heap
    sort_heap(v.begin(), v.end());
    return 0;
}