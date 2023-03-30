#include "RandMT.h"
#include "Array.h"
#include <iostream>

using namespace std;

void Array::setArraySize(unsigned long int arraySize2) {
    arraySize = arraySize2;
}

void Array::createArray() {
    array = new unsigned long int[arraySize];
}

void Array::fillArrayRand() { //random
    RandMT myRandom;
    int i;
    for (i = 0; i < arraySize; i++)
        array[i] = myRandom();
}

void Array::fillHalfArrayRand() { //50% random 50% sorted
    RandMT myRandom;
    int i;
    unsigned long int k;
    k = (arraySize / 2);
    for (i = 0; i < k; i++)
        array[i] = i + 1;
    for (i = k; i < arraySize; i++)
        array[i] = myRandom();
}

void Array::fillArrayASC() { //sorted ascended
    int i;
    for (i = 0; i < arraySize; i++)
        array[i] = i + 1;
}

void Array::fillArrayDESC() { //sorted descended
    int i;
    for (i = 0; i < arraySize; i++)
        array[i] = arraySize - i;
}

void Array::copyArray(Array array2) {
    int i;
    for (i = 0; i < arraySize; i++)
        array2.array[i] = array[i];
}

void Array::bubbleSort() { //bubble algorithm
    unsigned long int i, j, temp;
    for (i = 1; i < arraySize; i++)
        for (j = arraySize - 1; j >= i; j--)
            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
}

void Array::selectSort() { //selection algorithm
    unsigned long int i, j, k, min;
    for (i = 0; i < arraySize - 1; i++) {
        k = i;
        min = array[i];
        for (j = i + 1; j < arraySize; j++) {
            if (array[j] < min) {
                k = j;
                min = array[j];
            }
        }
        array[k] = array[i];
        array[i] = min;
    }
}

void Array::insertSort() {//insertion algorithm
    int i, j;
    unsigned long int x;
    for (i = 1; i < arraySize; i++) {
        x = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = x;
    }
}

void Array::quickSort(int left, int right) { //quick algorithm
    unsigned long int i, j, x, mid;
    if (left < right) {
        i = left;
        j = right;
        mid = (left + right) / 2;
        x = array[mid];
        while (i < j) {
            while (array[i] < x)
                i++;
            while (array[j] > x)
                j--;
            if (i < j) {
                if (array[i] == array[j]) {
                    if (i < mid)
                        i++;
                    if (j > mid)
                        j--;
                } else {
                    swap(array[i], array[j]);
                }
            }
        }
        quickSort(left, j - 1);
        quickSort(i + 1, right);
    }
}

void Array::freeArrayMemory() { //freeing memory
    delete[]array;
}

Array::Array() {

}
