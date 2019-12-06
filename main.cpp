#include "TestLab.h"
#include "iostream"
#include "./lab_1_2/TestLab_1_2.h"
#include "./lab_3/TestLab3.h"
#include "./lab_4/TestLab4.h"
#include "./lab_5/TestLab5.h"
#include "./lab_6/TestLab6.h"
#include "./lab_7/TestLab7.h"
#include "./lab_8/TestLab8.h"
#include "./lab_9/TestLab9.h"

using namespace std;

void testLab(TestLab* test);

int main() {

    //testLab(new TestLab_1_2);
    //testLab(new TestLab3());
    //testLab(new TestLab4());
    //testLab(new TestLab5());
    //testLab(new TestLab6());
    //testLab(new TestLab7());
    testLab(new TestLab8());
    //testLab(new TestLab9());

    return 0;
}

void testLab(TestLab* test){
    test->testLab();
}