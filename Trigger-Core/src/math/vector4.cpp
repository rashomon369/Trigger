#include "vector4.h"

namespace trigger {
	namespace math
	{
		vector4::vector4()
		{
			x = 0;
			y = 0;
			z = 0;
			w = 0;

		}

		vector4::vector4(const float &x, const float &y, const float &z, const float &w)
		{
			this->x = x;
			this->y = y;
			this->z = z;
			this->w = w;
		}

		vector4 &vector4::add(const vector4 &other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			w += other.w;

			return *this;
		}

		vector4 &vector4::subtract(const vector4 &other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			w -= other.w;

			return *this;
		}
		vector4 &vector4::multiply(const vector4 &other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;
			w *= other.w;

			return *this;
		}
		vector4 &vector4::divide(const vector4 &other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;
			w /= other.w;

			return *this;
		}

		std::ostream &operator<<(std::ostream& stream, const vector4 &vector)
		{
			stream << "vector4: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
			return stream;

		}

		vector4 operator+(vector4 left, const vector4 &right)
		{

			return left.add(right);
		}
		vector4 operator-(vector4 left, const vector4 &right)
		{

			return left.subtract(right);
		}
		vector4 operator*(vector4 left, const vector4 &right)
		{

			return left.multiply(right);
		}
		vector4 operator/(vector4 left, const vector4 &right)
		{

			return left.divide(right);
		}

		vector4 &vector4::operator+=(const vector4 &other)
		{
			
			return add(other);
		}
		vector4 &vector4::operator-=(const vector4 &other)
		{
			return subtract(other);
		}
		vector4 &vector4::operator*=(const vector4 &other)
		{
			return multiply(other);
		}
		vector4 &vector4::operator/=(const vector4 &other)
		{
			return divide(other);
		}

		bool const &operator==(const vector4 &left, const vector4 &right)
		{
			if (left.x == right.x && left.y == right.y && left.z == right.z && left.w == right.w)
			{
				return true;
			}
			else
				return false;
		}

		bool vector4::operator!=(const vector4 &other)
		{
			return !(x == other.x && y == other.y && z == other.z && w == other.w);
		}

		

	}
}