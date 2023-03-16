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

//main functions prototypes