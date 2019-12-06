//
// Created by yzx66 on 2019/12/4.
//

#ifndef LABS_LINKEDLIST_H
#define LABS_LINKEDLIST_H

#include <cstdlib>
#include "Node.h"


class LinkedList
{
public:
    LinkedList();
    virtual ~LinkedList();
    bool inert(int pos,int data);
    bool remov(int pos);
    bool query(int pos,int& res);
    int getLenth();
    void display();


private:
    Node* head;

};


#endif //LABS_LINKEDLIST_H
