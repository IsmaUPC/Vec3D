#include "prototype.h"
#include <stdio.h>
#include <iostream>



 int main(){

	
	 Vec3<float> vec0=  Vec3<float>(0,1,0);
	 for (size_t i = 0; i < 2; i++)
	 {
		if (vec0.IsZero()) {
		 std::cout << "es 0" << std::endl;
		 }
		 else {
			 std::cout << "No es 0" << std::endl;
		 }
		vec0.Zero();
	 }
	 
	 Vec3<float> vec1 = Vec3<float>(3.0f, 4.0f, 5.0f); 
	 Vec3<float> vec2 = Vec3<float>(4, 1, 0);
	 std::cout << "la distancia es"<< vec0.DistanceTo(vec1) << std::endl;
	 vec1.NormalizeVector();
	 std::cout << vec1.x << std::endl;
	 std::cout << vec1.y << std::endl;
	 std::cout << vec1.z << std::endl;

	 
	




	 return  0;
}