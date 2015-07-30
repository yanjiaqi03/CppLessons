//
//  main.cpp
//  L05SuperC
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace xiaohuai;

int main(int argc, const char * argv[]) {
    Man *m = new Man();
    delete m;
    
    m = new Man(20);
    printf("Man->age = %d\n",m->getAge());
    m->setAge(30);
    printf("Man->age = %d\n",m->getAge());
    
    
    delete m;
    
    return 0;
}
