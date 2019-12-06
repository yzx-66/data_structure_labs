//
// Created by yzx66 on 2019/12/4.
//

#ifndef LABS_CIRCULARLINKEDLIST_H
#define LABS_CIRCULARLINKEDLIST_H


#include <cstdlib>
#include "Node.h"


class CircularLinkedList
{
public:
    CircularLinkedList();
    virtual ~CircularLinkedList();
    bool inert(int pos,int data);
    bool remov(int pos);
    bool query(int pos,int& res);
    int getLenth();
    void display();


private:
    Node* head;
};

#endif //LABS_CIRCULARLINKEDLIST_H
