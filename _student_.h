#pragma once
#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include "_struct_temp.h"

void getStudentData(student& A);
void menuStudent(student A);
void viewScoreboard(student A);
void viewCourse(student A);
void viewProfile(student A);
void changePassStudent(student &A);
#endif