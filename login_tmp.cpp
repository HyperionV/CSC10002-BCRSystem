// #include "_library_.h"
// #include "_struct_.h"
// #include "_student_.h"
// #include "_modification_.h"

// bool checkAccount(string ID, string passTemp, accountNode * acc)
// {
//     while (acc)
//     {
//         if (acc->userAccount.ID == ID)
//         {
//             if (acc->userAccount.password == passTemp)
//                 return true;
//             else {
//                 cout << "Wrong password\n";
//                 return false;
//             }
//         }
//         acc = acc->next;
//     }
//     cout << "No such ID exists\n";
//     return false;
// }

// void login(credential& accountSystem, const string path, schoolYearNode* head)
// {
//     int isStaff;
//     int choice;
//     string ID , passTmp;

//     cout << "LOG IN\n";
    
//     do {
//         cout << "Are you a staff or a student?\n";
//         cout << "\n1. Staff\n";
//         cout << "2. Student\n";
//         cout << "Your role: ";
//         cin >> isStaff;
//         if (isStaff < 1 || isStaff > 2)
//             cout << "Invalid role\n";
//     } while (isStaff < 1 || isStaff > 2);

//     if (isStaff == 1)
//     {
//         cout << "Username: ";
//         cin >> ID;
//         cout << "Password: ";
//         cin >> passTmp;
//         if (checkAccount(ID, passTmp, accountSystem.staff))
//             mainMenuStaff(head);
//         return;
//     }

//     if (isStaff == 2)
//     {
//         studentNode *stuNode = nullptr;
//         cout << "Username: ";
//         cin >> ID;
//         cout << "Password: ";
//         cin >> passTmp;
//         if (checkAccount(ID, passTmp, accountSystem.student))
//             StudentMain(head, ID, stuNode, accountSystem); // stuNode is studentNode head
//         return;
//     }
// }