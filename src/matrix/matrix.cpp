#include "matrix.hpp"
#include <array>

Matrix::Matrix(std::array<std::array<double, 3>, 3> m)
{
	mData = m;
};
	
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
};
