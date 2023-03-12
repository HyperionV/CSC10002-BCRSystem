#include "_struct_temp.h"

void addStringNode(stringNode *&head, string data);
void createSchoolYear(schoolYear &object, string name);
void createSemester(semester &s);
void createClass(schoolYear &object);
void getContentOfFile(ifstream &ifile, stringNode *&head);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void createCourse(const semester &obj);

