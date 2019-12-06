//
// Created by yzx66 on 2019/11/27.
//

#include "TestLab5.h"
#include "iostream"
#include "./btree/BTree.h"
#include "question/QuestionLab_5.h"

using namespace std;

QuestionLab_5 questionLab5;

void testQuestionLab5_1();
void testQuestionLab5_2();
void testQuestionLab5_3();
void testQuestionLab5_4();
void testQuestionLab5_5();
void testQuestionLab5_6();
void testQuestionLab5_7();
void testQuestionLab5_8();
void testQuestionLab5_9();
void testQuestionLab5_10();


void TestLab5::testLab() {
    testQuestionLab5_1();
    testQuestionLab5_2();
    testQuestionLab5_3();
    testQuestionLab5_4();
    testQuestionLab5_5();
    testQuestionLab5_6();
    testQuestionLab5_7();
    testQuestionLab5_8();
    testQuestionLab5_9();
    testQuestionLab5_10();
}

void testQuestionLab5_1(){
    /**
     * <1>打印出二叉树的三种遍历序。
        实验测试数据基本要求：
        第一组数据： bt151.btr
        第二组数据： bt21.btr
     */
     cout<<"问题一：三种方式遍历 bt151.btr"<<endl;
     questionLab5.displayTreeByThreeways(BTree("bt151.btr"));
     cout<<"问题一：三种方式遍历 bt21.btr"<<endl;
     questionLab5.displayTreeByThreeways(BTree("bt21.btr"));
     cout<<endl<<endl;
}

void testQuestionLab5_2(){
    /**
     * <2>设计算法按中序次序输出二叉树中各结点的值及其所对应的层次数。
        实验测试数据基本要求：
        第一组数据： bt151.btr
        第二组数据： bt21.btr
     */
    cout<<"问题二：输出二叉树中各结点的值及其所对应的层次数 bt151.btr"<<endl;
    questionLab5.displayTreeWithDataLevelByMid(BTree("bt151.btr"));
    cout<<"问题二：输出二叉树中各结点的值及其所对应的层次数 bt21.btr"<<endl;
    questionLab5.displayTreeWithDataLevelByMid(BTree("bt21.btr"));
    cout<<endl<<endl;
}

