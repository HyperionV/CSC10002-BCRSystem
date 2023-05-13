#pragma once
#include "_library_.h"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
bool getStudentData(string id, string schoolYr, studentNode* head, student& result);
bool menuStudent(student &A, const schoolYear &_yr, stringNode *&accountSystem);
void viewScoreboard(student A);
void viewCourse(student A, schoolYear _yr);
bool viewProfile(student A, schoolYear _yr, stringNode *&accountSystem);
bool StudentMain(schoolYearNode* schoolYrHead, string id, stringNode *accountSystem);
