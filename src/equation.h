#ifndef UI_H
#define UI_H
#include "raylib.h"

typedef struct Equation{
    char *label;
    Color col;
    char *type;
    bool show;
    int a;
    int b;
    int c;
    int d;
} Equation;

#endif