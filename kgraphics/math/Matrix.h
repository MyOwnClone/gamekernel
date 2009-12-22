#pragma once 

#include <kgraphics/math/Euler.h>
#include <kgraphics/math/Vector.h>

namespace gfx {
/** 
 * @class Matrix 
 *
 * @brief ����� �⺻ ����� ���´�.
 */
class Matrix 
{
public:
	/// ���� ��ķ� ��� ����
	explicit Matrix();

	/// ȸ�� ����� ��� ����. �⺻��
	explicit Matrix(const Euler& e);
	
	/// angle �� ��ŭ dir�� ������ ȸ���� ���
	Matrix(const Vector3& dir, float angle);

	D3DXMATRIX* Get()
	{
		return &m_;
	}

	const D3DXMATRIX* GetConst() const
	{
		return &m_;
	}

	/// ������ķ� �ʱ�ȭ
	void Identity();

	/// ��Ľ� ��
	float Determinent();

	/// �����. ������� ������ �ƹ� ������ ����.
	void Inverse();

	/// ��ġ ���
	void Transpose();

	/// ��� ���ϱ�. ��� ���� r�� ����		 
	void Multiply( const Matrix& m, Matrix& r );

	/// �̵�. v ��ŭ �̵��Ѵ�. �������� �ʴ´�.
	void Translate(const Vector3& v);

	/// Ȯ��. p�� ���� x, y, z ���� Ȯ��� ���
	void Scale(const Vector3& p);

	/// ���� ���� Ȯ��
	void Scale(const float f);

	/// X �� ȸ������ �ʱ�ȭ�Ѵ�.
	void RotateX(float angle);

	/// Y �� ȸ������ �ʱ�ȭ�Ѵ�.
	void RotateY(float angle);

	/// Z �� ȸ������ �ʱ�ȭ�Ѵ�.
	void RotateZ(float angle);

	/// ī�޶� ����
	void LookAtLH(const Vector3& eye, const Vector3& lookAt, const Vector3& up);

	/// ���������� ����
	void PerspectiveFovLH(float angle, float aspect, float nz, float fz);

	void OrthoLH( float width, float height, float nz, float fz );

public:
	D3DXMATRIX m_;
};

} // namespace gfx


