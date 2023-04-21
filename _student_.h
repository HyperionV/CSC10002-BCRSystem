#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "_struct_.h"
#include "_modification_.h"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
student getStudentData(string id, string schoolYr, studentNode* head);
void menuStudent(student &A, const schoolYear &_yr);
void viewScoreboard(student A);
void viewCourse(student A, schoolYear _yr);
void viewProfile(student A, schoolYear _yr);
void changePassStudent(string* password, student A);
void StudentMain(schoolYearNode* schoolYr, string id, studentNode* stuNode);
#endif