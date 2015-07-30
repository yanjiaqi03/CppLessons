//
//  main.cpp
//  L04CMethod
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

class Object {
    
public:
    Object(){
        printf("Create Object\n");
    }
    ~Object(){
        printf("Delete Object\n");
    }
};

/*代码块{} Object obj 所在的代码块执行完，会自动执行析构方法*/
void runObject()
{
//    {
        Object obj;
//        printf("runObject inside end\n");
//    }
    printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
//    Object *obj = new Object();
//    delete obj;
    runObject();
    printf("end\n");
    
    return 0;
}
