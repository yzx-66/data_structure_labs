//
// Created by yzx66 on 2019/11/27.
//

#include "TestLab6.h"
#include "iostream"
#include "question/QuestionLab_6.h"
using namespace std;

void testQuestionLab6_1();
void testQuestionLab6_2();
void testQuestionLab6_3();
void testQuestionLab6_4();
void testQuestionLab6_5();
void testQuestionLab6_6();

QuestionLab_6 question;

void TestLab6::testLab() {
    testQuestionLab6_1();
    testQuestionLab6_2();
    testQuestionLab6_3();
    testQuestionLab6_4();
    testQuestionLab6_5();
    testQuestionLab6_6();
}

void testQuestionLab6_1(){
    /**
     * (1)按先序、后序、层次遍历森林。
        实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题一：按先序、后序、层次遍历森林 tree11.tre"<<endl;
    question.displayByThreeWays(createCsTree("tree11.tre"));
    cout<<"问题一：按先序、后序、层次遍历森林 f20.tre"<<endl;
    question.displayByThreeWays(createCsTree("f20.tre"));
    cout<<endl<<endl;
}
void testQuestionLab6_2(){
    /**
     * (2)求森林的高度。
	    实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题二：求森林的高度 tree11.tre"<<endl;
    cout<<"高度："<<question.calculateHeight(createCsTree("tree11.tre"))<<endl;
    cout<<"问题二：求森林的高度 f20.tre"<<endl;
    cout<<"高度："<<question.calculateHeight(createCsTree("f20.tre"))<<endl;
    cout<<endl<<endl;
}
void testQuestionLab6_3(){
    /**
     * (3)求森林结点总数。
    	 实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题三：求森林结点总数 tree11.tre"<<endl;
    cout<<"节点数："<<question.calculateNodeNums(createCsTree("tree11.tre"))<<endl;
    cout<<"问题三：求森林结点总数 f20.tre"<<endl;
    cout<<"节点数："<<question.calculateNodeNums(createCsTree("f20.tre"))<<endl;
    cout<<endl<<endl;
}
void testQuestionLab6_4(){
    /**
     * (4)求森林叶子结点数。
	    实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题四：求森林叶子结点数 tree11.tre"<<endl;
    cout<<"叶子节点数："<<question.calculateLeafNums(createCsTree("tree11.tre"))<<endl;
    cout<<"问题四：求森林叶子结点数 f20.tre"<<endl;
    cout<<"叶子节点数："<<question.calculateLeafNums(createCsTree("f20.tre"))<<endl;
    cout<<endl<<endl;
}
void testQuestionLab6_5(){
    /**
     * (5)求森林的度。
	    实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题五：求森林的度 tree11.tre"<<endl;
    cout<<"度数："<<question.calculateDegree(createCsTree("tree11.tre"))<<endl;
    cout<<"问题五：求森林的度 f20.tre"<<endl;
    cout<<"度数："<<question.calculateDegree(createCsTree("f20.tre"))<<endl;
    cout<<endl<<endl;
}
void testQuestionLab6_6(){
    /**
     * (6)先序输出结点值及其层次号。
        例对图7-1所示森林，输出为：(A,1) (B,2) (E,3) (K,4) (F,3) (G,3) (C,2) (H,3) (I,3) (D,2) (J,3) (L,1) (M,2) (N,2) (O,1) (P,2)
	    实验测试数据基本要求：
        第一组数据： tree11.tre
        第二组数据： f20.tre
     */
    cout<<"问题六：先序输出结点值及其层次号 tree11.tre"<<endl;
    question.displayDataAndLevelByPre(createCsTree("tree11.tre"));
    cout<<endl;
    cout<<"问题六：先序输出结点值及其层次号 f20.tre"<<endl;
    question.displayDataAndLevelByPre(createCsTree("f20.tre"));
    cout<<endl<<endl;
}
