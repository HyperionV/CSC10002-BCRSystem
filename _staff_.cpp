#include "_staff_.h"

staffInfo getStaff(staffNode* head, string userID) {
    userID = userID + "@staff.hcmus.edu.vn";
    staffInfo tempStaff;
    while(head) {
        if(head->staff.mail == userID) {
            return head->staff;
        }
        head= head->next;
    }
    return tempStaff;
}

bool mainMenuStaff(schoolYearNode *&head, string userID, staffNode* staffList, stringNode* accountList, int &currentSemesterCount) {
    schoolYear _schoolYear = programStart(head, accountList);

    while (true) {
        system("cls");
        autoSaveSchoolyear(_schoolYear);
        cout << "\n---------Main menu - Staff---------" << endl;
        cout << "\t1. View profile" << endl;
        cout << "\t2. Add new staff " << endl;
        cout << "\t3. View current school year information" << endl;
        cout << "\t4. Update current school year information" << endl;
        cout << "\t5. Change working semester" << endl;
        cout << "\t6. Load another school year" << endl;
        cout << "\t7. View scoreboard" << endl;
        cout << "\t8. Update scoreboard" << endl;
        cout << "\t9. Log out" << endl;
        cout << "\t10. Save and close program" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 10 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            staffInfo curStaff = getStaff(staffList, userID);
            cout << "Full name: " << curStaff.fullName << endl;
            cout << "Email: " << curStaff.mail << endl;
            cout << "Input \"1\" to change password or \"Exit\": "; 
            int curChoice = 0;
            cin >> curChoice;
            if(curChoice == 1) {
                string curStaffID= curStaff.mail.substr(0, curStaff.mail.find_first_of("@"));
                if(changeAccountPassword(accountList, curStaffID)) {
                    cout << "Password changed successfully!" << endl;
                    system("pause");
                }
                else {
                    cout << "Incorrect password!" << endl;
                    system("pause");
                }
            } 
        }
        else if (choice == 3) {
            viewCurrentYearInfo(_schoolYear);
        }
        else if (choice == 4) {
            updateCurrentYearInfo(_schoolYear);
        }
        else if (choice == 6) {
            _schoolYear = programStart(head, accountList);
        }
        else if (choice == 7) {
            viewScoreBoardUI(_schoolYear);
        }
        else if (choice == 8) {
            updateScoreboardUI(_schoolYear);
        }
        else if (choice == 9) {
            writeDataFolder("Data", head);
            deleteSchoolYearList(head);
            return 1;
        }
        else if (choice == 10) {
            cout << "Database reloaded!\nClosing program..." << endl;
            writeDataFolder("Data", head);
            deleteSchoolYearList(head);
            return 0;
        }
        else if(choice == 2) {
            createNewStaff(staffList, accountList);
        }
        else if (choice == 5) {
            cout << "\nEnter working semester: ";
            cin >> currentSemesterCount;
            cout << "\nChanged working semester to: " << currentSemesterCount << endl;
            system("pause");
        }
        else {
            cout << "Not a valid option!\n" << endl;
            system("pause");
        }
    }
}