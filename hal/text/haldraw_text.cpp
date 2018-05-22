#include "haldraw.h"
#include <iostream>
using namespace std;


void haldraw_rect(int x, int y, int w, int l, Colour bg)
{
         std::cout << " at " << x << ", " << y << std::endl;
}
// TODO prob need w and l as well for positioning
void haldraw_text(int x, int y, Colour fb, char *text)
{
    cout << text << std::endl;
}
