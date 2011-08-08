#pragma once

#include <kgraphics/math/Writer.h>
#include <kgraphics/math/Vector2.h>
#include <kgraphics/math/math.h>

namespace gfx {

/**
 * @class Rect
 *
 * �ܼ��� �簢�� Ŭ���� 
 *
 * �Ϲ� ������ ��ǥ��� ���� ���� �ϴ��� ���� ������� ���� ���
 *              (x1, y1)
 *   +---------+
 *   |         |
 *   |         |
 *   +---------+
 * (x0, y0)
 */
class Rect 
{
public:
    // constructor/destructor
    Rect();
    Rect( float x0, float y0, float x1, float y1 );
    inline ~Rect() {}
    
    // copy operations
    Rect(const Rect& rhs );
    Rect& operator=(const Rect& rhs);

    // manipulators
    void Set( float x0, float y0, float x1, float y1 );
    void Set( const Vector2& p0, const Vector2& p1 );

    inline float Test( float x, float y ) const
    {
        return x0 <= x && x <= x1 && y0 <= y && y <= y1;
    }
        
public:
	float x0;
	float y0;
	float x1;
	float y1;
};

} // namespace gfx 
