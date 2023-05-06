#include "_modification_.h"

int main() {
    bool isStaff = 0;
    schoolYearNode *_schoolYear = nullptr;
    _schoolYear = loadDataFolder("Data");

    stringNode* accountList= nullptr;
    loadUserAccount(accountList);

    string userID;
    bool isLogin = login(accountList, isStaff, userID);
    if(isLogin && isStaff) {
        staffNode* staffList= nullptr;
        loadStaffInfo(staffList);
        if(mainMenuStaff(_schoolYear, userID, staffList, accountList)) {
            main();
        }
    }
    // else if(isLogin && !isStaff) {
    //     if(StudentMain(_schoolYear, userID, accountList)) {
    //         main();
    //     }
    // }
    return 0;
}
