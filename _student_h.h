
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "_struct_temp.h"

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr);
int findNthOccurrence(string s, char x, int count);
student getStudentData(string id, string schoolYr, studentNode* head);
void menuStudent(student &A, const schoolYear &_yr);
void viewScoreboard(student A);
void viewCourse(student A, schoolYear _yr);
void viewProfile(student A, schoolYear _yr);
void changePassStudent(string* password, student A);
int StudentMain(schoolYearNode* schoolYr, string id, studentNode* stuNode);
#endif
