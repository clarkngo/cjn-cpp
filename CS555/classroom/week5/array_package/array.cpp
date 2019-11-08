// Author @Clark Jason Ngo
// #include "stdafx.h"
#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int i)
{
    // range validation for array size < 1
    if(i <= 0)
    {
        cout << "I am resizing the array to 10 elements" << endl;
        m_nSize = 10;
    }
    else
    {
        m_nSize = i;
    }

    m_nData = new int(m_nSize);

    for(int j = 0; j < m_nSize; j++)
    {
        m_nData[j] = 0;
    }
}

Array::~Array()
{
    // checks if memory is allocated
    if(m_nData != nullptr)
    {
        delete m_nData;
    }
}

int Array::len()
{
    return m_nSize;
}

void Array::print()
{
    for(int j = 0; j < m_nSize; j++)
    {
        cout << m_nData[j] << endl;
    }
}
int &Array::operator[](int nIndex)
{
    if(nIndex >= m_nSize || nIndex < 0)
    {
        nIndex = 0;
        cout << "Invalid index!" << endl;
    }
    cout << "Value is " << this->m_nData[nIndex] << endl;
    return this->m_nData[nIndex];
}

Array &Array::operator=(const Array &ArrayCopy)
{
    Array newArray(ArrayCopy.m_nSize);

    for (int i = 0; i < ArrayCopy.m_nSize; i++)
    {
        newArray.m_nData[i] = ArrayCopy.m_nData[i];
    }
    return newArray;
}
// Array(int nSize = 10);
// int len();
// void print();
// Array &add(const Array &ArrayRight);
// Array &operator=(const Array &ArrayCopy);
// bool &operator==(const Array& rhs);

// int &operator[](int nIndex);