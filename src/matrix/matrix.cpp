#include "matrix.hpp"
#include <array>

Matrix::Matrix(std::array<std::array<double, 3>, 3> m){

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

double& Matrix::operator()(const unsigned a , const unsigned b ){

	return this->mData[a][b];
};


Matrix Matrix::operator+(Matrix & mat){
	
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] + mat(i,j);
		}
	}
	return res;
};


Matrix Matrix::operator-(Matrix & mat){
	
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] - mat(i,j);
		}
	}
	return res;
};


Matrix Matrix::operator*(Matrix & mat){
	
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			for(int k = 0 ; k < 3 ; k++){
				res(i,j) = res(i,j) + this->mData[i][k] * mat(k,j);
			}
		}
	}
	return res;
};


Matrix Matrix::operator+(double scal){
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] + scal;
		}
	}
	return res;
};


Matrix Matrix::operator-(double scal){
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] + scal;
		}
	}
	return res;
};


Matrix Matrix::operator*(double scal){
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] * scal;
		}
	}
	return res;
};


Matrix Matrix::operator/(double scal){
	Matrix res(0.0);
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			res(i,j) = this->mData[i][j] * scal;
		}
	}
	return res;
};



