#pragma once
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include "_struct_temp.h"
using namespace std;

string returnPath(int schoolYear, string StudentClass, string studentID);
int findNthOccurrence(string s, char x, int count);
student getStudentData(string id, string pathStudent);
void menuStudent(student A);
void viewScoreboard(student A);
void viewCourse(student A);
void viewProfile(student A);
void changePassStudent(student& A);
#endif