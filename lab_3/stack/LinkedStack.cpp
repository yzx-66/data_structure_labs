//
// Created by yzx66 on 2019/11/27.
//

#include "LinkedStack.h"
#include <iostream>

using namespace std;


LinkedStack::LinkedStack(){
    this->head=new Node;
    this->head->next=NULL;
}

LinkedStack::~LinkedStack(){
    Node* node=this->head;
    if(node){
        Node* freeNode=node;
        node=node->next;
        delete  freeNode;
    }
}


bool LinkedStack::push(int data){
    Node* newNode=new Node;
    newNode->data=data;

    newNode->next=this->head->next;
    this->head->next=newNode;

    return true;
}

bool LinkedStack::pop(){
    if(isEmpty()){
        return false;
    }

    Node* freeNode=this->head->next;
    this->head->next=freeNode->next;
    delete freeNode;

    return true;
}

bool LinkedStack::getTop(int& data){
    if(isEmpty()){
        return false;
    }

    data=this->head->next->data;
    return true;
}


bool LinkedStack::isEmpty(){
    return this->head->next==NULL;
}


int LinkedStack::getLenth(){
    int lenth=0;
    Node* node=this->head->next;

    while(node){
        lenth++;
        node=node->next;
    }

    return lenth;
}

void LinkedStack::display(){
    Node* node=this->head->next;
    while(node){
        cout<<node->data<<" ";
        node=node->next;
    }
}



