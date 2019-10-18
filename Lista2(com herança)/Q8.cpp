#include "Q8.h"

using namespace std;

Point2d::Point2d(){
    m_x=0;
    m_y=0;
}

Point2d::Point2d(float x,float y){
    m_x=x;
    m_y=y;
}

void Point2d::print(){
    cout<<"Point2d"<<"("<<m_x<<","<<m_y<<")"<<endl;
    
}

float Point2d::distancia(Point2d fim){
    return sqrt((m_x-fim.m_x)*(m_x-fim.m_x)+(m_y-fim.m_y)*(m_y-fim.m_y));
}