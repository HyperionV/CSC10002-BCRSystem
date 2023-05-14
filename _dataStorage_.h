#include "_library_.h"

semester loadSemester(const string &path, string semesterName);

course loadCourse(const string &path);

schoolYear loadSchoolyear(const string &path, const string &sY);

studentNode* loadStudentsFromClass(const string &path ,const string& className);

classNode* loadClass(const string &path);

schoolYearNode* loadDataFolder(const string &path);

void loadStudentByFile(studentNode *&head, const string &path);

void loadStudentByFile(studentNode *&head, const string &classname, const string &path);

void loadStudentScoreboard(scoreboardNode* &scoreboardList, const string &path);

void delete_directory(const string& path);

void writeStudentInClass(studentNode *studentList, const string &path);

void writeCourseEnrolls(courseNode* courseList, const string &path);

void writeCourse(courseNode* courseList , const string &path);

void writeClass(classNode* classList ,const string &path);

void writeSchoolyear(string path, schoolYear sY);

void writeDataFolder(const string &path, schoolYearNode* &SYlist);

void autoSaveSchoolyear(schoolYear curSchoolyear);

void loadUserAccount (stringNode* &head);

void loadStaffInfo(staffNode *& staffList);

void autoSaveCredential(stringNode *accountList);

void saveStaffInfo(staffNode* head);