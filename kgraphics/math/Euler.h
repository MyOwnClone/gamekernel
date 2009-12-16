#pragma once 

#include "Math.h"

namespace gfx {
/** 
 * @class Euler
 * 
 * @brief Euler angles wrapper
 *
 */
class Euler
{
public:
	Euler() 
		: pitch_(0), yaw_(0), roll_(0)
	{
	}

    Euler( float pitch, float yaw, float roll );

	float GetPitch() const;
	float GetYaw() const;
	float GetRoll() const;				

	void SetPitch(float deg);
	void SetYaw(float deg);
	void SetRoll(float deg);	

	void UpdatePitch( float delta );
	void UpdateYaw( float delta );
	void UpdateRoll( float delta );
	
private:
	float pitch_;		// x ���� �������� �� ȸ����
	float yaw_;			// y ���� �������� �� ȸ����
	float roll_;		// z ���� �������� �� ȸ���� (������ z�� �������� ���� �ִ�)		
};

inline
Euler::Euler( float pitch, float yaw, float roll )
{
    pitch_ = pitch;
    yaw_   = yaw;
    roll_  = roll;
}

inline 
float 
Euler::GetPitch() const 
{
	return pitch_;
}

inline 
float 
Euler::GetYaw() const 
{
	return yaw_;
}

inline 
float 
Euler::GetRoll() const 
{
	return roll_;
}

inline 
void 
Euler::SetPitch(float deg)
{
	pitch_ = Math::DegreeToRadian(deg);
}

inline 
void 
Euler::SetYaw(float deg)
{
	yaw_ = Math::DegreeToRadian(deg);
}

inline 
void 
Euler::SetRoll(float deg)
{
	roll_ = Math::DegreeToRadian(deg);
}

inline
void 
Euler::UpdatePitch( float delta )
{
	pitch_ += Math::DegreeToRadian( delta );
}

inline
void 
Euler::UpdateYaw( float delta )
{
	yaw_ += Math::DegreeToRadian( delta );
}

inline
void 
Euler::UpdateRoll( float delta )
{
	roll_ += Math::DegreeToRadian( delta );
}

} // namespace gfx