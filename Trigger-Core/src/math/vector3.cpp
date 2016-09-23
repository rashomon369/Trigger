#include "vector3.h"

namespace trigger {
	namespace math
	{
		vector3::vector3()
		{
			x = 0;
			y = 0;
			z = 0;

		}

		vector3::vector3(const float &x, const float &y, const float &z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		vector3 &vector3::add(const vector3 &other)
		{
			x += other.x;
			y += other.y;
			z += other.z;

			return *this;
		}

		vector3 &vector3::subtract(const vector3 &other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;

			return *this;
		}
		vector3 &vector3::multiply(const vector3 &other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;

			return *this;
		}
		vector3 &vector3::divide(const vector3 &other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;

			return *this;
		}

		std::ostream &operator<<(std::ostream& stream, const vector3 &vector)
		{
			stream << "vector3: (" << vector.x << ", " << vector.y << ", "<< vector.z <<")";
			return stream;

		}

		vector3 operator+(vector3 left, const vector3 &right)
		{

			return left.add(right);
		}
		vector3 operator-(vector3 left, const vector3 &right)
		{

			return left.subtract(right);
		}
		vector3 operator*(vector3 left, const vector3 &right)
		{

			return left.multiply(right);
		}
		vector3 operator/(vector3 left, const vector3 &right)
		{

			return left.divide(right);
		}

		vector3 &vector3::operator+=(const vector3 &other)
		{
			
			return add(other);
		}
		vector3 &vector3::operator-=(const vector3 &other)
		{
			return subtract(other);
		}
		vector3 &vector3::operator*=(const vector3 &other)
		{
			return multiply(other);
		}
		vector3 &vector3::operator/=(const vector3 &other)
		{
			return divide(other);
		}

		bool const &operator==(const vector3 &left, const vector3 &right)
		{
			if (left.x == right.x && left.y == right.y && left.z == right.z)
			{
				return true;
			}
			else
				return false;
		}

		bool vector3::operator!=(const vector3 &other)
		{
			return !(x == other.x && y == other.y && z == other.z);
		}

		

	}
}