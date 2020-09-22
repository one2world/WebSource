#include "vector.h"

#pragma region ���캯��

Vector3::Vector3() :x(0.0f), y(0.0f), z(0.0f) {}

Vector3::Vector3(const Vector3& a) :x(a.x), y(a.y), z(a.z) {}

Vector3::Vector3(float x) : x(x), y(0.0f), z(0.0f) {}

Vector3::Vector3(float x, float y) : x(x), y(y), z(0.0f) {}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

#pragma endregion


Vector3& Vector3::operator=(const Vector3& a)
{
	this->x = a.x;
	this->y = a.y;
	this->z = a.z;
	return *this;
}

bool Vector3::operator==(const Vector3& a) const
{
	return this->x == a.x && this->y == a.y && this->z == a.z;
}

bool Vector3::operator!=(const Vector3& a) const
{
	return this->x != a.x || this->y != a.y || this->z != a.z;
}


Vector3 Vector3::operator-() const
{
	return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator+(const Vector3& a)
{
	return Vector3(a.x + x, a.y + y, a.z + z);
}

Vector3 Vector3::operator-(const Vector3& a)
{
	return Vector3(a.x - x, a.y - y, a.z - z);
}

Vector3 Vector3::operator*(float a)
{
	return Vector3(x * a, y * a, z * a);
}

Vector3 Vector3::operator/(float a)
{
	float oneOverA = 1.0f / a; //��a ��0 ��顣
	return Vector3(x * oneOverA, y * oneOverA, z * oneOverA);
}

Vector3& Vector3::operator+=(const Vector3& a)
{
	this->x += a.x;
	this->y += a.y;
	this->z += a.z;
	return *this;
}

Vector3& Vector3::operator-=(const Vector3& a)
{
	this->x -= a.x;
	this->y -= a.y;
	this->z -= a.z;
	return *this;
}

Vector3& Vector3::operator*=(float a)
{
	this->x *= a;
	this->y *= a;
	this->z *= a;
	return *this;
}

Vector3& Vector3::operator/=(float a)
{
	float oneOverA = 1.0f / a; //��a ��0 ��顣

	this->x *= oneOverA;
	this->y *= oneOverA;
	this->z *= oneOverA;
	return *this;
}




float Vector3::operator*(const Vector3& a) const
{
	return x*a.x + y*a.y + z* a.z;
}

void Vector3::zero()
{
	x = y = z = 0.0f;
}

/* ��Ч�㷨��˼·
1. x,y,z���� 3���Ƕ� + һ������,
2. �Ƕȵ�����ֵ ���泣�������ֵ��
3. ����ʹ�ò����
*/
void Vector3::normalize()
{
	float magSq = x * x + y * y + z * z;
	if (magSq > 0.0)
	{
		float oneOverMag = 1.0f / sqrt( magSq); //��a ��0 ��顣

		this->x *= oneOverMag;
		this->y *= oneOverMag;
		this->z *= oneOverMag;
	}
}
Vector3::~Vector3()
{
}