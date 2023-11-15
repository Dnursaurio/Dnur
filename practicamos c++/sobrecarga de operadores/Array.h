#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array
{
	friend std::ostream& operator<<(std::ostream&, const Array&);
	friend std::istream& operator>>(std::istream&, Array&);
public:
	explicit Array(int = 10);
	Array(const Array&);
	~Array();
	size_t getSize() const;

	const Array& operator=(const Array&);
	bool operator==(const Array&) const;//operador de igualdad

	//el operador de desigualdad es la negacion del de igualdad
	bool operator!=(const Array& right) const
	{
		return !(*this == right); //invoca el operador de igualdad
	}

	//el operador corchetes para objetos no constantes retorna valores modificables 
	int& operator[](int);

	//el operador corchetes para objetos constantes retorna valores no modificables
	int operator[](int) const;
private:
	size_t size;
	int* ptr;
};
#endif
