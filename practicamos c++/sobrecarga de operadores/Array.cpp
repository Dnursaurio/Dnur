#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array(int ArraySize):
	size{ (ArraySize > 0 ? static_cast<size_t>(ArraySize) : throw invalid_argument{"el arreglo debe ser mayor que 0" })},
	ptr{ new int[size] {}}{/* cuerpo vacio */ }


Array::Array(const Array& arrayToCopy) : size{ arrayToCopy.size }, ptr = new int[size]
{
	for (size_t i = 0; i < size; ++i)
	{
		ptr[i] = arrayToCopy[i];
	}
}

Array::~Array()
{
	cout << "destructor invocado";endl;
	delete[] ptr;
}

size_t Array::getSize() const
{
	return size;
}

const Array& Array::operator=(const Array& right)
{
	if (&right != this)
	{
		if (size != right.size)
		{
			delete[] ptr;
			size = right.size;
			ptr = new int[size];
		}

		for (size_t i{ 0 }; i < size; ++i)
		{
			ptr[i] = right.ptr[i];
		}
	}

	return *this;
}

bool Array::operator==(const Array& right) const
{
	if (size != right.size)
	{
		return false;
	}

	for (size_t i = 0; i < size; ++i)
	{
		if (ptr[i] != right.ptr[i])
		{
			return false;
		}
	}
	return true;
}

int Array::operator[](int subscript)
{
	if (subscript < 0 || subscript >= size)
	{
		throw out_of_range{"corchetes fuera de rango"};
	}
	return ptr[subscript];
}

int Array::operator[](int subscript) const
{
	if (subscript < 0 || subscript >= size)
	{
		throw out_of_range{"corhcetes fuera de rango"};
	}
}

istream& operator>>(istream& input, Array& a)
{
	for (size_t i = 0; i < a.size; ++i)
	{
		input >> a.ptr[i];
	}
	return input;
}

ostream& operator<<(ostream& output, Array& a)
{
	for (size_t i = 0; i < a.size; ++i)
	{
		output << a.ptr[i] << " ";
	}
	output << endl;
	return output;
}