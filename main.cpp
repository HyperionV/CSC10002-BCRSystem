#include "_modification_.h"

int main() {
    bool isStaff = 0;
    stringNode* accountList= nullptr;
    loadUserAccount(accountList);

    bool isLogin = login(accountList, isStaff);
    if(isLogin && isStaff) { //user id : DinhBaTien   --- pw : 123456
        // staffNode* staffList = nullptr;
        // loadStaffInfo(staffList);

        schoolYearNode *_schoolYear = nullptr;
        _schoolYear = loadDataFolder("Data");
        mainMenuStaff(_schoolYear);
    }
    // else if (isLogin && !isStaff) {
    //     //studentMain
    // }
    return 0;
}
