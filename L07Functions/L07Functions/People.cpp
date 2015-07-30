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
        this->sex = 1;
    }
    
    People::People(int age,int sex){
        this->age = age;
        this->sex = sex;
        printf("People->age = %d,sex = %d\n",age,sex);
    }
    
    void People::sayHello(){
        printf("People say:Hello CPP\n");
        eat();
    }
    
    void People::setAge(int age){
        this->age = age;
    }
    
    int People::getAge(){
        return this->age;
    }
}


