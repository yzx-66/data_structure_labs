//
// Created by yzx66 on 2019/11/27.
//

#include "QuestionLab4.h"
#include "iostream"

using namespace std;

QuestionLab_4::QuestionLab_4(Quene *q) {
    this->quene=q;
}

void QuestionLab_4::testInQuene_And_CheckIsFull() {
    cout<<"测试一：测试插入n个元素 打印并判断是否队满"<<endl;
    cout<<"测试顺序插入1~50 "<<endl;
    for(int i=1;i<=50;i++){
        this->quene->inQuene(i);
    }
    cout<<"入队完成，打印：";
    this->quene->toString();
    cout<<"是否队满:"<<(this->quene->isFull()? "true":"false");
    this->quene->init();
    cout<<endl;

    cout<<"测试顺序插入1~150"<<endl;
    for(int i=1;i<=150;i++){
        this->quene->inQuene(i);
    }
    cout<<"入队完成，打印：";
    this->quene->toString();
    cout<<"是否队满:"<<(this->quene->isFull()? "true":"false");
    this->quene->init();

    cout<<endl<<endl;
}

void QuestionLab_4::testInQuene_99_datas() {
    cout<<"测试二：测试用循环方式将1到99，99个元素入队，判队满"<<endl;
    for(int i=1;i<=99;i++){
        this->quene->inQuene(i);
    }
    cout<<"是否队满:"<<(this->quene->isFull()? "true":"false");
    this->quene->init();
    cout<<endl<<endl;
}

void QuestionLab_4::testInQuene_And_DeQuene_And_ToString() {
    cout<<"测试三：测试入队、出队、取队头、打印"<<endl;
    /**
     * 第一组数据：4，7，8，12，20，50
       第二组数据：a,b,c,d,f,g
     */
    cout<<"顺序插入：4，7，8，12，20，50"<<endl;
    this->quene->inQuene(4);
    this->quene->inQuene(7);
    this->quene->inQuene(8);
    this->quene->inQuene(12);
    this->quene->inQuene(20);
    this->quene->inQuene(50);

    cout<<"入队完成，打印数据：";
    this->quene->toString();

    int headData;
    this->quene->getHead(headData);
    cout<<"取队头元素："<<headData<<endl;

    cout<<"队头出队 打印剩下的元素：";
    this->quene->deQuene();
    this->quene->toString();

    this->quene->init();
    cout<<endl;
}
