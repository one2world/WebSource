#ifndef __VECTOR3__H
#define __VECTOR3__H
#include <math.h>

//float 精度， 24位小数。
class Vector3
{
public:
	float x, y, z;
#pragma region 构造函数
	Vector3();
	Vector3(const Vector3&);
	Vector3(float x);
	Vector3(float x, float y);
	Vector3(float x, float y, float z);
#pragma endregion

#pragma region 运算符重载

	Vector3& operator =(const Vector3&);
	bool operator ==(const Vector3&) const;//后const 限制仅用class内部
	bool operator !=(const Vector3&) const;

	//取反
	Vector3 operator -() const;

	Vector3 operator  +(const Vector3&);
	Vector3 operator  -(const Vector3&);
	Vector3 operator  *(float);
	Vector3 operator  /(float);

	Vector3& operator  +=(const Vector3&);
	Vector3& operator  -=(const Vector3&);
	Vector3& operator  *=(float);
	Vector3& operator  /=(float);

	//点乘
	float operator  *(const Vector3&)const;

#pragma endregion

#pragma region 方法
	void zero();
	void normalize();

#pragma endregion

	~Vector3();
private:

};

#pragma region 全局
extern const Vector3 kZeroVector;

#pragma endregion

inline Vector3 operator  *(float k, const Vector3& v)
{
	return Vector3(k* v.x, k * v.y, k * v.z);
}
inline float magnitude(const Vector3& a)
{
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}


inline Vector3 Cross(const Vector3& a, const Vector3& b)
{
	return Vector3(
		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - b.x * a.y
	);
}

inline float distance(const Vector3& a, const Vector3& b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}


#endif // !__VECTOR3__H
