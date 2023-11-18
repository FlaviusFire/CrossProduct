#include <iostream>
#include <vector>
using namespace std;

#include "mathVector.h"

MathVector crossProduct(MathVector a, MathVector b)
{
	int i = (a.getCompontent('j') * b.getCompontent('k')) - (b.getCompontent('j') * a.getCompontent('k'));
	int j = (a.getCompontent('i') * b.getCompontent('k')) - (a.getCompontent('k') * b.getCompontent('i')); // negated on return line
	int k = (a.getCompontent('i') * b.getCompontent('j')) - (a.getCompontent('j') * b.getCompontent('i'));

	return MathVector('c', i, -j, k);
}

int main()
{
	int numMathVectors = -1;
	
	while (numMathVectors < 2)
	{
		cout << "Enter the number of vectors: ";
		cin >> numMathVectors;

		if (numMathVectors < 2)
		{
			cout << "You must enter at least 2 vectors." << endl;
		}
	}

	vector<MathVector> MathVectors;
	MathVectors.resize(numMathVectors);

	for (int i = 0; i < numMathVectors; i++)
	{
		char varName;
		int a, b, c;

		cout << "Enter the variable you want to represent the vector: ";
		cin >> varName;
		cout << "Enter the i, j, and k components of the vector: ";
		cin >> a >> b >> c;

		MathVectors[i] = MathVector(varName, a, b, c);
	}

	MathVector resultMathVector = crossProduct(MathVectors[0], MathVectors[1]);
	for (int i = 2; i < MathVectors.size(); i++)
	{
		resultMathVector = crossProduct(resultMathVector, MathVectors[i]);
	}

	for (auto vec : MathVectors)
	{
		cout << vec.getVarName() << " x ";
	}

	cout << "\b\b\b: ";
	resultMathVector.printVector();

	return 0;
}