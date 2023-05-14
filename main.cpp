#include "_library_.h"

int main() {
    bool isStaff = 0;
    schoolYearNode *_schoolYear = nullptr;
    _schoolYear = loadDataFolder("Data");
    int currentSemesterCount = 2;
    stringNode* accountList= nullptr;
    loadUserAccount(accountList);

    string userID;
    bool isLogin = login(accountList, isStaff, userID);
    if(isLogin && isStaff) {
        staffNode* staffList= nullptr;
        loadStaffInfo(staffList);
        if(mainMenuStaff(_schoolYear, userID, staffList, accountList, currentSemesterCount)) {
            main();
        }
    }
    else if(isLogin && !isStaff) {
        if(StudentMain(_schoolYear, userID, accountList, currentSemesterCount)) {
            main();
        }
        else {
            deleteSchoolYearList(_schoolYear);
            cout << "Closing program..." << endl;
        }
    }
    else {
        deleteSchoolYearList(_schoolYear);
    }
    return 0;
}


//g++ main.cpp _modification_.cpp _validate_.cpp _student_.cpp _login_.cpp _staff_.cpp _supportiveFunction_.cpp _dataStorage_.cpp -o main