#pragma once 

#include "Vector.h"

namespace gfx
{
class Matrix;

class Quaternion 
{
public:
	/// ���� ���ʹϾ�
	Quaternion();

	/// dir�� ������ angle��ŭ ȸ���ϴ� ���ʹϾ�
	Quaternion(const Vector3& dir, float angle);

	/// ȸ�� ��ķκ��� Quaternion ����
	Quaternion(const Matrix& m);

	/// x, y, z �� ȸ�� ������ ����
	Quaternion(float pitch, float yaw, float roll);

	/// ���� ������
	Quaternion(const Quaternion& rhs);

	/// �Ҵ� ������
	Quaternion& operator=(const Quaternion& rhs);

	D3DXQUATERNION* Get() 
	{
		return &q_;
	}

	const D3DXQUATERNION* GetConst() const
	{
		return &q_;
	}

	/// slerp using this as a starting rotation
	Quaternion Slerp(const Quaternion& maxRotation, float factor) const;

	/// this ���ϱ� q. ���� ȸ���ϰ� �ٽ� q��ŭ ȸ���� ���ʹϾ�
	Quaternion Multiply(const Quaternion& q) const;
	/// 
	void Inverse();		

	void Identity();

	void Normalize();

	bool IsIdentity() const;

	float Length() const;

	float LengthSq() const;

	float Dot(const Quaternion& q) const;

	Quaternion Conjugate() const;

	/// ���ʹϾ𿡼� ��� ȸ������ ������
	void GetAxisAngle(Vector3& dir, float& angle) const;

	float X() const;

	float Y() const;

	float Z() const;

	float W() const;

public:
	D3DXQUATERNION q_;
};

} // namespace gfx

