// Array.hpp

class Array
{
private:
    int m_nSize;
    int *m_nData;

public:
    // construtor with default value 10
    Array(int nSize = 10);
    // assign value to array
    Array &operator=(const Array &ArrayCopy);
    // check if index is lower than zero or bigger than array size
    int &operator[](int nIndex);
    // print out each element in array
    void print();
    // destructor
    ~Array();
    // return size of array in int
    int len();
    // return true if two arrays have the same size
    bool operator==(const Array &rhs);
    // return the calling array with new value adding from both if both have same size.
    // example, arr1[3] = {1, 2, 3}
    //          arr2[3] = {4, 5, 6}
    //          arr1.add(arr2) then arr1 become {5, 7, 9}
    Array &add(const Array &ArrayRight);
};
