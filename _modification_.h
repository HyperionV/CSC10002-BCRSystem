#include "_struct_temp.h"

void addStringNode(stringNode *&head, const string &data);
void createSchoolYear(schoolYear &object, string name);
void createSemester(semester &s);
void createClass(schoolYear &object);
void getContentOfFile(const string &path, stringNode *&head);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void createCourse(const semester &obj);

void addStudentToCourse(course &c);
void addStudentToClass(classes &c);
void addStudentByFile(studentNode *&head);
void addStudentIndividually(student &s);
void saveStudentInfo(string path, const student &source);
void addStudentNode(studentNode *&head, const student &source);
void addStudentToClass(const string &schoolYear, const string &className);

string checkClassOfStudent(const student &obj, const string &schoolYear);