//
//  People.h
//  L01OOP
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <stdio.h>

namespace xiaohuai {
    class People {
    private:
        int age;
        int sex;
    public:
        People();
        People(int,int);
        int getAge();
        void setAge(int);
        void sayHello();
    };
}


#endif /* defined(__L01OOP__People__) */
