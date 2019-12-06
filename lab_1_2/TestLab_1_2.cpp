//
// Created by yzx66 on 2019/12/4.
//

#include "TestLab_1_2.h"
#include <iostream>
#include "./list/ArrayList.h"
#include "./list/LinkedList.h"
#include "./list/CircularLinkedList.h"
#include "./list/DoubleLinkedList.h"

using namespace std;

void testArrayList();
void testLinkedList();
void testCircularLinkedList();
void testDoubleLinkedList();


void TestLab_1_2::testLab() {
    testArrayList();
    testLinkedList();
    testCircularLinkedList();
    testDoubleLinkedList();
}


void testArrayList(){
    cout<<"**********测试顺序表**********"<<endl<<endl;
    ArrayList* arrayList=new ArrayList;

    cout<<"ArrayList最大长度100 测试插入50个数";
    for(int i=0;i<50;i++){
        arrayList->inert(i+1,i);
    }

    cout<<"结果："<<endl;
    arrayList->display();


    int res;
    arrayList->query(1,res);
    cout<<"测试取出刚才的第1个位置的数："<<res<<endl;
    arrayList->query(49,res);
    cout<<"测试取出刚才的第49个位置的数："<<res<<endl;
    bool isGet=arrayList->query(60,res);
    cout<<"测试取出刚才的第60个位置的数：";
    if(!isGet){
        cout<<"取出失败"<<endl;
    }else{
        cout<<res<<endl;
    }
    cout<<endl<<"测试删除第1个位置的数 结果:"<<endl;
    arrayList->remov(1);
    arrayList->display();

    delete arrayList;
    cout<<"析构函数执行完成!"<<endl<<endl<<endl;
}

void testLinkedList(){
    cout<<"**********测试单链表**********"<<endl<<endl;
    LinkedList* linkedList=new LinkedList;


    cout<<"测试插入50个数";
    for(int i=0;i<50;i++){
        linkedList->inert(i+1,i);
    }

    cout<<"结果："<<endl;
    linkedList->display();


    int res;
    linkedList->query(1,res);
    cout<<"测试取出刚才的第1个位置的数："<<res<<endl;
    linkedList->query(49,res);
    cout<<"测试取出刚才的第49个位置的数："<<res<<endl;
    bool isGet=linkedList->query(60,res);
    cout<<"测试取出刚才的第60个位置的数：";
    if(!isGet){
        cout<<"取出失败"<<endl;
    }else{
        cout<<res<<endl;
    }
    cout<<endl<<"测试删除第1个位置的数 结果:"<<endl;
    linkedList->remov(1);
    linkedList->display();

    delete linkedList;
    cout<<"析构函数执行完成!"<<endl<<endl<<endl;

}

void testCircularLinkedList(){
    cout<<"**********测试单循环链表**********"<<endl<<endl;
    CircularLinkedList* circularLinkedList=new CircularLinkedList;


    cout<<"测试插入50个数";
    for(int i=0;i<50;i++){
        circularLinkedList->inert(i+1,i);
    }

    cout<<"结果："<<endl;
    circularLinkedList->display();


    int res;
    circularLinkedList->query(1,res);
    cout<<"测试取出刚才的第1个位置的数："<<res<<endl;
    circularLinkedList->query(49,res);
    cout<<"测试取出刚才的第49个位置的数："<<res<<endl;
    bool isGet=circularLinkedList->query(60,res);
    cout<<"测试取出刚才的第60个位置的数：";
    if(!isGet){
        cout<<"取出失败"<<endl;
    }else{
        cout<<res<<endl;
    }
    cout<<endl<<"测试删除第1个位置的数 结果:"<<endl;
    circularLinkedList->remov(1);
    circularLinkedList->display();

    delete circularLinkedList;
    cout<<"析构函数执行完成!"<<endl<<endl<<endl;
}

void testDoubleLinkedList(){
    cout<<"**********测试双循环链表**********"<<endl<<endl;
    DoubleLinkedList* doubleLinkedList=new DoubleLinkedList;

    cout<<"测试插入50个数";
    for(int i=0;i<50;i++){
        doubleLinkedList->inert(i+1,i);
    }

    cout<<"结果："<<endl;
    doubleLinkedList->display();


    int res;
    doubleLinkedList->query(1,res);
    cout<<"测试取出刚才的第1个位置的数："<<res<<endl;
    doubleLinkedList->query(49,res);
    cout<<"测试取出刚才的第49个位置的数："<<res<<endl;
    bool isGet=doubleLinkedList->query(60,res);
    cout<<"测试取出刚才的第60个位置的数：";
    if(!isGet){
        cout<<"取出失败"<<endl;
    }else{
        cout<<res<<endl;
    }
    cout<<endl<<"测试删除第1个位置的数 结果:"<<endl;
    doubleLinkedList->remov(1);
    doubleLinkedList->display();

    delete doubleLinkedList;
    cout<<"析构函数执行完成!"<<endl<<endl<<endl;
}








