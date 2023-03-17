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
void addScoreboarNode(scoreboardNode *&head, const scoreboard &score);
void deleteStringList(stringNode *&head);
void deleteStudentList(studentNode *&head);
void deleteCourseList(courseNode *&head);
void deleteClassList(classNode *&head);
void deleteScoreboardList(scoreboardNode *&head);
classNode* findClassName(classNode *head, const string &className);
studentNode* findStudent(studentNode *head, const string &studentID);
courseNode* findCourse(courseNode *head, const string &ID);
scoreboardNode* findCourseScoreboard(scoreboardNode *head, const string &ID);
void deleteStringNode(stringNode *&head, const string &target);
void deleteCourseNode(courseNode *&head, const string &ID);
void deleteClassNode(classNode *&head, const string &className);
void deleteStudentNode(studentNode *&head, const string &studentID);
void deleteScoreboardNode(scoreboardNode *&head, const string &ID);

//main features functions prototypes
void createSchoolYear(schoolYear &year);
void createClass(schoolYear &SC);
void addStudentToClass(_class &c);
void createSemester(schoolYear &SY);
void createCourse(semester &_semester);
void addStudentToCourse(course &_course);
void removeStudentFromCourse(course &_course, const string &studentID);
void deleteCourse(semester &_semester, const string &ID);
void updateCourseInfo(course &_course);

//Data export function prototypes

