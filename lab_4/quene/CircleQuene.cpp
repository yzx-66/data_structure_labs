//
// Created by yzx66 on 2019/11/27.
//
#define MAX 100

#include "CircleQuene.h"
#include "iostream"

using namespace std;

CircleQuene::CircleQuene() {
    this->head=new int[MAX];
    this->headIndex=this->sumOffset=this->len=0;
}

CircleQuene::~CircleQuene() {
    delete[] this->head;
}

bool CircleQuene::inQuene(int data) {
    this->head[this->sumOffset % MAX]=data;
    this->sumOffset++;
    if(isFull()){
        this->headIndex++;
    } else{
        this->len++;
    }
    return true;
}

bool CircleQuene::deQuene() {
    if(isEmpty()){
        return false;
    }

    this->headIndex++;
    this->len--;
    return true;
}

bool CircleQuene::getHead(int &data) {
    if(isEmpty()){
        return false;
    }
    data=this->head[this->headIndex];
    return true;
}

bool CircleQuene::isFull() {
    //循环队列永远不会满
    return this->len==MAX;
}

bool CircleQuene::isEmpty() {
    return this->len==0;
}

int CircleQuene::getLenth() {
    return this->len;
}

void CircleQuene::toString() {
    for(int i=0 ;i<this->len;i++){
        cout<<this->head[(this->headIndex + i) % MAX]<<' ';
    }
    cout<<endl;
}

void CircleQuene::init() {
    delete[] this->head;
    this->head=new int[MAX];
    this->headIndex=this->sumOffset=this->len=0;
}
