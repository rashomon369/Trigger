#pragma once

#include <iostream>
namespace trigger
{
	namespace math
	{

		struct vector4
		{

			float x, y, z, w;

			vector4();
			vector4(const float &x, const float &y, const float &z, const float &w);

			vector4& add(const vector4& other);
			vector4& subtract(const vector4& other);
			vector4& multiply(const vector4& other);
			vector4& divide(const vector4& other);

			friend vector4 operator+(vector4 left, const vector4 &right);
			friend vector4 operator-(vector4 left, const vector4 &right);
			friend vector4 operator*(vector4 left, const vector4 &right);
			friend vector4 operator/(vector4 left, const vector4 &right);

			friend const bool &operator==(const vector4 &left, const vector4 &right);
			bool operator!=(const vector4 &other);

			vector4& operator+=(const vector4 &other);
			vector4& operator-=(const vector4 &other);
			vector4& operator*=(const vector4 &other);
			vector4& operator/=(const vector4 &other);

			friend std::ostream &operator<<(std::ostream &stream, const vector4 &vector);


		};

		

}
}