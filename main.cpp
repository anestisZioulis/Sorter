#include "class/Message.h"
#include "class/Array.h"
#include "class/User.h"
#include "class/RandMT.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <iomanip>

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv) {

    //declarations
    using namespace std;
    int i, terminateProgram = 0, arrayType;
    long int arraySize{};
    double sec;
    string userInput;
    Array array{}, tempArray{};
    clock_t initialClock, endClock;
    ofstream fileOutput;

    //screen initialization
    Message::banner();
    Message::description();
    RandMT randMt(time(nullptr)); //seed (constructor)
    fileOutput.open("./Results.txt", ios::app); //creating and opening file

    //main program loop
    do {
        //user input and validation for array size
        Message::prompt();
        do {
            cin.clear();
            cin.sync();
            cin >> userInput;
            if (User::hasOnlyNumbers(userInput)) {
                arraySize = stol(userInput);
                continue;
            }
            Message::provideArraySize();
        } while (!User::hasOnlyNumbers(userInput) || arraySize < 0);

        if (arraySize == 0) {
            terminateProgram = 1;
            continue;
        }

        array.setArraySize(arraySize);
        tempArray.setArraySize(arraySize);

        //user input and validation for array type
        Message::arrayTypeSelector();
        do {
            cin.clear();
            cin.sync();
            cin >> userInput;
            if (User::hasOnlyNumbers(userInput)) {
                arrayType = stol(userInput);
                if (arrayType > 0 && arrayType < 5)
                    continue;
            }
            Message::provideArrayType();
        } while (!User::hasOnlyNumbers(userInput) || arrayType < 1 || arrayType > 4);

        array.createArray();
        tempArray.createArray();

        //filling the array with random numbers
        switch (arrayType) {
            case 1 :
                array.fillArrayRand();
                break;
            case 2 :
                array.fillHalfArrayRand();
                break;
            case 3 :
                array.fillArrayASC();
                break;
            case 4 :
                array.fillArrayDESC();
                break;
            default :
                Message::errorArrayType();
                break;
        }

        //output header formatting
        fileOutput << endl << endl
                   << "ARRAY SIZE = " << arraySize << ",\t\tARRAY TYPE = "
                   << arrayType << endl;
        fileOutput << setw(35) << "EXECUTION TIMES(seconds)" << endl;
        fileOutput << "BubbleSort  SelectSort  InsertSort  QuickSort" << endl;
        fileOutput << "==========  ==========  ==========  =========" << endl;

        //array cloning/sorting while recording time and outputting the result
        for (i = 1; i < 5; i++) {
            array.copyArray(tempArray);
            switch (i) {
                case 1:
                    cout << "\nSorting ==> Bubble...";
                    initialClock = clock();
                    tempArray.bubbleSort();
                    endClock = clock();
                    sec = double(endClock - initialClock) / CLOCKS_PER_SEC;
                    cout << "(" << sec << "sec) ";
                    fileOutput << setw(10) << sec;
                    break;
                case 2:
                    cout << "Select...";
                    initialClock = clock();
                    tempArray.selectSort();
                    endClock = clock();
                    sec = double(endClock - initialClock) / CLOCKS_PER_SEC;
                    cout << "(" << sec << "sec) ";
                    fileOutput << setw(12) << sec;
                    break;
                case 3:
                    cout << "Insert...";
                    initialClock = clock();
                    tempArray.insertSort();
                    endClock = clock();
                    sec = double(endClock - initialClock) / CLOCKS_PER_SEC;
                    cout << "(" << sec << "sec) ";
                    fileOutput << setw(12) << sec;
                    break;
                case 4:
                    cout << "Quick...";
                    initialClock = clock();
                    tempArray.quickSort(0, arraySize - 1);
                    endClock = clock();
                    sec = double(endClock - initialClock) / CLOCKS_PER_SEC;
                    cout << "(" << sec << "sec) " << endl;
                    fileOutput << setw(11) << sec;
                    break;
                default:
                    Message::errorSorting();
                    break;
            }
        }

    } while (terminateProgram != 1);

    Message::resultsSaved();

    //file closing and memory freeing
    fileOutput.close();
    array.freeArrayMemory();
    tempArray.freeArrayMemory();

    return 0;
}
