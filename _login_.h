#pragma once
#include "_library_.h"

bool login(stringNode *accountList, bool &isStaff, string &userID);
void initialize(schoolYearNode *_schoolYear, stringNode *accountList, int &currentSemesterCount);