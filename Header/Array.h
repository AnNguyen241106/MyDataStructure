#ifndef ARRAY_H
#define ARRAY_H
#include "MySort.h"
template <class T>
class Arr {
    private:
        int count = 0;
        T* data = nullptr;
    public:
        friend class Iterator;
        class Iterator;
        Arr ();
        Arr (int size, int value = 0);
        Arr (Arr<T>::Iterator begin, Arr<T>::Iterator end);
        ~Arr ();
        Arr& operator=(int n);
        T* operator[](int index);
        Arr& operator=(std::initializer_list<T> list);
        Arr& operator=(const int a[]); 
        Arr& operator=(int arr[]);
        Arr operator=(const Arr&);
        Arr operator==(const Arr&) const;
        Arr operator+(const Arr&);
        Arr operator-(const Arr&);
        Arr operator!=(const Arr&) const;
        int size() const;
        bool empty () const;
        bool add (T value, int index = count-1);
        void display ();
        T remove (T value, int index = count-1);
        Iterator begin() const;
        Iterator end() const;
        class Iterator {
            private:
                int cursor = 0;
                T* address;
            public:
                Iterator();
                Iterator(T* address, int cursor);
                Iterator operator++() const;
                Iterator operator++(int) const;
                Iterator operator--() const;
                Iterator operator--(int) const;
                Iterator operator==() const;
                Iterator operator!=() const;
                Iterator operator-() const;
                Iterator operator+=(int cnt) const;
                Iterator operator-=(int cnt) const;
                T& operator*() const;
            friend class Arr;
        };

};

#endif