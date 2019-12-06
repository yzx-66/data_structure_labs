//
// Created by yzx66 on 2019/12/4.
//

#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    this->head=new Node;
    this->head->next=NULL;
}

LinkedList::~LinkedList(){
    Node* node=this->head->next;
    while(node){
        Node* delNode=node;
        node=node->next;
        delete delNode;
    }
    delete this->head;
}

bool LinkedList::inert(int pos, int data){
    Node* newNode=new Node;
    newNode->data=data;

    Node* node=this->head;
    int index=0;
    while(node){
        if(index!=pos-1){
            node=node->next;
            index++;
        }else{
            newNode->next=node->next;
            node->next=newNode;
            return true;
        }
    }

    return false;
}

bool LinkedList::remov(int pos){
    Node* node=this->head;
    int index=0;

    while(node){
        if(index!=pos-1){
            node=node->next;
            index++;
        }else{
            Node* delNode=node->next;
            if(!delNode){
                return false;
            }else{
                node->next=delNode->next;
                delete delNode;
                return true;
            }
        }
    }

    return false;
}

bool LinkedList::query(int pos,int& res){
    int index=1;
    Node* node=this->head->next;

    while(node){
        if(index==pos){
            res=node->data;
            return true;
        }

        node=node->next;
        index++;
    }

    return false;
}


int LinkedList::getLenth(){
    int len=0;
    Node* node=this->head->next;

    while(node){
        len++;
        node=node->next;
    }

    return len;
}

void LinkedList::display(){
    Node* node=this->head->next;

    while(node){
        cout<<node->data<<" ";
        node=node->next;
    }

    cout<<endl<<endl;
}




