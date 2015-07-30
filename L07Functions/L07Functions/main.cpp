//
//  main.cpp
//  L07Functions
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace xiaohuai;

int main(int argc, const char * argv[]) {
    People *p = new Man();
    /*在java中，应该是执行实例，也就是Man的sayHello*/
    /*在C++中,子类的sayHello其实并没有重写父类的sayHello,如果需要重写,需要在子类和父类的sayHello前定义为virtual(虚函数)*/
    p->sayHello();
    
    /*纯虚函数,相当于java中的抽象方法和接口中定义的方法*/
    p->eat();
    
    return 0;
}
