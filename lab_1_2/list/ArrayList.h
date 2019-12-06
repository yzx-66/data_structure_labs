//
// Created by yzx66 on 2019/12/4.
//

#ifndef LABS_ARRAYLIST_H
#define LABS_ARRAYLIST_H


#include <cstdlib>
#include "Node.h"



class ArrayList
{
public:
    ArrayList();
    virtual ~ArrayList();
    bool inert(int pos,int data);
    bool remov(int pos);
    bool query(int pos,int& res);
    int getLenth();
    void display();

private:
    int* arrayList;
    int len;
};



#endif //LABS_ARRAYLIST_H
