//
//  main.cpp
//  L01OOP
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

class People {
public:
    void sayHello(){
        printf("Hello Cpp!");
    }
};

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    
    
    return 0;
}