void testQuestionLab5_3(){
    /**
     * <3>求二叉树的高度。
    	实验测试数据基本要求：
        第一组数据： bt261.btr
        第二组数据： bt21.btr
     */
    cout<<"问题三：求二叉树的高度 bt261.btr"<<endl;
    cout<<"高度为:"<<questionLab5.calculateHeight(BTree("bt261.btr"))<<endl;
    cout<<"问题三：求二叉树的高度 bt21.btr"<<endl;
    cout<<"高度为:"<<questionLab5.calculateHeight(BTree("bt21.btr"))<<endl<<endl<<endl;
}
void testQuestionLab5_4(){
    /**
     * <4>求二叉树的结点数。
    	实验测试数据基本要求：
        第一组数据： bt261.btr
        第二组数据： bt21.btr
     */
    cout<<"问题四：求二叉树的结点数 bt261.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateNodeNums(BTree("bt261.btr"))<<endl;
    cout<<"问题四：求二叉树的结点数 bt21.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateNodeNums(BTree("bt21.btr"))<<endl<<endl<<endl;
}
void testQuestionLab5_5(){
    /**
     * <5>求二叉树的叶子结点数。
    	实验测试数据基本要求：
        第一组数据： bt261.btr
        第二组数据： bt21.btr
     */
    cout<<"问题五：求二叉树的叶子结点数 bt261.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateLeafNums(BTree("bt261.btr"))<<endl;
    cout<<"问题五：求二叉树的叶子结点数 bt21.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateLeafNums(BTree("bt21.btr"))<<endl<<endl<<endl;
}
void testQuestionLab5_6(){
    /**
     * <6>求二叉树的度为2的结点数。
    	实验测试数据基本要求：
        第一组数据： bt261.btr
        第二组数据： bt21.btr
     */
    cout<<"问题六：求二叉树的度为2的结点数 bt261.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateDegreeNumsEqualTwo(BTree("bt261.btr"))<<endl;
    cout<<"问题六：求二叉树的度为2的结点数 bt21.btr"<<endl;
    cout<<"节点数为:"<<questionLab5.calculateDegreeNumsEqualTwo(BTree("bt21.btr"))<<endl<<endl<<endl;
}
void testQuestionLab5_7(){
    /**
     * <7>键盘输入一个元素x，求其父节点、兄弟结点、子结点的值，不存在时给出相应提示信息。对兄弟结点和孩子结点，存在时要明确指出是左兄弟、左孩子、右兄弟或右孩子。
    	实验测试数据基本要求：
        第一组数据： bt31.btr
        第二组数据： bt21.btr
     */
    cout<<"问题七：键盘输入一个元素x，求其父节点、兄弟结点、子结点的值 bt31.btr"<<endl;
    cout<<"测试x：q"<<endl;
    questionLab5.showBrotherAndChildByEqualTarget(BTree("bt31.btr"),'q');
    cout<<"问题七：键盘输入一个元素x，求其父节点、兄弟结点、子结点的值 bt21.btr"<<endl;
    cout<<"测试x：o"<<endl;
    questionLab5.showBrotherAndChildByEqualTarget(BTree("bt21.btr"),'o');
    cout<<endl<<endl<<endl;
}
void testQuestionLab5_8(){
    /**
     * <8>键盘输入一个元素x，求其在树中的层次。不存在时给出相应提示信息。
	    实验测试数据基本要求：
        第一组数据： bt26.btr
        第二组数据： bt21.btr
     */
    cout<<"问题八：键盘输入一个元素x，求其在树中的层次 bt26.btr"<<endl;
    cout<<"测试x：h"<<"  "<<"层数为："<<questionLab5.showLevelByEqualTarget(BTree("bt26.btr"),'h')<<endl;
    cout<<"问题八：键盘输入一个元素x，求其在树中的层次 bt21.btr"<<endl;
    cout<<"测试x：h"<<"  "<<"层数为："<<questionLab5.showLevelByEqualTarget(BTree("bt21.btr"),'h')<<endl<<endl<<endl;
}
void testQuestionLab5_9(){
    /**
     * <9>将按顺序方式存储在数组中的二叉树转换为二叉链表形式。（数组中要扩展为完全二叉树）。
	    实验测试数据基本要求：
        第一组数据： bt8.btr
        第二组数据： bt14.btr
     */
    char bt8[100],bt14[100];
    for(int i=0;i<100;i++){
        bt8[i]=' ';
        bt14[i]=' ';
    }

    bt8[1]='1'; bt8[2]='2'; bt8[3]='8'; bt8[4]='3';
    bt8[5]='6'; bt8[8]='4'; bt8[9]='5'; bt8[11]='7';

    bt14[1]='a';bt14[2]='b';bt14[4]='c';bt14[5]='i';bt14[8]='d';bt14[9]='f';bt14[10]='j';
    bt14[17]='e';bt14[18]='g';bt14[20]='k';bt14[21]='l';bt14[37]='h';bt14[42]='m';bt14[84]='n';

    cout<<"问题九：将按顺序方式存储在数组中的二叉树转换为二叉链表形式 bt8.btr"<<endl;
    questionLab5.changeArrayTree2LinkTree(bt8,99);
    cout<<"问题九：将按顺序方式存储在数组中的二叉树转换为二叉链表形式 bt14.btr"<<endl;
    questionLab5.changeArrayTree2LinkTree(bt14,99);
    cout<<endl<<endl;
}
void testQuestionLab5_10(){
    /**
     * <10>交换二叉树中每个结点的左右孩子指针的值。（即：左子树变为右子树，右子树变为左子树）。
    	实验测试数据基本要求：
        第一组数据： bt151.btr
        第二组数据： bt21.btr
     */
    cout<<"问题十：交换二叉树中每个结点的左右孩子指针的值 bt151.btr"<<endl;
    questionLab5.exchangeLeftAndRight(BTree("bt151.btr"));
    cout<<"问题十：交换二叉树中每个结点的左右孩子指针的值度 bt21.btr"<<endl;
    questionLab5.exchangeLeftAndRight(BTree("bt21.btr"));
    cout<<endl<<endl;
}
