//
//  main.cpp
//  L10Operator
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x,y;
    
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return this->x;
    }
   
    int getY(){
        return this->y;
    }
    
    void add(Point p){
        add(p.getX(), p.getY());
    }
    
    void add(int x,int y){
        this->x+=x;
        this->y+=y;
    }
    
    /*运算符重载*/
    void operator+=(Point p){
        add(p);
    }
    
};
int main(int argc, const char * argv[]) {
    /*
    Point p(10,10);
    p+=Point(12,12);
    std::cout<<"x = "<<p.getX()<<",y = "<<p.getY()<<"\n";
     */
    
    /*使用指针的运算符重载*/
    Point *p = new Point(5,5);
    (*p)+=Point(3,3);
    std::cout<<"x = "<<p->getX()<<",y = "<<p->getY()<<"\n";
    
    return 0;
}
