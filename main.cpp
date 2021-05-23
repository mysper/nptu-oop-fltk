#include "FLTK.h"
#include "Connect.h"

int main(int argc, char **argv) {
    Connect* win = new Connect();
    return Fl::run();
}