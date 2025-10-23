#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// #include "GA.h"
template<class T>
class LinkedList {
    protected:
        ll count = 0;
        Node* head;
        Node* tail;
        friend class Node;
    public:
        LinkedList ();
        LinkedList (T data, Node* next);
        virtual T getIndex (ll index) = 0;
        virtual bool removeAt (ll index) = 0;
        virtual bool remove (T data) = 0;
        virtual bool contain (T data) = 0;
        virtual bool reverse (int l, int r) = 0;
        virtual ll indexOf (T data);
        virtual void display ();
        virtual void set (T e, ll index) = 0;
        ll size() const;
        ll empty() const;
        friend class Iterator;

        class Iterator {
            private:
                int idx = 0;
                Node* 
            public:

            friend class Linkedlist;
        };

};

template<class T>
class DList : public LinkedList {
    private:
        class Node{
            T data;
            Node* prev;
            Node* next;
            Node (T data = 0, Node* prev = nullptr, Node* next = nullptr);
        };
};

template<class T>
class SList : public LinkedList {
    private:
        class Node{
            T data;
            Node* next;
            Node (T data = 0, Node* next = nullptr);
        };
};

#endif