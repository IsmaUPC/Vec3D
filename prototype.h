#ifndef _PROTOTYPE
#include <math.h>
 

template<typename Type>
class Vec3
{
public:
	// Members
	Type x, y, z;
	// Constructors
	Vec3() : x(0.0f), y(0.0f), z(0.0f) { }
	Vec3(Type px, Type py, Type pz) : x(px), y(py), z(pz) { }
	Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) { }
	// TODO: Member operators


	bool operator==(const Vec3 &vec)const {
		return (this->x == vec.x && this->y == vec.y && this->z == vec.z);
	};

	Vec3 operator+=( const Vec3& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
		return *this;
	};	
	Vec3 operator-=( const Vec3& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		return *this;
	};
	Vec3 operator=( const Vec3& vec) {
		
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		return *this;
	
	};
		Vec3 operator*( const Type num) {
			Vec3 newVec;
			newVec.x= this->x *num;
			newVec.y = this->y * num;
			newVec.z = this->z * num;
		return newVec;
	};
		Vec3 operator+( const Vec3 &vec1)const {
			Vec3 newVec;
			newVec.x = this->x + vec1.x;
			newVec.y = this->y + vec1.y;
			newVec.z = this->z + vec1.z;
		return newVec;
	};
				Vec3 operator-( const Vec3 &vec1)const {
			Vec3 newVec;
			newVec.x = this->x - vec1.x;
			newVec.y = this->y - vec1.y;
			newVec.z = this->z - vec1.z;
		return newVec;
	};
		

		float calModule( const Vec3 vec) const{
			return sqrt(pow(vec.x, 2) + pow(vec.y, 2) + pow(vec.z, 2));
		}
	void NormalizeVector() {
		 
		float modulo =calModule(*this);
		Vec3<float> newVec= Vec3(*this * (1/modulo));
		*this = newVec;


	};
	
	void Zero() {
		 *this=*this * 0;
	
	};

	bool IsZero()const{
		Vec3 vecTest = Vec3(0,0,0);
		return *this==vecTest;
	
	};
	 float DistanceTo(const Vec3 &vec1){
		 Vec3 sumaVect = Vec3(*this - vec1);
	 
		return calModule(sumaVect);

	};


	//Vec3 operator-( const Vec3 &vec2) {
	//	
	//	return Vec3((this.x - vec2.x), (this.y - vec2.y), (this.z - vec2.z)) ;
	//};
	//Vec3 operator+( const Vec3 &vec2) const {
	//	
	//	return Vec3((this.x + vec2.x), (this.y + vec2.y), (this.z + vec2.z)) ;
	//};

};


#endif // !_HEADER_MAIN
