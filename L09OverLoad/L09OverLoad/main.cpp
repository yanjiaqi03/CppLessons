//
//  main.cpp
//  L09OverLoad
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

class Object {
public:
    void sayHello(){
        printf("Hello CPP\n");
    }
    
    void sayHello(char* who){
        printf("%s say:Hello CPP\n",who);
    }
    void sayHello(std::string name){
        std::string content = "Hello ";
        content+=name;
        
        std::cout<<content<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    Object *obj = new Object();
    obj->sayHello();
    std::string name = "Huai";
    obj->sayHello((char *)name.c_str());
    obj->sayHello("Huai");
    delete obj;
    
    return 0;
}
