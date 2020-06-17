#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef int elemtype;
typedef struct LNode
{
    elemtype data;
    struct LNode* next;
}LNode;

LNode *listHI(LNode* L);
LNode* LocateElem(LNode*L, elemtype e);

int main()
{
    LNode *p = NULL; //这里为什么必须NULL?
    p=listHI(p);   //注意，光listHI(p)没用，只是return给p了，然而要赋给函数里的p，才有意义。函数里的p本质上是一个指针，指向头结点的。
    int x = 4;
    cout << p->next->data << endl;
    cout << p->next->next->data << endl;
    cout << LocateElem(p, x)->data << endl;
    return 0;
}

LNode* listHI(LNode* L)
{
    LNode* s;int x;
    L = new LNode;
    L->next = NULL;
    cin >> x;
    while (x != 9999)
    {
        s = new LNode;
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    return L;
}

LNode* LocateElem(LNode* L, elemtype e)
{
    LNode* p = L->next;
    while (p != NULL && p->data != e)
        p = p->next;
    return p;

}