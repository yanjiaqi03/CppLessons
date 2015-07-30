//
//  DataChangedListener.h
//  L08Interface
//
//  Created by yan on 15/7/30.
//  Copyright (c) 2015年 yan. All rights reserved.
//

#ifndef __L08Interface__DataChangedListener__
#define __L08Interface__DataChangedListener__

#include <stdio.h>
class DataChangedListener{
public:
    virtual void dataChanged(int)=0;
    virtual int getValue()=0;
};
#endif /* defined(__L08Interface__DataChangedListener__) */
