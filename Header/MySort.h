#ifndef SORT_H
#define SORT_H

#include "Array.h"


template <class T>
bool greater();

template <class T>
bool smaller();

template <class T>
void sort (Arr<T>& arr, bool (*func)() = smaller<T>());

template <class T>
void sort ();

template <class T>
class SortAbstraction {
    static void ShellSort (Arr<T>& arr, bool (*func)() = smaller<T>());
    static void BubbleSort ();
    static void InsertionSort ();
    static void MergeSort();
    static void 
    friend void sort();
};
#endif