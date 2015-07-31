//
//  main.cpp
//  L15Containers
//
//  Created by yan on 15/7/31.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

/*帮助文档:www.cplusplus.com*/

int main(int argc, const char * argv[]) {
    list<string> l;
    l.push_back("xiaohuai");
    l.push_back("nannan");
    for(list<string>::iterator it = l.begin();it!=l.end();it++){
        cout<<*it<<"\n";
    }
    
    map<string, string> m;
//    m.insert(pair<string, string>("name","xiaohuai"));
//    m.insert(pair<string, string>("sex","male"));
//    m.insert(pair<string, string>("age","23"));
//    cout<<"name = "<<m.at("name");
    
    /*由于map 重载了 [] 运算符，所以可以这样写*/
    m["name"]="xiaohuai";
    m["sex"]="male";
    m["age"]="23";
    /*判断map的key是否存在*/
    if(m.count("name") > 0){
        cout<<"name = "<<m["name"]<<"\n";
    }
    /*map遍历*/
    for(map<string, string>::iterator it=m.begin();it!=m.end();it++){
        cout<<it->first<<" = "<<it->second<<"\n";
    }

    return 0;
}
