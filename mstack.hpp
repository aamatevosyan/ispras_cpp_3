//
// Created by newap on 10/8/2020.
//

#ifndef ISPRAS_CPP_3_MSTACK_HPP
#define ISPRAS_CPP_3_MSTACK_HPP

#define MAX_SIZE 10

#include <stdexcept>
#include <sstream>

using namespace std;

template<class T>
class mstack {
    T *arr;
    int top;
    int capacity;

public:
    mstack(int size = MAX_SIZE);    // constructor

    void push(T);

    T pop();

    T peek();

    int size();

    bool isEmpty();

    bool isFull();

    string dump();

    ~mstack() {
        delete[] arr;
    }
};

template<class T>
mstack<T>::mstack(int size) {
    arr = new T[size];
    capacity = size;
    top = -1;
}

template<class T>
void mstack<T>::push(T x) {
    if (isFull())
        throw runtime_error("OverFlow");

    arr[++top] = x;
}

template<class T>
T mstack<T>::pop() {
    peek();
    return arr[top--];
}

template<class T>
T mstack<T>::peek() {
    if (isEmpty())
        throw runtime_error("UnderFlow");

    return arr[top];
}

template<class T>
int mstack<T>::size() {
    return top + 1;
}

template<class T>
bool mstack<T>::isEmpty() {
    return top == -1;
}

template<class T>
bool mstack<T>::isFull() {
    return top == capacity - 1;
}

template<class T>
string mstack<T>::dump() {
    void *addr = this;
    ostringstream oss;
    oss << "Stack [" << addr << "]\n";

    if (size() > 0) {

        oss << "{\n";

        oss << "\tdata [" << size() << "] = " << arr << "\n";
        oss << "\t{\n";

        for (int i = 0; i < size(); i++)
            oss << "\t\t[" << i << "] = " << arr[i] << "\n";

        oss << "\t}\n";

        oss << "}\n";
    }
    return oss.str();
}

#endif //ISPRAS_CPP_3_MSTACK_HPP
