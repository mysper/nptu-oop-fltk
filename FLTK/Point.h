#include "FLTK.h"
#ifdef FLTK
    #ifndef FLTK_Point
    #define FLTK_Point
// ==================== //
class Point {
public:
	Point (int xx,int yy):
		x(xx),y(yy) {
	}
    int getX() const { return x; }
    int getY() const { return y; }
	int x,y;
};
// ==================== //
    #endif
#endif