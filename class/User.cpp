#include "User.h"

using namespace std;

//Check if a string contain only numbers.
bool User::hasOnlyNumbers(const string &userInput) {
    if (userInput.find_first_not_of("0123456789") == string::npos) {
        return true;
    } else {
        return false;
    }
}
