//
// Created by yzx66 on 2019/11/27.
//

#include "TestLab3.h"
#include <iostream>
#include "./stack/Stack.h"
#include "./stack/AarryStack.h"
#include "./stack/LinkedStack.h"
#include "question/QuestionLab3.h"

using namespace std;

void question(Stack* stack);

void TestLab3::testLab(){
    cout<<"********测试顺序栈********"<<endl;
    AarryStack* arrayStack=new AarryStack();
    question(arrayStack);
    cout<<endl<<endl;

    cout<<"********测试链栈********"<<endl;
    LinkedStack* linkedStack=new LinkedStack();
    question(linkedStack);
}

void question(Stack* stack){
    QuestionLab_3* q=new QuestionLab_3(stack);
    /**
     *  第一组数据：4
        第二组数据：11
        第三组数据：254
        第四组数据：1357
     */
    cout<<"测试10进制转化为16进制"<<endl;
    cout<<"第一组数据：4 \t 十六进制:";
    q->showSexadecimal(4);
    cout<<"第二组数据：11 \t 十六进制:";
    q->showSexadecimal(11);
    cout<<"第三组数据：254 \t 十六进制:";
    q->showSexadecimal(254);
    cout<<"第四组数据：1357 \t 十六进制:";
    q->showSexadecimal(1357);
    cout<<endl;

    /**
     * 1*[2*(3+4)]
     * 1*(2+3]
     * 1*{(3+4)]
     */
    cout<<"测试括号是否匹配"<<endl;
    cout<<"第一组数据：1*[2*(3+4)] \t 是否匹配:";
    q->showMatching("1*[2*(3+4)]");
    cout<<"第二组数据：1*(2+3] \t 是否匹配:";
    q->showMatching("1*(2+3]");
    cout<<"第三组数据：1*{(3+4)} \t 是否匹配:";
    q->showMatching("1*{(3+4)]");
}