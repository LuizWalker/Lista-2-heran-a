#include <iostream>
#include <math.h>


using namespace std;

class Point2d{
     
     public:

     float m_x;
     float m_y;
     

     Point2d();
     Point2d(float x,float y);

     void print();
    float distancia(Point2d fim);

};