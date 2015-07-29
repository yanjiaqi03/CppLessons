//
//  People.cpp
//  L01OOP
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include "People.h"

namespace xiaohuai {
    People::People(){
        this->age = 10;
    }
    
    People::People(int age){
        this->age = age;
    }
    
    void People::sayHello(){
        printf("Hello CPP\n");
    }
    
    int People::getAge(){
        return this->age;
    }
}


