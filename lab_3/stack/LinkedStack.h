//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_LINKEDSTACK_H
#define LABS_LINKEDSTACK_H

#include "Stack.h"

class Node{
public:
    int data;
    Node* next;
};


class LinkedStack:public Stack{
public:
    LinkedStack();
    ~LinkedStack();
    bool push(int data);
    bool pop();
    bool getTop(int& data);
    bool isEmpty();
    int getLenth();
    void display();

private:
    Node* head;
};

#endif //LABS_LINKEDSTACK_H
