//
// Created by yzx66 on 2019/11/27.
//

#ifndef LABS_CIRCLEQUENE_H
#define LABS_CIRCLEQUENE_H

#include "Quene.h"


class CircleQuene:public Quene{
public:
    CircleQuene();

    bool inQuene(int data) override;

    bool deQuene() override;

    bool getHead(int &data) override;

    bool isFull() override;

    bool isEmpty() override;

    ~CircleQuene() override;

    int getLenth() override;

    void toString() override;

    void init() override;

private:
    int* head;
    int headIndex;
    int sumOffset;
    int len;
};


#endif //LABS_CIRCLEQUENE_H
