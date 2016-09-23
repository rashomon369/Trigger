#pragma once

#include <iostream>
namespace trigger
{
	namespace math
	{

		struct vector3
		{

			float x, y, z;

			vector3();
			vector3(const float &x, const float &y, const float &z);

			vector3& add(const vector3& other);
			vector3& subtract(const vector3& other);
			vector3& multiply(const vector3& other);
			vector3& divide(const vector3& other);

			friend vector3 operator+(vector3 left, const vector3 &right);
			friend vector3 operator-(vector3 left, const vector3 &right);
			friend vector3 operator*(vector3 left, const vector3 &right);
			friend vector3 operator/(vector3 left, const vector3 &right);

			friend const bool &operator==(const vector3 &left, const vector3 &right);
			bool operator!=(const vector3 &other);

			vector3& operator+=(const vector3 &other);
			vector3& operator-=(const vector3 &other);
			vector3& operator*=(const vector3 &other);
			vector3& operator/=(const vector3 &other);

			friend std::ostream &operator<<(std::ostream &stream, const vector3 &vector);


		};

		

}
}