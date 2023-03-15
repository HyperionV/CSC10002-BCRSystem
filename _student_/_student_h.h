#pragma once
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include <fstream>
#include <string>
#include "_struct_temp.h"

std::string returnPath(int schoolYear, std::string StudentClass, std::string studentID);
int findNthOccurrence(std::string s, char x, int count);
student getStudentData(std::string id, std::string pathStudent);
void menuStudent(student A);
void viewScoreboard(student A);
void viewCourse(student A);
void viewProfile(student A);
void changePassStudent(student& A);
#endif
