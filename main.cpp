#include "Window.h"

int main(int argc, char **argv) {
    Window* win = new Window(600,400,"Connection");
    win -> show();
    return Fl::run();
}