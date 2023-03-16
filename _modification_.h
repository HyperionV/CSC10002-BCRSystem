#include "_struct_temp.h"

//miscellaneous/support function prototypes
void addStringNode(stringNode *&head, const string &data);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void displayStudentList(studentNode *head);
void addStudentByFile(studentNode *&head);
void addStudentIndividually(student &s);
void saveStudentInfo(string path, const student &source);
void addStudentNode(studentNode *&head, const student &source);
void exportStudentListOfClass(const string &schoolYear, const string &className);
void addCourseNode(courseNode *&head, const course &_course);
void addClassNode(classNode *&head, const _class &c);
void deleteStringList(stringNode *&head);
void deleteStudentList(studentNode *&head);
void deleteCourseList(courseNode *&head);
void deleteClassList(classNode *&head);
classNode* findClassName(classNode *head, const string &className);
studentNode* findStudent(studentNode *head, const string &studentID);
courseNode* findCourse(courseNode *head, const string &ID);

//main functions prototypes
void createSchoolYear(schoolYear &year);
void createClass(schoolYear &SC);