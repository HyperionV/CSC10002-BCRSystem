#pragma once
#include "_library_.h"

void addStringNode(stringNode *&head, const string &data);

void addStudentNode(studentNode *&head, const student &source);

void addStaffNode(staffNode *&head, const staffInfo &curStaff);

void displayStudentList(studentNode *head);

void addStudentByFile(studentNode *&head, const string &className);

void addStudentIndividually(student &s);

void addCourseNode(courseNode *&head, const course &_course);

void addClassNode(classNode *&head, const _class &c);

void addScoreboardNode(scoreboardNode *&head, const scoreboard &score);

void addSchoolYearNode(schoolYearNode *&head, const schoolYear &_schoolYear);

void deleteStringList(stringNode *&head);

void deleteStudentList(studentNode *&head);

void deleteClassList(classNode *&head);

void deleteCourseList(courseNode *&head);

void deleteScoreboardList(scoreboardNode *&head);

void deleteSchoolYearList(schoolYearNode *&head);

void deleteStringNode(stringNode *&head, const string &target);

void deleteCourseNode(courseNode *&head, const string &ID);

void deleteStudentNode(studentNode *&head, const string &studentID);

void deleteScoreboardNode(scoreboardNode *&head, const string &ID);

void deleteSchoolYearNode(schoolYearNode *&head, const string &_schoolYear);

bool checkStudentExistence(const schoolYear &_schoolYear, const student &_student);

stringNode* findString(stringNode *head, const string &str);

classNode* findClassName(classNode *head, const string &className);

studentNode* findStudent(studentNode *head, const string &studentID);

courseNode* findCourse(courseNode *head, const string &ID);

scoreboardNode* findCourseScoreboard(scoreboardNode *head, const string &ID);

schoolYearNode* findSchoolYear(schoolYearNode *head, const string &_schoolYear);

studentNode* findStudentInDatabase(schoolYearNode *_schoolYearNode, const string &ID);

courseNode* findCourseInDatabase(schoolYearNode *_schoolYearNode, const string &ID);

int getNumberOfStudents(studentNode *_student);

string createEmail(const string &fullName);

bool changeAccountPassword(stringNode* accountList, string userID);