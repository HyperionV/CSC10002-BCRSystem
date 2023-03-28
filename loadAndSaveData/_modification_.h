#include "_struct_temp.h"

//miscellaneous/support function prototypes
void getContentOfFile(const string &path, stringNode *&head);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void displayStudentList(studentNode *head);
void addStudentByFile(studentNode *&head, const string &className);
void addStudentIndividually(student &s);
void saveStudentInfo(string path, const student &source);
void addStringNode(stringNode *&head, const string &data);
void addStudentNode(studentNode *&head, const student &source);
void addCourseNode(courseNode *&head, const course &_course);
void addClassNode(classNode *&head, const _class &c);
void addScoreboardNode(scoreboardNode *&head, const scoreboard &score);
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
bool checkStudentExistence(const schoolYear &_schoolYear, const student &_student);

//main features functions prototypes
void createSchoolYear(schoolYear &year);
void createClass(schoolYear &SC);
void addStudentToClass(schoolYear &_schoolYear);
void createSemester(schoolYear &SY);
void createCourse(semester &_semester);
void addStudentToCourse(course &_course);
void removeStudentFromCourse(course &_course, const string &studentID);
void deleteCourse(semester &_semester, const string &ID);
void updateCourseInfo(course &_course);
void updateStudentResult(const schoolYear &_schoolYear, const course &_course);

//Data export function prototypes
void exportStudentInfoList(const string &_schoolYear, const course &_course);
