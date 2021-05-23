#include "FLTK.h"
#ifdef FLTK
    #ifndef MAIN_CONNECT
    #define MAIN_CONNECT

class Connect: public Window {
public:
    Connect();
private:
    Button btn;

    static void cb_test(void*,void*);
};

    #endif
#endif

#ifdef MAIN_CONNECT

Connect::Connect():
    Window(600,400,"Connection"),
    btn(Button(Point(0,0),100,25,"button",cb_test)) {
    
    attach(btn);

    show();
}

void Connect::cb_test(void*,void*) {
    std::cout<<0<<std::endl;
}

#endif