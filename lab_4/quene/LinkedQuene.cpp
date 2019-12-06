//
// Created by yzx66 on 2019/11/27.
//
#define MAX 100

#include "LinkedQuene.h"
#include "iostream"

using namespace std;

void destory(Node* head);

LinkedQuene::LinkedQuene() {
    this->head=this->tail=NULL;
    this->lenth=0;
}

LinkedQuene::~LinkedQuene() {
   destory(this->head);
}

bool LinkedQuene::inQuene(int data) {
    if(isFull()){
        return false;
    }

    Node* node=new Node(data);
    if(this->lenth==0){
        this->head=this->tail=node;
    } else{
        this->tail->next=node;
        this->tail=node;
    }

    this->lenth++;
    return true;
}

bool LinkedQuene::deQuene() {
    if(isEmpty()){
        return false;
    }

    Node* delNode=this->head;
    this->head=delNode->next;

    delete delNode;
    this->lenth--;

    return false;
}

bool LinkedQuene::getHead(int &data) {
    if(isEmpty()){
        return false;
    }

    data=this->head->data;
    return true;
}

bool LinkedQuene::isFull() {
    return this->lenth==MAX;
}

bool LinkedQuene::isEmpty() {
    return this->lenth==0;
}

int LinkedQuene::getLenth() {
    return this->lenth;
}

void LinkedQuene::toString() {
    Node* node=this->head;
    while(node){
        cout<<node->data<<' ';
        node=node->next;
    }
    cout<<endl;
}

void LinkedQuene::init() {
    destory(this->head);
    this->head=this->tail=NULL;
    this->lenth=0;
}

void destory(Node* head){
    Node* node=head;
    while(node){
        Node* delNode=node;
        node=node->next;
        delete delNode;
    }
}


