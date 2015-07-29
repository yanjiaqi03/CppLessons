//
//  main.cpp
//  L02NS
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace xiaohuai;
int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}
