#ifndef HALDRAW
#define HALDRAW

#include "jtypes.h"
//type - enum form this?
void haldraw_rect(int x, int y, int w, int l, Colour bg);
void haldraw_text(int x, int y, Colour fb, char *text);
#endif
