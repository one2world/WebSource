#include "vector.h"

#pragma region 构造函数

lmath::Vector3::Vector3():x(0.0f), y(0.0f), z(0.0f) {}

lmath::Vector3::Vector3(const lmath::Vector3& a) :x(a.x), y(a.y), z(a.z) {}

lmath::Vector3::Vector3(float x) : x(x), y(0.0f), z(0.0f) {}

lmath::Vector3::Vector3(float x, float y) : x(x), y(y), z(0.0f) {}

lmath::Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

#pragma endregion


lmath::Vector3& lmath::Vector3::operator=(const lmath::Vector3& a)
{
	this->x = a.x;
	this->y = a.y;
	this->z = a.z;
	return *this;
}

bool lmath::Vector3::operator==(const lmath::Vector3& a) const
{
	return this->x == a.x && this->y == a.y && this->z == a.z;
}

bool lmath::Vector3::operator!=(const lmath::Vector3& a) const
{
	return this->x != a.x || this->y != a.y || this->z != a.z;
}


lmath::Vector3 lmath::Vector3::operator-() const
{
	return lmath::Vector3(-x, -y, -z);
}

lmath::Vector3 lmath::Vector3::operator+(const lmath::Vector3& a)
{
	return lmath::Vector3(a.x + x, a.y + y, a.z + z);
}

lmath::Vector3 lmath::Vector3::operator-(const lmath::Vector3& a)
{
	return Vector3(a.x - x, a.y - y, a.z - z);
}

lmath::Vector3 lmath::Vector3::operator*(float a)
{
	return Vector3(x * a, y * a, z * a);
}

lmath::Vector3 lmath::Vector3::operator/(float a)
{
	float oneOverA = 1.0f / a; //对a 非0 检查。
	return lmath::Vector3(x * oneOverA, y * oneOverA, z * oneOverA);
}

lmath::Vector3& lmath::Vector3::operator+=(const lmath::Vector3& a)
{
	this->x += a.x;
	this->y += a.y;
	this->z += a.z;
	return *this;
}

lmath::Vector3& lmath::Vector3::operator-=(const lmath::Vector3& a)
{
	this->x -= a.x;
	this->y -= a.y;
	this->z -= a.z;
	return *this;
}

lmath::Vector3& lmath::Vector3::operator*=(float a)
{
	this->x *= a;
	this->y *= a;
	this->z *= a;
	return *this;
}

lmath::Vector3& lmath::Vector3::operator/=(float a)
{
	float oneOverA = 1.0f / a; //对a 非0 检查。

	this->x *= oneOverA;
	this->y *= oneOverA;
	this->z *= oneOverA;
	return *this;
}




float lmath::Vector3::operator*(const lmath::Vector3& a) const
{
	return x*a.x + y*a.y + z* a.z;
}

void lmath::Vector3::zero()
{
	x = y = z = 0.0f;
}

/* 高效算法：思路
1. x,y,z换成 3个角度 + 一个长度,
2. 角度的三角值 储存常用三角字典表
3. 计算使用查表法
*/
void lmath::Vector3::normalize()
{
	float magSq = x * x + y * y + z * z;
	if (magSq > 0.0)
	{
		float oneOverMag = 1.0f / sqrt( magSq); //对a 非0 检查。

		this->x *= oneOverMag;
		this->y *= oneOverMag;
		this->z *= oneOverMag;
	}
}
lmath::Vector3::~Vector3()
{
}
