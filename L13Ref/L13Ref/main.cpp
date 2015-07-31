//
//  main.cpp
//  L13Ref
//
//  Created by yan on 15/7/31.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

class Point{
private:
    int x,y;
public:
    Point(int x,int y){
        this->x = x;
        this->y =y;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    /*&p 代表引用，这样没有内存复制，节约时间，Point p 这种方式会先进行内存复制*/
    /*&p 的好处(*p 也可以)
     p1 = 0x7fff5fbff820
     p = 0x7fff5fbff820
     */
    void add(Point &p){
        //*p
//        std::cout<<"p = "<<p<<"\n";
//        this->x+=p->x;
//        this->y+=p->y;
        //&p
        std::cout<<"p = "<<&p<<"\n";
        this->x+=p.x;
        this->y+=p.y;
    }
};


int main(int argc, const char * argv[]) {
    Point *p = new Point(1,1);
    Point p1(2,3);
    std::cout<<"p1 = "<<&p1<<"\n";
    p->add(p1);
    
    std::cout<<"x = "<<p->getX()<<",y = "<<p->getY()<<"\n";
    
    delete p;
    
    return 0;
}
