// Author @Clark Jason Ngo
// #include "stdafx.h"
#include "Array.h"
using namespace std;

Array::Array(int nSize)
{
    if(nSize > 0)
    {
        m_nSize = nSize;
    }
    else
    {
        m_nSize = 1;
    }
    m_nData = new int[m_nSize];

    for(int i = 0; i < m_nSize; i++)
    {
        m_nData[i] = 0;
    }
}

Array::~Array()
{
    if(m_nData != nullptr)
    {
        delete m_nData;
    }
}

// overload = to copy elements of an array object to another array object
Array&Array::operator=(const Array &ArrayCopy)
{
    if(m_nSize != ArrayCopy.m_nSize)
    {
        delete [] m_nData;
        m_nSize = ArrayCopy.m_nSize;
        m_nData = new int[m_nSize];
    }
    for(int i = 0; i < m_nSize; i++)
        m_nData[i] = ArrayCopy.m_nData[i];

    return *this;
}

// overload [] to assign values into an array object
int &Array::operator[](int nIndex)// returning a reference object
{
    if(nIndex < 0 || nIndex >= m_nSize)
    {
        nIndex = 0;
    }
    return (m_nData[nIndex]); // storing the element to m_nData[] inside
}

// print the elements of the array
void Array::print()
{
    for(int i = 0; i < m_nSize; i++)
        cout << m_nData[i] << endl;
    return;
}

// return the size of array object
int Array::len()
{
    int size;
    size = m_nSize;
    return size;
}

// add elements of two array objects in their same indices
Array&Array::add(const Array &RHS)
{
    for (int i = 0; i < this->m_nSize; i++)
    {
        this->m_nData[i] += RHS.m_nData[i];
    }
    return *this;
}


bool Array::operator==(const Array& RHS) // RHS = right hand side
{
    bool bRet = true;

    //
    // your implementation for comparison (*this == RHS)
    //
    for (int i = 0; i < this->m_nSize; i++)
    {
        if (this->m_nData[i] != RHS.m_nData[i])
        {
            bRet = false;
            return bRet;
        }
    }

    return bRet;
}
