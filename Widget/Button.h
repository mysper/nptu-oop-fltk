#include "FLTK.h"
#ifdef FLTK
    #ifndef FLTK_BUTTON
    #define FLTK_BUTTON
// ==================== //
class Button : public Widget {
public:
	Button(Point p, int w, int h, std::string s, Callback cb)
		: Widget(p, w, h, s, cb) {}
	void attach(Window&);
	void hide();
	void show();
	void shortcut(int s);
	void activate();
	void deactivate();
private:
	Fl_Button* pw;

};
// ==================== //
    #endif
#endif

#ifdef FLTK_BUTTON

void Button::attach(Window &window) {
	pw = new Fl_Button(xy.x, xy.y, width, height, label.c_str());
	pw->callback(reinterpret_cast<Fl_Callback*>(do_it), &window);
	own = &window;
}
void Button::hide() { pw->hide(); }
void Button::show() { pw->show();}
void Button::shortcut(int s) { pw->shortcut(s); }
void Button::activate() { pw->activate(); }
void Button::deactivate() { pw->deactivate(); }
#endif