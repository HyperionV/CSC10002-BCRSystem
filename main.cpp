#include "_modification_.h"

int main() {
    bool isStaff = 0;
    stringNode* accountList= nullptr;
    loadUserAccount(accountList);

    if(login(accountList, isStaff) && isStaff) { //user id : DinhBaTien   --- pw : 123456
        // staffNode* staffList = nullptr;
        // loadStaffInfo(staffList);

        schoolYearNode *_schoolYear = nullptr;
        _schoolYear = loadDataFolder("Data");
        mainMenuStaff(_schoolYear);
    }

    return 0;
}
