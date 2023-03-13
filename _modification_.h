#include "_struct_temp.h"

void addStringNode(stringNode *&head, string data);
void createSchoolYear(schoolYear &object, string name);
void createSemester(semester &s);
void createClass(schoolYear &object);
void getContentOfFile(const string &path, stringNode *&head);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void createCourse(const semester &obj);

void addStudentToCourse(course &c);
void addStudentToClass(classes &c);
void addStudentByFile();
void addStudentIndividually();
void saveStudentInfo(string path, const student &source);

string checkClassOfStudent(const student &obj);