//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_AARRYSTACK_H
#define LABS_AARRYSTACK_H

#include <cstdlib>
#include "Stack.h"

class AarryStack:public Stack{
public:
    AarryStack();
    ~AarryStack();
    bool push(int data);
    bool pop();
    bool getTop(int& data);
    bool isEmpty();
    int getLenth();
    void display();
    bool isFull();

private:
    int* head;
    int len;
};

#endif //LABS_AARRYSTACK_H
