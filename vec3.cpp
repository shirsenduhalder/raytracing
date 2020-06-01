#include <cmath>
#include <iostream>

using std::sqrt;

class vec3
{
public:
	vec3(): e{1,1,1} {}
	vec3(double e0, double e1, double e2): e{e0, e1, e2}{}

	double x() const { return e[0]; }
	double y() const { return e[1]; }
	double z() const { return e[2]; }

	vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }
	double operator[](int i) const { return e[i]; }
	double& operator[](int i) { return e[i]; }

	vec3& operator+=(const vec3 &v){
		e[0] += v[0];
		e[1] += v[1];
		e[2] += v[2];

		return *this;
	}

public:
	double e[3];
};


int main()
{
	vec3 vec;
	vec3 add(2,2,2);
	vec3 add_vec = vec +=(add);
	std::cout << add_vec[0] << std::endl;
	std::cout << add[0] << std::endl;
}