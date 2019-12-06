//
// Created by yzx66 on 2019/11/27.
//

#include "TestLab4.h"
#include "iostream"
#include "./quene/Quene.h"
#include "./quene/CircleQuene.h"
#include "./quene/LinkedQuene.h"
#include "question/QuestionLab4.h"

using namespace std;

void testQuene(Quene* quene);

void TestLab4::testLab() {
    cout<<"********循环队列********"<<endl;
    testQuene(new CircleQuene());
    cout<<endl;

    cout<<"********链式队列********"<<endl;
    testQuene(new LinkedQuene());
}

void testQuene(Quene* quene){
    QuestionLab_4* question=new QuestionLab_4(quene);
    question->testInQuene_And_CheckIsFull();
    question->testInQuene_99_datas();
    question->testInQuene_And_DeQuene_And_ToString();
}
