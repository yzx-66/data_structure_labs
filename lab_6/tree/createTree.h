//
// Created by yzx66 on 2019/12/2.
//

#ifndef LABS_CREATETREE_H
#define LABS_CREATETREE_H

//树（森林）的双亲表示定义和算法--------------------------------------------
#define MAXLEN 100

typedef char elementType;
//树的结点结构
typedef struct pNode
{
    elementType data;   //结点数据域
    int parent;         //父结点指针（下标）

}PTNode;

//双亲表示的树（森林）结构
typedef struct pTree
{
    PTNode node[MAXLEN];   //结点数组
    int n;              //结点总数
}pTree;


//初始化树
void initialTree(pTree &T);

//求祖先结点
bool getAncestor(pTree &T, elementType x);

//求孩子结点
void getChildren(pTree &T, elementType x);

//先序遍历
int firstChild(pTree &T,int v);    //搜索下标为v的结点的第一个孩子结点下标

int nextSibling(pTree &T,int v,int w);  //搜索v的下标位于w之后的下一个孩子结点下标

void preOrder(pTree &T,int v);


void preTraverse(pTree &T);

void postOrder(pTree &T,int v);

void postTraverse(pTree &T);

//打印树
void printTree(pTree &T);

//双亲表示定义、算法结束---------------------------------------------------------------

//孩子兄弟链表表示定义、创建算法开始---------------------------------------------------
//树（森林）的孩子兄弟链表表示
typedef char elementType;

typedef struct csNode
{
    elementType data;
    struct csNode *firstChild, *nextSibling;
}csNode,*csTree;

//删除字符串、字符数组左边空格
void strLTrim(char* str);

//****************** 文件创建双亲表示的树（森林）********************//
//* 函数功能：从文本文件创建双亲表示的图                            *//
//* 入口参数  char fileName[]，数据文件名                           *//
//* 出口参数：pTree &T，即创建的树                                  *//
//* 返 回 值：bool，true创建成功；false创建失败                     *//
//* 函 数 名：CreateTreeFromFile(char fileName[], pTree &T)         *//
//* 备注：本函数使用的数据文件格式以边（父子对）为基本数据          *//
//*******************************************************************//
int CreateTreeFromFile(char fileName[], pTree &T);

//搜索双亲表示中，下标w的下一个兄弟结点，返回兄弟结点的下标
int next(pTree T,int w);

//递归创建一棵孩子兄弟链表表示的树
void create(csNode *&T,pTree &T1,int v);

//从双亲表示的树（森林）创建孩子兄弟链表表示的树（森林）
void createCsTree_func(csNode *&T,pTree T1);

csNode* createCsTree(char fileName[]);

//孩子兄弟链表表示定义、创建算法结束---------------------------------------------------

#endif //LABS_CREATETREE_H
