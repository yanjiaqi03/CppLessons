//
//  main.cpp
//  L12FunctionPointer
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

class Object;
class Hello;
typedef void(Object::*FP)();
typedef void(Hello::*CallaterHandler)();

void threadFunc(Hello *obj,CallaterHandler handler,int delay){
    sleep(delay);
    (obj->*handler)();
}

void callater(Hello *obj,CallaterHandler handler,int delay){
    std::thread t(threadFunc,obj,handler,delay);
    t.join();
}

class Object {
public:
    FP fp;
    
};

class Hello:public Object{
public:
    Hello(){
//        this->fp = (FP)(&Hello::sayHello);
//        (this->*fp)();
        callater(this, (CallaterHandler)(&Hello::sayHello),2);
    }
    void sayHello(){
        printf("Hello CPP");
    }
};


int main(int argc, const char * argv[]) {
    Hello hello;
    return 0;
}
