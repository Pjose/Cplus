#include <iostream>
#include <string>

using namespace std;

struct Vector2  //public visibility by default
{
	float x, y;
	
	Vector2(float x, float y)
		: x(x), y(y) {}
	/** passed as const reference to avoid copying and marked as const because 
	  * it's not going to modify the class
	  */
	Vector2 add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
	
	Vector2 operator+(const Vector2& other) const
	{
		return add(other);
	}
	
	Vector2 multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
	
	Vector2 operator*(const Vector2& other) const
	{
		return multiply(other);
	}
	
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}
};

ostream& operator<<(ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}

int main() 
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerUp(1.1f, 1.1f);
	
	Vector2 result1 = position.add(speed.multiply(powerUp));
	Vector2 result2 = position + speed * powerUp;
	
	if( result1 == result2)
	{
		
	}
	cout << result2 << endl;
	
	return 0;
}
