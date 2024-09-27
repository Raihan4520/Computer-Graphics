#include "Shapes.h"

Shapes::Shapes()
{
    //ctor
}

void Shapes::horizontal_long_line(float y_axis)
{
    glBegin(GL_LINES);
    glVertex3f(-100.5, y_axis, 0.0);
    glVertex3f(100.5, y_axis, 0.0);
    glEnd();
}

void Shapes::lined_quad(float max_x_axis, float max_y_axis)
    {
        //Square with lines
        glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(max_x_axis, 0.0, 0.0);
        glVertex3f(max_x_axis, max_y_axis, 0.0);
        glVertex3f(0.0, max_y_axis, 0.0);
        glEnd();
    }

void Shapes::filled_quad(float max_x_axis, float max_y_axis)
    {
        //Square with lines
        glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(max_x_axis, 0.0, 0.0);
        glVertex3f(max_x_axis, max_y_axis, 0.0);
        glVertex3f(0.0, max_y_axis, 0.0);
        glEnd();
    }

void Shapes::straightLine(float x, float y)
{
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(x, y, 0.0);
    glEnd();
}

void Shapes::dashed_circle(float r)
{
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex3f(x, y, 0.0);
	}
	glEnd();
}

void Shapes::filled_circle(float r)
{
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex3f(x, y, 0.0);
	}
	glEnd();
}

void Shapes::dashed_halfCircle(float r)
{
	glBegin(GL_LINES);
	for(int i=0;i<=50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex3f(x, y, 0.0);
	}
	glEnd();
}

void Shapes::filled_halfCircle(float r)
{
	glBegin(GL_POLYGON);
	for(int i=0;i<=50;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex3f(x, y, 0.0);
	}
	glEnd();
}

//Clouds
void Shapes::showCloud(float cloudPos, float y)
{
    glPushMatrix();
    Shapes cloud1;
    glTranslatef(cloudPos, y, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    cloud1.filled_circle(0.3);
    glTranslatef(-0.3, 0.0, 0.0);
    cloud1.filled_circle(0.2);
    glTranslatef(0.6, 0.0, 0.0);
    cloud1.filled_circle(0.2);
    glPopMatrix();
}

// Birds
void Shapes::showBirds(float birdPos)
{
        glPushMatrix();
        glTranslatef(birdPos, 2.0, 0.0);
        glColor3f(0.1, 0.1, 0.1);
        dashed_halfCircle(0.05);
        glTranslatef(0.1, 0.0, 0.0);
        dashed_halfCircle(0.05);
        glPopMatrix();
}

// Boats
void Shapes::showBoat(float boatPos, float y)
{
    glPushMatrix();
    glScalef(0.3, 0.2, 1.0);
    //glTranslatef(KeyEvents::boatPos, 6.0, 0.0);
     glTranslatef(boatPos, y, 0.0);
    glPushMatrix();
    // base
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(2.0, 1.0, 0.0);
    glVertex3f(-2.0, 1.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    // Light
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.6, 1.2, 0.0);
    glVertex3f(0.4, 1.2, 0.0);
    glVertex3f(0.4, 1.4, 0.0);
    glVertex3f(0.6, 1.4, 0.0);
    glEnd();
    glPopMatrix();
    // Light
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-0.6, 1.2, 0.0);
    glVertex3f(-0.4, 1.2, 0.0);
    glVertex3f(-0.4, 1.4, 0.0);
    glVertex3f(-0.6, 1.4, 0.0);
    glEnd();
    glPopMatrix();
    // Top
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.698, 0.133, 0.133);
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 2.0, 0.0);
    glVertex3f(-1.0, 2.0, 0.0);
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

// Sun and moon
void Shapes::showSunMoon(float red, float green, float blue, float r)
{
    glPushMatrix();
        glColor3f(red, green, blue);
        glTranslatef(-4.0, 2.5, 0.0);
        filled_circle(r);
    glPopMatrix();
}
