//
//  main.cpp
//  L17FileSystem
//
//  Created by yan on 15/7/31.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    /*写文件*/
    ofstream outf;
    outf.open("data.txt");
    outf<<"Hello World\n";
    outf.close();
    outf.open("data.txt",ios::app);//追加方式打开
    outf<<"Hello Cpp\n";
    outf.close();
    /*读取文件*/
    ifstream inf;
    inf.open("data.txt");
    if(inf){
        stringbuf sb;
        inf>>&sb;
        
        cout<<sb.str()<<"\n";
    }else{
        cout<<"No File\n";
    }
    
    inf.close();
    
    
    
    return 0;
}
