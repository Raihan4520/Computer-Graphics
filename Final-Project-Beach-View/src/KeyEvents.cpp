#include "KeyEvents.h"

float KeyEvents::boatPos = 0.0, KeyEvents::boatPos2 = -5.0;
bool KeyEvents::moveCar = true;
bool KeyEvents::carLight = false;
bool KeyEvents::rain = false;
bool KeyEvents::moveVolleyBall = true;
char KeyEvents::skyColor = 'm', KeyEvents::roomWindow = 'p';

KeyEvents::KeyEvents()
{
    //ctor
}

void KeyEvents::key(unsigned char key, int x, int y)
{
    switch(key)
    {
        // Escape key to close full screen
        case 27:
            exit(0);
            break;

        // To move boat right
        case 'd':
            if(KeyEvents::boatPos > 20)
                KeyEvents::boatPos = -20.0;
            else
                KeyEvents::boatPos += 0.1;
            break;

        // To move boat left
        case 'a':
            if(KeyEvents::boatPos < -20)
                KeyEvents::boatPos = 20.0;
            else
                KeyEvents::boatPos -= 0.1;
            break;


        // To move boat2 right
        case 'e':
            if(KeyEvents::boatPos2 > 20)
                KeyEvents::boatPos2 = -20.0;
            else
                KeyEvents::boatPos2 += 0.1;
            break;

        // To move boat2 left
        case 'q':
            if(KeyEvents::boatPos2 < -20)
                KeyEvents::boatPos2 = 20.0;
            else
                KeyEvents::boatPos2 -= 0.1;
            break;




        // To move/stop car
        case 'c':
            if(KeyEvents::moveCar)
                KeyEvents::moveCar = false;
            else
                KeyEvents::moveCar = true;
            break;
        case 'l':
            if(! KeyEvents::carLight)
            {
                KeyEvents::carLight = true;
            }else
            {
                KeyEvents::carLight = false;
            }
            break;
        // To throw volley ball
        case 'v':
            if(!KeyEvents::moveVolleyBall)
                KeyEvents::moveVolleyBall = true;
            break;
        case 'n':
            KeyEvents::skyColor = 'n';
            break;
        case 'm':
            KeyEvents::skyColor = 'm';
            break;
        case 'k':
            KeyEvents::roomWindow = 'k';
            break;
        case 'p':
            KeyEvents::roomWindow = 'p';
            break;
        // rain
        case 'r':
            if(KeyEvents::rain)
                KeyEvents::rain = false;
            else
                KeyEvents::rain = true;
            break;

    }
    glutPostRedisplay();
}
