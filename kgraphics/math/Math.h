#pragma once

namespace gfx
{
/** 
 * @class Math
 *
 * @brief ���� �Լ����� ���⿡ �д�. ���߿� ����ȭ ������ �ֱ����� �Ѱ��� ������. 
 */
class Math 
{
public:
	static const float PI;
	static const float EPSILON;

	static float RadianToDegree(float rad);
	static float DegreeToRadian(float deg);

	static float Sin(float rad);
	static float Cos(float rad);
	static float Tan(float rad);

	static float Sqrt(float f);
	static float Abs(float f);

private:
	static double invSqrt(double x);
};

} // namespace gfx

