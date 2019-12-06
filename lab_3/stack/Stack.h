//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_STACK_H
#define LABS_STACK_H

class Stack
{
public:
    virtual ~Stack(){};
    virtual bool push(int data)=0;
    virtual bool pop()=0;
    virtual bool getTop(int& data)=0;
    virtual bool isEmpty()=0;
    virtual int getLenth()=0;
    virtual void display()=0;

};

#endif //LABS_STACK_H
