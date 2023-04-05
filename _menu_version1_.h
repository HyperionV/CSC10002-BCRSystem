#ifndef __MENU_VERSION1_H_
#define __MENU_VERSION1_H_

// Calling the library storage file to include every libraries which are needed to use
#include "_library_storage_.h"


// Declaration of some function to make menu, terminal look better
void clearConsole();
void changeColor(int color);
void setCursor(bool visible, DWORD size);

// Declaration of function to make loading bar
void loadingBar(int status);

// Declaration of user checking
bool checkStudentUserExist(const string& register_student_name);
bool checkStudentUserPassword(const string& register_student_password);
bool checkStaffUserExist(const string& register_staff_name);
bool checkStaffUserPasswordCode(const string& register_staff_password, const int value);

// Declaration of function using to display menu for project
void menuVersion1();

#endif // !__MENU_VERSION1_H_
