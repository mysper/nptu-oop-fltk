#include "FLTK.h"
#ifdef FLTK
    #ifndef FLTK_WINDOW
    #define FLTK_WINDOW
// ==================== //
class Window: public Fl_Window {
public:
    Window(int w,int h,const std::string& label):
        Fl_Window(w,h,label.c_str()) {

    }
    #ifdef FLTK_POINT
    Window(Point xy,int w,int h,const std::string& label):
        Fl_Window(xy.getX(),xy.getY(),w,h,label.c_str()) {

    }
    #endif
	void attach (Widget& w) {
		begin();
		w.attach(*this);
		end();
	}
	int getWidth() const {return width;}
	int getHeight() const {return height;}
	void setLabel(const std::string& s) {label(s.c_str());}
private:
	int width,height;
};
// ==================== //
    #endif
#endif