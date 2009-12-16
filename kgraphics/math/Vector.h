#pragma once 

#include "Math.h"

#include <d3dx9.h>

namespace gfx {

class Matrix;
class Vector4;

class Vector2 
{
public:
	Vector2();

	Vector2(float x, float y);

	Vector2(const Vector2& rhs);

	Vector2& operator=(const Vector2& rhs);

    D3DXVECTOR2* Get()
	{
		return &v_;
	}

	const D3DXVECTOR2* GetConst() const
	{
		return &v_;
	}

	/// p1�� �ڱ⿡ ���ؼ� �ڱ⸦ �����ش�.
	const Vector2& Add(const Vector2& p1);

	/// this x p�� �����ش�. ����. z���� �����ش�.
	float Cross(const Vector2& p);

	/// ����
	float Dot(const Vector2& p);

	/// ����
	float Length();

	/// ������ ������
	float LengthSq();

	/// ���� ���� ������������ �ٸ� ���͸� �����ش�.
	Vector2 Lerp(const Vector2& endPoint, float factor);

	/// �ִ밪��� �̷���� ����
	void Maximize(const Vector2& p);

	/// �ּҰ���� �̷���� ����
	void Minimize(const Vector2& p);

	/// ���� ���ͷ� ����
	void Normalize();

	/// Ȯ�� 
	void Scale(float s);

	/// ����
	void Subtract(const Vector2& p);

	/// �ڱ� (x, y, 0, 1)�� m���� ��ȯ�� ���
	Vector4 Transform(const Matrix& m);

	/// accessor
	float X() const;

	/// accessor
	float Y() const;

	void IncX( float delta ); 
	void IncY( float delta ); 

public:
	D3DXVECTOR2 v_;

};

class Vector3
{
public:
	Vector3();
	Vector3(float x, float y, float z);

	D3DXVECTOR3* Get()
	{
		return &v_;
	}

	const D3DXVECTOR3* GetConst() const
	{
		return &v_;
	}

	Vector3(const Vector3& rhs);

	Vector3& operator=(const Vector3& rhs);

	/// p1�� �ڱ⿡ ���ؼ� �ڱ⸦ �����ش�.
	const Vector3& Add(const Vector3& p1);

	/// this x p�� �����ش�. ����. z���� �����ش�.
	Vector3 Cross(const Vector3& p);

	/// ����
	float Dot(const Vector3& p);

	/// ����
	float Length();

	/// ������ ������
	float LengthSq();

	/// ���� ���� ������������ �ٸ� ���͸� �����ش�.
	Vector3 Lerp(const Vector3& endPoint, float factor);

	/// �ִ밪��� �̷���� ����
	void Maximize(const Vector3& p);

	/// �ּҰ���� �̷���� ����
	void Minimize(const Vector3& p);

	/// ���� ���ͷ� ����
	void Normalize();

	/// Ȯ�� 
	void Scale(float s);

	/// ����
	void Subtract(const Vector3& p);

	/// �ڱ� (x, y, z, 1)�� m���� ��ȯ�� ���
	Vector4 Transform(const Matrix& m);

	/// accessor
	float X() const;

	/// accessor
	float Y() const;

	/// accessor
	float Z() const;

	void IncX( float delta ); 
	void IncY( float delta ); 
	void IncZ( float delta ); 

public:
	D3DXVECTOR3 v_;
};

class Vector4
{
public:
	Vector4();
	Vector4(float x, float y, float z, float w);

	D3DXVECTOR4* Get()
	{
		return &v_;
	}

	const D3DXVECTOR4* GetConst() const
	{
		return &v_;
	}

	Vector4(const Vector4& rhs);

	Vector4& operator=(const Vector4& rhs);

	/// p1�� �ڱ⿡ ���ؼ� �ڱ⸦ �����ش�.
	const Vector4& Add(const Vector4& p1);

	/// 4���� ����. �ǹ̴� �����ΰ�?
	Vector4 Cross(const Vector4& p, const Vector4& p2);

	/// ����
	float Dot(const Vector4& p);

	/// ����
	float Length();

	/// ������ ������
	float LengthSq();

	/// ���� ���� ������������ �ٸ� ���͸� �����ش�.
	Vector4 Lerp(const Vector4& endPoint, float factor);

	/// �ִ밪��� �̷���� ����
	void Maximize(const Vector4& p);

	/// �ּҰ���� �̷���� ����
	void Minimize(const Vector4& p);

	/// ���� ���ͷ� ����
	void Normalize();

	/// Ȯ�� 
	void Scale(float s);

	/// ����
	void Subtract(const Vector4& p);

	/// �ڱ� (x, y, z, w)�� m���� ��ȯ�� ���
	Vector4 Transform(const Matrix& m);

	/// accessor
	float X() const;

	/// accessor
	float Y() const;

	/// accessor
	float Z() const;

	/// accessor
	float W() const;

	void IncX( float delta ); 
	void IncY( float delta ); 
	void IncZ( float delta ); 

public:
	D3DXVECTOR4 v_;
};

} // namespace gfx


