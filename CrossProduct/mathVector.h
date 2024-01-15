class MathVector
{
	private:
		char varName;
		int i, j, k;

	public:

		MathVector();
		MathVector(char varName, int i, int j, int k);

		int  getCompontent(char component) const;
		char getVarName() const { return varName; }

		void printVector() const;
};