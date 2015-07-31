//
//  main.cpp
//  L14friendClass
//
//  Created by yan on 15/7/31.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>

/*友元类: B继承A,如果B是A的友元类，B可以直接访问到A中的private元素，这种方式不建议使用,高耦合*/

class A{
    friend class B;
private:
    int a = 100;
};

class B:public A{
private:
    int b;
public:
    B(){
        std::cout<<"A.a = "<<this->a<<"\n";
    }
    B(int b){
        this->b = b;
        std::cout<<"B.b = "<<this->b<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    
    B();
    
    return 0;
}
