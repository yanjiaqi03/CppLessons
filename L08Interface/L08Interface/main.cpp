//
//  main.cpp
//  L08Interface
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include "DataChangedListener.h"

class Data :public DataChangedListener{
    int value;
    
public:
    void dataChanged(int value){
        this->value = value;
    }
    int getValue(){
        return this->value;
    }
};

int main(int argc, const char * argv[]) {
    /*在C++中，纯虚类及java中的接口,只要有一个纯虚函数,就称为纯虚类。纯虚类不能被实例化。*/
    Data *d = new Data();
    d->dataChanged(100);
    std::cout<<"value = "<<d->getValue();
    
    delete d;
    
    return 0;
}
