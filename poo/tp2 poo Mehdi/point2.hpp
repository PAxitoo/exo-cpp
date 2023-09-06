#ifndef __POINT2_H__
#define __POINT2_H__
#include <iostream>

class point2_t{
    float x;
    float y;
    public:
        point2_t(float px, float py);
        void afficherPoint();
        void rotate();
        void translate(point2_t a);
        void setX(int x);
        void setY(int y);
        point2_t barycentre(point2_t a);
    };

#endif // __POINT2_H__