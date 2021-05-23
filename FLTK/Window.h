#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>

#include <string>

#ifndef FLTK_WINDOW
#define FLTK_WINDOW

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
};

#endif