#include "_struct_temp.h"

void createSchoolYear(schoolYear &SC);
void createSemester();
//void createClasses();
void addCourse();
void addStudent();
void deleteStudent();
void deleteCourse();
void updateCourseScoreboard();
void updateStudentScoreboard();
void checkOpenTime(); //check validity
void modifyCourseInfo();
void modifyClassInfo();

bool inputStudent(ifstream &ifile, student &s);
bool createClass(string name);
void displayFileContent(string path);
void addStringNode(stringNode *&head, string content);
bool checkCreatedSemester(string choosen, string schoice);
void addStudentByFile(string classname);
void addStudentIndividual(student &s);