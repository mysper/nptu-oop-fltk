#include "FLTK.h"
#ifdef FLTK
    #ifndef FLTK_WIDGET
    #define FLTK_WIDGET
// ==================== //
typedef void (*Callback)(void*,void*);
class Widget {
public:
	Widget(Point p, int w, int h, std::string s, Callback cb)
		: xy(p), width(w), height(h), label(s), do_it(cb) {}
	virtual void attach(Window&) = 0;
protected:	
	int width, height;
	std::string label;
	Point xy;
	Callback do_it;
	Window *own;
};
// ==================== //
    #endif
#endif
