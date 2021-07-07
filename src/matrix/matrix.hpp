#include <iostream> 
#include <array>

class Matrix{

	public:
		Matrix(std::array<std::array<double, 3>, 3>);
		Matrix(double);
		Matrix(const Matrix &);

		Matrix operator+(Matrix &);
		Matrix operator-(Matrix &);
		Matrix operator*(Matrix &);
		Matrix operator+(double);
		Matrix operator-(double);
		Matrix operator*(double);
		Matrix operator/(double);
		double& operator()(const unsigned, const unsigned);

		void print() const;


	private:
		std::array<std::array <double, 3>,3> mData;
};
