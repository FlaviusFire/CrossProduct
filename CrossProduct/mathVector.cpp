#include "mathVector.h"

#include <iostream>
using namespace std;

MathVector::MathVector()
{
	varName = '\0';
	i = 0;
	j = 0;
	k = 0;
}

MathVector::MathVector(char varName, int i, int j, int k)
{
	this->varName = varName;
	this->i = i;
	this->j = j;
	this->k = k;
}

void MathVector::printVector() const
{
	cout << " = <" << i << ", " << j << ", " << k << ">";
}

int MathVector::getCompontent(char component) const
{
	switch (component)
	{
		case 'i':
			return i;
		case 'j':
			return j;
		case 'k':
			return k;
		default:
			return 0;
	}
}