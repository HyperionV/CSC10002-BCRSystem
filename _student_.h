#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "_struct_.h"
#include "_modification_.cpp"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
student getStudentData(const string &id, const string &schoolYr, studentNode* head);
bool menuStudent(student &A, const schoolYear &_yr, stringNode &accountSystem);
void viewScoreboard(const student &A);
void viewCourse(const student &A, schoolYear &_yr);
bool viewProfile(const student &A, const schoolYear &_yr, credential &accountSystem);
void changePassStudent(string* password, student A);
bool StudentMain(schoolYearNode* schoolYr, string id, stringNode *accountSystem);
#endif