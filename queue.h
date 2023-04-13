#ifndef QUEUE1_H
#define QUEUE1_H
#include <stddef.h>
#include <iostream>
using namespace std;


template<typename T>
class Queue
{
private:
    T* _data;
    size_t _size;
    size_t _head;
    size_t _tail;
public:
    Queue();
    ~Queue();
    void add(T elem);
    T peek();
    size_t length();
    bool isEmpty();
};

template<typename T> Queue<T>::Queue()
    : _data(nullptr), _size(0), _head(0), _tail(0)
{
}

template<typename T> Queue<T>::~Queue()
{
    delete[] _data;
}

template<typename T> void Queue<T>::add(T elem)
{
    if(_tail == _size)
    {
        size_t dynamicSize = _size * 2 + 1;
        T* dynamicData = new T[dynamicSize];
        for(size_t i = _head; i < _tail; i++)
        {
            dynamicData[i-_head] = _data[i];
        }
        _size = dynamicSize;
        _tail = length();
        _head = 0;
        delete[] _data;
        _data = dynamicData;
    }
    _data[_tail++] = elem;
}

template<typename T> T Queue<T>::peek()
{
    if(_head == _tail)
    {
        cout << "Nothing to peek" << endl;
    }
    else
    {
        return _data[_head++];
    }
}

template<typename T> size_t Queue<T>::length()
{
    return _tail - _head;
}

template<typename T> bool Queue<T>::isEmpty()
{
    return length() == 0;
}

#endif // QUEUE1_H
