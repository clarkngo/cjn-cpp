// Author @Clark Jason Ngo
#pragma once
#include <iostream>
class Array
{
	private:
		int m_nSize;	// array size
		int *m_nData;	// pointer-base array
	public:
		Array(int nSize = 10);
		int len();
		void print();
		Array &add(const Array &ArrayRight);
		Array &operator=(const Array &ArrayCopy);
		bool &operator==(const Array& rhs);

		int &operator[](int nIndex);
		~Array();

};
