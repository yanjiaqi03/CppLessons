//
//  main.cpp
//  L03Classes
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "People.h"
#include "Man.h"

using namespace xiaohuai;

int main(int argc, const char * argv[]) {
//    People *p = new People();
//    printf("people age = %d\n",p->getAge());
//    p->setAge(10);
//    printf("people age = %d\n",p->getAge());
//    delete p;
    
//    People *p = new People(15);
//    printf("people age = %d\n",p->getAge());
//    delete p;
    
    Man *m = new Man();
    printf("Man age = %d\n",m->getAge());
    
    
    return 0;
}
