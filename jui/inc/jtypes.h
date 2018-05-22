#ifndef JTYPES_H
#define JTYPES_H
#include <cstdlib>

enum Colour
{
    GREY,
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
    MAGENTA,
    CYAN
};

typedef void (*callback)();

class Jbase;
struct contents;
typedef struct contents
{
    Jbase * element;
    struct contents * next;
}item;

#endif
