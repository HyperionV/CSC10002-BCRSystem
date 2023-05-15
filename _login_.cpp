#include "_login_.h"

bool login(stringNode *accountList, bool &isStaff, string &userID) {
    int loginAttempt= 0;
    while (loginAttempt < 5) {
        system("cls");
        if(loginAttempt > 0) {
            cout << "\nInvalid user ID or password! Please try again!\n" << endl;
            system("pause");
            system("cls");
        }
        string ID, PW;
        cout << "------------LOGIN------------" << endl;
        cout << "User ID: "; 
        cin >> ID;
        cout << "Password: ";
        cin >> PW;

        if(PW.find_last_of(':') != string::npos) {
            loginAttempt++;
            continue;
        }   
        string userAccount = ID + ':' + PW;
        stringNode *temp= accountList;
        while(temp) {
            if(temp->data == userAccount) {

                userID= ID;
                if(!isdigit(userAccount[0]))
                    isStaff = 1;
                return true;
            }
            temp= temp->next;
        }
        loginAttempt++;
    }
    cout << "Too many login, please try again in a minute! " << endl;
    return false;
}

void initialize(schoolYearNode* _schoolYear, stringNode* accountList, int &currentSemesterCount) {
    bool isStaff = 0;
    _schoolYear = loadDataFolder("Data");
    loadUserAccount(accountList);
    string userID;
    bool isLogin = login(accountList, isStaff, userID);
    if(isLogin && isStaff) {
        staffNode* staffList = nullptr;
        loadStaffInfo(staffList);
        cout << "\nLogin as Staff successfully - Welcome back!\n" << endl;
        system("pause");
        if(mainMenuStaff(_schoolYear, userID, staffList, accountList, currentSemesterCount)) {
            deleteStringList(accountList);
            deleteSchoolYearList(_schoolYear);
            accountList = nullptr;
            _schoolYear = nullptr;
            initialize(_schoolYear, accountList, currentSemesterCount);
        }
    }
    else if(isLogin && !isStaff) {
        cout << "\nLogin as Student successfully - Welcome back!\n" << endl;
        system("pause");
        if(StudentMain(_schoolYear, userID, accountList, currentSemesterCount)) {
            deleteStringList(accountList);
            deleteSchoolYearList(_schoolYear);
            accountList = nullptr;
            _schoolYear = nullptr;
            initialize(_schoolYear, accountList, currentSemesterCount);
        }
        else {
            deleteSchoolYearList(_schoolYear);
            cout << "\nClosing program...\n" << endl;
            return;
        }
    }
    else {
        deleteSchoolYearList(_schoolYear);
        deleteStringList(accountList);
    }
    return;
}