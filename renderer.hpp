#pragma once

#include <SDL3/SDL.h>

bool initializeRenderer(int width, int height);
void clearRenderer(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
void drawPoint(float x, float y, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
void drawLine(
    float x1, float y1,
    float x2, float y2,
    Uint8 r, Uint8 g, Uint8 b, Uint8 a 
)
void presentRenderer();
void shutdownRenderer();