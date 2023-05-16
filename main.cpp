#include "_library_.h"

int main() {
    int currentSemesterCount = 2;
    schoolYearNode* _schoolYear = nullptr;
    stringNode* accountList = nullptr;
    initialize(_schoolYear, accountList, currentSemesterCount);
}

//g++ main.cpp _modification_.cpp _validate_.cpp _student_.cpp _login_.cpp _staff_.cpp _supportiveFunction_.cpp _dataStorage_.cpp -o main