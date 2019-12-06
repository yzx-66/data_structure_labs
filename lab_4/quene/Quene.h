//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_QUENE_H
#define LABS_QUENE_H

#include "cstdbool"

class Quene{
public:
    virtual ~Quene(){};
    virtual bool inQuene(int data)=0;
    virtual bool deQuene()=0;
    virtual bool getHead(int& data)=0;
    virtual bool isFull()=0;
    virtual bool isEmpty()=0;
    virtual int getLenth()=0;
    virtual void toString()=0;
    virtual void init()=0;
};
#endif //LABS_QUENE_H
