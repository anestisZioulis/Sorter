#ifndef ARRAY_H
#define ARRAY_H


class Array {
private:
    unsigned long int *array;
    unsigned long int arraySize;

public:
    Array();

    void setArraySize(unsigned long int arraySize2);

    void createArray();

    void fillArrayRand();

    void fillHalfArrayRand();

    void fillArrayASC();

    void fillArrayDESC();

    void copyArray(Array array2);

    void bubbleSort();

    void selectSort();

    void insertSort();

    void quickSort(int left, int right);

    void freeArrayMemory();
};

#endif
