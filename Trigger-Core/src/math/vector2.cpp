#include "vector2.h"

namespace trigger {
	namespace math
	{
		vector2::vector2()
		{
			x = 0;
			y = 0;

		}

		vector2::vector2(const float &x, const float &y)
		{
			this->x = x;
			this->y = y;
		}

		vector2 &vector2::add(const vector2 &other)
		{
			x += other.x;
			y += other.y;

			return *this;
		}

		vector2 &vector2::subtract(const vector2 &other)
		{
			x -= other.x;
			y -= other.y;

			return *this;
		}
		vector2 &vector2::multiply(const vector2 &other)
		{
			x *= other.x;
			y *= other.y;

			return *this;
		}
		vector2 &vector2::divide(const vector2 &other)
		{
			x /= other.x;
			y /= other.y;

			return *this;
		}

		std::ostream &operator<<(std::ostream& stream, const vector2 &vector)
		{
			stream << "Vector2: (" << vector.x << ", " << vector.y << ")";
			return stream;

		}

		vector2 &operator+(vector2 &left, const vector2 &right)
		{

			return left.add(right);
		}
		vector2 &operator-(vector2 &left, const vector2 &right)
		{

			return left.subtract(right);
		}
		vector2 &operator*(vector2 &left, const vector2 &right)
		{

			return left.multiply(right);
		}
		vector2 &operator/(vector2 &left, const vector2 &right)
		{

			return left.divide(right);
		}

	}
}