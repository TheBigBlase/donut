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
	
	Matrix O({std::array<std::array<double, 3>,3> {0,0,0,
																								 0,0,0,
																								 0,0,0}});

	Matrix I({std::array<std::array<double, 3>,3> {1,0,0,
																								 0,1,0,
																								 0,0,1}});
	Matrix C(2);

	std::cout << "O is : \n";
	O.print();
	std::cout <<"O + I is : \n";
	(O+I).print();
	std::cout << "I * I is : \n";
	(I*I).print();
	std::cout << "O * I is : \n";
	(O*I).print();
}
