//
//  Man.h
//  L03Classes
//
//  Created by yan on 15/7/29.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <stdio.h>
#include "People.h"

namespace xiaohuai {
    class Man:public People{
    public:
        Man();
        Man(int);
        void sayHello();
    };
}

#endif /* defined(__L03Classes__Man__) */
