//
// Created by yzx66 on 2019/11/27.
//
#include "AarryStack.h"
#include <iostream>

#define MAX 100

using namespace std;

AarryStack::AarryStack(){
    this->head=new int[MAX];
    this->len=0;
}

AarryStack::~AarryStack(){
    delete[] this->head;
}


bool AarryStack::push(int data){
    if(isFull()){
        return false;
    }

    for(int i=len;i>0;i--){
        this->head[i]=this->head[i-1];
    }
    this->head[0]=data;
    this->len++;

    return true;
}

bool AarryStack::pop(){
    if(isEmpty()){
        return false;
    }

    for(int i=1;i<len;i++){
        this->head[i-1]=this->head[i];
    }
    this->len--;

    return true;
}

bool AarryStack::getTop(int& data){
    if(isEmpty()){
        return false;
    }

    data=this->head[0];
    return true;
}


bool AarryStack::isEmpty(){
    return this->len==0;
}

bool AarryStack::isFull(){
    return this->len==MAX;
}

int AarryStack::getLenth() {
    return this->len;
}

void AarryStack::display() {
    for(int i=0;i<this->len;i++){
        cout<<this->head[i]<<' ';
    }
    cout<<endl;
};
