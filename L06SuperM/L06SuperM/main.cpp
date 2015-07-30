//
//  main.cpp
//  L06SuperM
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace xiaohuai;

int main(int argc, const char * argv[]) {
    Man *m = new Man();
    m->sayHello();
    /*直接通过子类调用父类的方法*/
    m->People::sayHello();
    delete m;
    return 0;
}
