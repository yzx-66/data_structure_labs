//
// Created by yzx66 on 2019/11/27.
//

#include "TestLab7.h"
#include "iostream"
#include "./question/QuestionLab_7.h"
#include "./tree/BiTree.h"
#include "./tree/AvlTree.h"
#include "./tree/Tree.h"
using namespace std;


void testQuestionLab7();
void testTree(Tree* tree);

void TestLab7::testLab() {
     cout<<"**********测试二分查找**********"<<endl; testQuestionLab7();
     cout<<"**********测试排序二叉树**********"<<endl; testTree(new BiTree);
     cout<<"**********测试AVL树**********"<<endl; testTree(new AvlTree);
}

void testQuestionLab7(){
    /**
     * 用二分查找算法实现查找
     * 第一组测试数据：
        数据表为 (1,2,3,4,6,7,8,9,10,11,12,13,17,18,19,20,24,25,26,30,35,40,45,50,,100)
        查找的元素分别为： 2，8，20,  30，50，5，15，33，110
        第二组数据：
        数据表为 (2,3,5,7,8,10,12,15,18,20,22,25,30,35,40,45,50,55,60, 80,100)
        查找的元素分别为： 22，8，80，3，100，1，13，120
     */
     QuestionLab_7 questionLab7;
     cout<<" 数据表（一）为 (1,2,3,4,6,7,8,9,10,11,12,13,17,18,19,20,24,25,26,30,35,40,45,50,100)"
     <<endl<<"查找的元素分别为： 2，8，20,  30，50，5，15，33，110"<<endl;
     int data1[]={1,2,3,4,6,7,8,9,10,11,12,13,17,18,19,20,24,25,26,30,35,40,45,50,100};
     cout<<"查找2 索引："<<questionLab7.bSearch(data1,25,2)<<endl;
     cout<<"查找8 索引："<<questionLab7.bSearch(data1,25,8)<<endl;
     cout<<"查找20 索引："<<questionLab7.bSearch(data1,25,20)<<endl;
     cout<<"查找30 索引："<<questionLab7.bSearch(data1,25,30)<<endl;
     cout<<"查找50 索引："<<questionLab7.bSearch(data1,25,50)<<endl;
     cout<<"查找5 索引："<<questionLab7.bSearch(data1,25,5)<<endl;
     cout<<"查找15 索引："<<questionLab7.bSearch(data1,25,15)<<endl;
     cout<<"查找33 索引："<<questionLab7.bSearch(data1,25,33)<<endl;
     cout<<"查找110 索引："<<questionLab7.bSearch(data1,25,110)<<endl<<endl;

    cout<<"数据表（二）为 (2,3,5,7,8,10,12,15,18,20,22,25,30,35,40,45,50,55,60, 80,100)"
        <<endl<<"查找的元素分别为：22，8，80，3，100，1，13，120"<<endl;
    int data2[]={2,3,5,7,8,10,12,15,18,20,22,25,30,35,40,45,50,55,60, 80,100};
    cout<<"查找22 索引："<<questionLab7.bSearch(data2,21,22)<<endl;
    cout<<"查找8 索引："<<questionLab7.bSearch(data2,21,8)<<endl;
    cout<<"查找80 索引："<<questionLab7.bSearch(data2,21,80)<<endl;
    cout<<"查找3 索引："<<questionLab7.bSearch(data2,21,3)<<endl;
    cout<<"查找100 索引："<<questionLab7.bSearch(data2,21,100)<<endl;
    cout<<"查找1 索引："<<questionLab7.bSearch(data2,21,1)<<endl;
    cout<<"查找13 索引："<<questionLab7.bSearch(data2,21,13)<<endl;
    cout<<"查找120 索引："<<questionLab7.bSearch(data2,21,120)<<endl;

    cout<<endl<<endl;
}
void testTree(Tree* tree){
    /**
     * 设计出在二叉排序树中插入结点的算法
     * 测试数据：构建二叉排序树的输入序列如下：
        第一组数据：
        100，150，120，50，70，60，80，170，180，160，110，30，40，35，175
     */
     cout<<"插入 100，150，120，50，70，60，80，170，180，160，110，30，40，35，175 并中序遍历";
     tree->insert(100);tree->insert(150);tree->insert(120);tree->insert(50);tree->insert(60);tree->insert(170);
     tree->insert(180);tree->insert(160);tree->insert(110);tree->insert(30);tree->insert(40);tree->insert(35);tree->insert(175);
     cout<<endl<<"中序遍历:"; tree->display();
     cout<<endl<<endl;

    /**
    * 设计算法在二叉排序树中查找指定值的结点。
    * 测试数据：在任务<1>中第一组测试数据所构造的二叉排序树中，分别查找下列元素：    150，70，160，190，10，55，175
    */
    cout<<"分别查找下列元素：150，70，160，190，10，55，175"<<endl;
    cout<<"查找150 返回结果："<<tree->query(150)<<endl; cout<<"查找70 返回结果："<<tree->query(70)<<endl; cout<<"查找160 返回结果："<<tree->query(160)<<endl;
    cout<<"查找190 返回结果："<<tree->query(190)<<endl; cout<<"查找10 返回结果："<<tree->query(10)<<endl; cout<<"查找55 返回结果："<<tree->query(55)<<endl;
    cout<<"查找175 返回结果："<<tree->query(175)<<endl<<endl;

    /**
    * 设计算法在二叉排序树中删除特定值的结点。
    * 测试数据：在任务(1)中第一组测试数据所构造的二叉排序树中，分别删除下列元素：30，150，100
    */
    cout<<"删除下列元素：30，150，100"<<endl;
    cout<<"删除30后 中序遍历："; tree->remove(30); tree->display(); cout<<endl;
    cout<<"删除150后 中序遍历："; tree->remove(150); tree->display(); cout<<endl;
    cout<<"删除100后 中序遍历："; tree->remove(100); tree->display(); cout<<endl;
    cout<<endl<<endl;
}
