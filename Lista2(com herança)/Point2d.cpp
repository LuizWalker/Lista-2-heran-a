#include "Point2d.h"

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

