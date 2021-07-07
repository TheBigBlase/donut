#include <math.h>
#include <iostream> 
#include <array>
#include "matrix/matrix.hpp"

int main(){
//	std::array<std::array<double,3>,3> mat = { 1, 0, 0, 
//																						 0, 1, 0, 
//																						 0, 0, 1 };
//	for(auto elt : mat){
//		for(auto elt2 : elt){
//			std::cout << elt2 << " ";
//		}
//		std::cout << "\n";
//	}
//	std::cout << std::endl;
	
	Matrix Mat1({std::array<std::array<double, 3>,3> {0,0,0,
																									  0,0,0,
																									  0,0,0}});

	Matrix Mat2({std::array<std::array<double, 3>,3> {1,0,0,
																									  0,1,0,
																									  0,0,1}});
	Matrix m(2);
	m.print();
}
