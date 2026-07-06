#include <iostream>
#include <string>

class DynamicArray {
private: 
    int* arr = nullptr; // empty
    int size = 0; // pointer of next element position
    int capacity = 0; // capacity total
public:

    DynamicArray(int capacity) { // constructor
        if (capacity>0) {
            this->arr = new int[capacity]{}; // intialise empty array
            this->capacity = capacity;
        }
        
    }

    int get(int i) { // assuming i is valid
        return this->arr[i];
    }

    void set(int i, int n) {
        if (i<this->capacity) { // i within capacity
            this->arr[i] = n;
        }
    }

    void pushback(int n) {
        if (this->size==this->capacity) {
            this->resize();
        }
        this->arr[this->size] = n;
        this->size+=1;

    }

    int popback() {
        this->size-=1;
        int value = this->arr[this->size];
        return value;
    }

    void resize() {
        this->capacity *=2;
        int* newarr = new int[this->capacity];
        for (int i = 0; i<this->size; i++) {
            newarr[i] = this->arr[i];
        }
        delete[] this->arr;
        this->arr = newarr;
    }

    int getSize() {
        return this->size;
    }

    int getCapacity() {
        return this->capacity;
    }
    ~DynamicArray() { // destructor
        delete[] this->arr;
    }
};
