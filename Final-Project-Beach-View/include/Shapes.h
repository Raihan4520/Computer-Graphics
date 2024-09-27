#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include<GL/gl.h>
#include <GL/glut.h>


class Shapes
{
    public:
        Shapes();
        void horizontal_long_line(float y_axis);
        void lined_quad(float max_x_axis, float max_y_axis);
        void filled_quad(float max_x_axis, float max_y_axis);
        void straightLine(float x, float y);
        void dashed_circle(float r);
        void filled_circle(float r);
        void dashed_halfCircle(float r);
        void filled_halfCircle(float r);
        void showCloud(float cloudPos, float y);
        void showBirds(float birdPos);
        void showBoat(float boatPos, float y);
        void showSunMoon(float red, float green, float blue, float r);
};

#endif // LINES_H
