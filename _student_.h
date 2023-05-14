#pragma once
#include "_library_.h"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
bool getStudentData(const string &id, string schoolYr, studentNode* head, student& result);
bool menuStudent(student &A, const schoolYear &_yr, stringNode *accountSystem);
void viewScoreboard(const student &A);
void viewCourse(const student &A, const schoolYear &_yr);
void viewProfile(const student &A);
bool StudentMain(schoolYearNode* schoolYrHead, const string &id, stringNode *accountSystem);
