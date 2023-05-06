#include "_struct_.h"
#include "_validate_.h"
// #include "_student_.h"

//miscellaneous/support function prototypes
void displayStudentList(studentNode *head);
void addStudentByFile(studentNode *&head, const string &className);
void addStudentIndividually(student &s);
void addStringNode(stringNode *&head, const string &data);
void addStudentNode(studentNode *&head, const student &source);
void addStaffNode(staffNode *&head, const staffInfo &curStaff);
void addCourseNode(courseNode *&head, const course &_course);
void addClassNode(classNode *&head, const _class &c);
void addScoreboardNode(scoreboardNode *&head, const scoreboard &score);
void addSchoolYearNode(schoolYearNode *&head, const schoolYear &_head);
void deleteStringList(stringNode *&head);
void deleteStudentList(studentNode *&head);
void deleteCourseList(courseNode *&head);
void deleteClassList(classNode *&head);
void deleteScoreboardList(scoreboardNode *&head);
void deleteSchoolYearList(schoolYearNode *&head);
stringNode* findString(stringNode *head, const string &str);
classNode* findClassName(classNode *head, const string &className);
studentNode* findStudent(studentNode *head, const string &studentID);
courseNode* findCourse(courseNode *head, const string &ID);
scoreboardNode* findCourseScoreboard(scoreboardNode *head, const string &ID);
schoolYearNode* findSchoolYear(schoolYearNode *head, const string &_schoolYear);
void deleteStringNode(stringNode *&head, const string &target);
void deleteCourseNode(courseNode *&head, const string &ID);
void deleteStudentNode(studentNode *&head, const string &studentID);
void deleteScoreboardNode(scoreboardNode *&head, const string &ID);
void deleteSchoolYearNode(schoolYearNode *&head, const string &_schoolYear);
bool checkStudentExistence(const schoolYear &_schoolYear, const student &_student);
studentNode* findStudentInDatabase(schoolYearNode *_schoolYearNode, const string &ID);
courseNode* findCourseInDatabase(schoolYearNode *_schoolYearNode, const string &ID);
int getNumberOfStudents(studentNode *_student);

//main features functions prototypes
bool createSchoolYear(schoolYearNode *&head, schoolYear &year);
void createClass(schoolYear &SC);
void addStudentToClass(schoolYear &_schoolYear);
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

//Load and save data
course loadCourse(const string &path);
semester loadSemester(const string &path);
studentNode* loadStudentsFromClass(const string &path ,const string& className);
schoolYear loadSchoolyear(const string &path, const string &sY);
classNode* loadClass(const string &path);


//staff
bool standardizeName(string &name);
bool createStaffAccount(staffInfo &newStaff);
string createEmail(const string &fullName);

///LOAD DATA
void loadStudentByFile(studentNode *&head, const string &filePath);
void loadStudentByFile(studentNode *&head, const string &classname, const string &filePath);
void loadStudentScoreboard(scoreboardNode* &scoreboardList, const string &path);
void loadUserAccount (stringNode*& head);
void loadStaffInfo(staffNode *& staffList);
schoolYearNode* loadDataFolder(const string &path);

///SAVE DATA
void delete_directory(const string &path);
void writeStudentInClass(studentNode *studentList, const string &path);
void writeSchoolyear(string path, schoolYear sY);
void writeCourseEnrolls(courseNode* courseList, const string &path);
void writeCourse(courseNode* courseList , const string &path);
void writeClass(classNode* classList ,const string &path);
void writeDataFolder(const string &path, schoolYearNode*& SYlist);
void autoSaveSchoolyear(schoolYear curSchoolyear);

//Menu/support functions
schoolYear programStart(schoolYearNode *&head);
void viewProfileStudent(student curStudent);
void viewProfileStaff(staffInfo curStaff, credential accountSystem);
bool chooseSemester(const schoolYear &_schoolYear, semester &_semester);
bool mainMenuStaff(schoolYearNode *&head, string userID, staffNode* staffList, stringNode* accountList);
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
void viewWholeClassScoreboard(const _class &source);
void updateScoreboardUI(schoolYear &_schoolYear);

bool login(stringNode *accountList, bool &isStaff, string& userID);
staffInfo getStaff(staffNode* head, string userID);
void createNewStaff(staffNode* staffList, stringNode* accountList);
void saveStaffInfo(staffNode* head);