#include "_login_.h"

bool login(stringNode *accountList, bool &isStaff, string &userID) {
    int loginAttempt= 0;
    while (loginAttempt < 5) {
        system("cls");
        if(loginAttempt > 0) {
            cout << "Invalid user ID or password! Please try again!" << endl;
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
                cout << "Login successfully - welcome back! " << endl;
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