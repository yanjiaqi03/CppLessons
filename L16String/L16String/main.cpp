//
//  main.cpp
//  L16String
//
//  Created by yan on 15/7/31.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    string s = "Hello World";
    s+="CPP";
    /*以上这种方式只能连接string类型，并不能连接int  float 等类型*/
    
    
    stringstream ss;
    /*<<为stringstream中的运算符重载*/
    ss<<"Hello World ";
    ss<<200<<" ";
    ss<<"Cpp "<<2.5<<" "<<false;
    /*true和false在stringstream中为 1 和 0*/
    
    cout<<ss.str()<<"\n";
    
    /*其余用法见 www.cplusplus.com*/
    
    return 0;
}
