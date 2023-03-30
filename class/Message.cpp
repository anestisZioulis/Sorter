#include "Message.h"
#include <iostream>

using namespace std;

void Message::banner() {
    cout << "\t\t*******************************************************\n"
            "\t\t**           _____            _                      **\n"
            "\t\t**          /  ___|          | |                     **\n"
            "\t\t**          \\ `--.  ___  _ __| |_ ___ _ __           **\n"
            "\t\t**           `--. \\/ _ \\| '__| __/ _ \\ '__|          **\n"
            "\t\t**          /\\__/ / (_) | |  | ||  __/ |             **\n"
            "\t\t**          \\____/ \\___/|_|   \\__\\___|_|             **\n"
            "\t\t**        An array sorting benchmark software!       **\n"
            "\t\t**          A project for \'Data Structures\'          **\n"
            "\t\t**          by Anestis Zioulis (AEM: 4247)           **\n"
            "\t\t**   Student at Int. Hellenic University (Greece)    **\n"
            "\t\t*******************************************************\n"
         << endl;
}

void Message::description() {
    cout << "\t\'Sorter\' simulates four array sorting algorithms in different scenarios." << endl <<
         "\tThe algorithms are Bubble, Select, Insert and Quick sort." << endl <<
         "\tThe scenarios are 100% random, 50% random and 50% sorted, sorted ASC, sorted DESC." << endl <<
         "\tThe arrays are being filled with the Mersenne Twister random number generator." << endl <<
         "\tFor More information please read the README.MD file."
         << endl;
}

void Message::prompt() {
    cout << endl << "Note: Provide a bigger array size if you want more discreet results(50k-100k should be fine)."
         << endl;
    cout << "Array size(0 to save and exit): ";
}

void Message::arrayTypeSelector() {
    cout << endl << "Array Scenario" << endl
         << "=============================" << endl
         << "  1. 100% random" << endl
         << "  2. 50% sorted, 50% random" << endl
         << "  3. Sorted ASC" << endl
         << "  4. Sorted DESC" << endl
         << "=============================" << endl;
    cout << "Select array scenario(1-4): ";
}

void Message::resultsSaved() {
    cout << "\tThe results have been saved in the `Results.txt` file.";
}

void Message::provideArraySize() {
    cout << endl << "Please provide a positive array number(0 to save and exit): ";
}

void Message::provideArrayType() {
    cout << endl << "Please provide a number between 1-4: ";
}

void Message::errorArrayType() {
    cout << "Something went wrong while choosing arrayType." << endl;
}

void Message::errorSorting() {
    cout << "Cloning, Sorting and exporting blew up!" << endl;
}