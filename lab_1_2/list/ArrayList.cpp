//
// Created by yzx66 on 2019/12/4.
//

#include "ArrayList.h"
#include <iostream>
#define MAX 100

using namespace std;


ArrayList::ArrayList(){
    this->len=0;
    this->arrayList=new int[MAX];
}

ArrayList::~ArrayList(){
    delete [] this->arrayList;
    this->len=0;
}

bool ArrayList::inert(int pos, int data){
    if(pos>this->len+1 || pos<=0 || pos>MAX){
        return false;
    }

    for(int i=this->len-1;i>=pos-1;i--){
        this->arrayList[i+1]=this->arrayList[i];
    }

    this->arrayList[pos-1]=data;
    this->len++;
    return true;
}

bool ArrayList::remov(int pos){
    if(pos>MAX || pos<=0 || pos>this->len){
        return false;
    }

    for(int i=pos;i<this->len;i++){
        this->arrayList[i-1]=this->arrayList[i];
    }

    this->len--;
    return true;

}

bool ArrayList::query(int pos,int& res){
    if(pos>MAX || pos<=0 || pos>this->len){
        return false;
    }

    res=this->arrayList[pos-1];
    return true;
}

int ArrayList::getLenth(){
    return this->len;
}

void ArrayList::display(){
    for(int i=0;i<this->len;i++){
        cout<<this->arrayList[i]<<" ";
    }
    cout<<endl<<endl;
}


