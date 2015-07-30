//
//  main.cpp
//  L11PseudoFunction
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

void hello()
{
    printf("hello\n");
}

class Hello {
public:
    void operator()(){
        printf("Hello CPP\n");
    }
};
int main(int argc, const char * argv[]) {
    //hello()
    /*伪函数:是一个类，只是类通过运算符()的重载，让其看似跟一个函数一样
     作用:可以把它当做一个方法一样作为其他方法的返回值传递，实现返回值为一个方法*/
    Hello h;
    h();
    
    return 0;
}
