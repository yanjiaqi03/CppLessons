//
//  Man.cpp
//  L03Classes
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include "Man.h"

using namespace xiaohuai;

namespace xiaohuai {
    Man::Man(){
        
    }
    Man::Man(int age):People(age,1){
        
    }
    void Man::sayHello(){
        /*C++中，子类中可以直接用这种方式，调用父类方法，并且这个父类不只是上一级*/
        People::sayHello();
        printf("Man say:Hello CPP\n");
    }
}