
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include <fstream>
#include <string>
#include "_struct_temp.h"

int findNthOccurrence(string s, char x, int count);
student getStudentData(string id, string pathStudent);
void menuStudent(const student &A, const schoolYear &_yr);
void viewScoreboard(student A);
void viewCourse(student A, schoolYear _yr);
void viewProfile(student A, schoolYear _yr);
void changePassStudent(string& password);
#endif
