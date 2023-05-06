#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "_struct_.h"
#include "_modification_.cpp"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
student getStudentData(string id, string schoolYr, studentNode* head);
bool menuStudent(student &A, const schoolYear &_yr, stringNode &accountSystem);
void viewScoreboard(student A);
void viewCourse(student A, schoolYear _yr);
bool viewProfile(student A, schoolYear _yr, credential &accountSystem);
void changePassStudent(string* password, student A);
bool StudentMain(schoolYearNode* schoolYr, string id, stringNode *accountSystem);
#endif