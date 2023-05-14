#pragma once
#include "_validate_.h"

//main features functions prototypes
bool createSchoolYear(schoolYearNode *&head, schoolYear &year, stringNode* accountList);
void createClass(schoolYear &SC);
void addStudentToClass(schoolYear &_schoolYear, stringNode* accountList);
void createSemester(schoolYear &SY);
void createCourse(schoolYear &_schoolYear, semester &_semester);
bool addStudentToCourseByFile(const schoolYear &_schoolYear, course &_course);
void addStudentToCourseManually(const schoolYear &_schoolYear, course &_course);
void removeStudentFromCourse(course &_course);
void deleteCourse(semester &_semester, const string &ID);
void viewCourseInfo(const course &_course);
void updateCourseInfo(course &_course);
void updateStudentResult(const schoolYear &_schoolYear, const string &ID, student &source);

//Data export function prototypes
void exportStudentInfoList(const string &_schoolYear, const course &_course);
void importStudentScore(const schoolYear &_schooolYear, const course &_course);

//Menu/support functions
schoolYear programStart(schoolYearNode *&head, stringNode *accountList);
void viewProfileStudent(student curStudent);
bool chooseSemester(const schoolYear &_schoolYear, semester &_semester);
void viewCurrentYearInfo(const schoolYear &_schoolYear);
void viewCourseScoreboard(studentNode *_student, const string &ID);
bool viewSemestersInfo(const schoolYear &_schoolYear);
void viewClassesInfo(const schoolYear &_schoolYear);
void viewDetailedClassInfo(const _class &source);
void viewSchoolYearAllStudent(const schoolYear &_schoolYear);
void viewDetailedCourseInfo(const course &_course);
void viewStudentResult(const student &source);
void viewStudentInfo(const schoolYear &_schoolYear);
void updateCurrentYearInfo(schoolYear &_schoolYear);
bool updateSemesterInfo(schoolYear &_schoolYear);
void createNewCourseUI(schoolYear &_schoolYear);
bool updateCourseInfoUI(schoolYear &_schoolYear);
bool updateStudentResultUI(schoolYear &_schoolYear);
void updateStudentResultWithID(schoolYear &_schoolYear);
void updateStudentResultFromCourse(schoolYear &_schoolYear);
void updateStudentResultFromClass(schoolYear &_schoolYear);
void updateStudentResult(const schoolYear &_schoolYear, scoreboardNode *curScoreboard, student& source);
void updateStudentResult(const schoolYear &_schoolYear, const string &ID, student &source);
bool changeAccountPassword(stringNode* accountList, string userID);
void viewScoreBoardUI(schoolYear &_schoolYear);
void viewStudentResultUI(schoolYear &_schoolYear);
void viewCourseScoreBoardUI(schoolYear &_schoolYear);
void viewClassScoreboardUI(const schoolYear &_schoolYear);
void viewWholeClassScoreboard(const schoolYear &_schoolYear, const _class &source);
void updateScoreboardUI(schoolYear &_schoolYear);
void createNewStaff(staffNode* staffList, stringNode* accountList);
