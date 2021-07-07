#include "matrix.hpp"
#include <array>

Matrix::Matrix(std::array<std::array<double, 3>, 3> m)
{
	mData = m;
};

Matrix::Matrix(double a){
	std::array<std::array<double, 3>, 3> res;
	std::array<double, 3> subRes;
	subRes.fill(a);
	res.fill(subRes);
	mData = res;
}

	
void Matrix::print() const {

	for(auto x : mData){
		std::cout << "[ ";
		for(auto y : x){
			std::cout << y << " ";
		}
		std::cout <<"]\n";
	}
	std::cout << std::endl;
};

Matrix Matrix::operator+(Matrix & mat){
	
	Matrix res(0.0);

};
