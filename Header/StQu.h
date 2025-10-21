#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H
#include "LinkedList.h"
template <class T>
#define ll long long
class StQu {
    protected:
        SList<T> list;
        ll count = 0;
    public:
        StQu (ll len = 10);
        virtual void display () = 0;
        bool empty();
        ll size();
};

template <class T>
class Stack : public StQu {

};

template <class T>
class Queue : public StQu {

};

#endif