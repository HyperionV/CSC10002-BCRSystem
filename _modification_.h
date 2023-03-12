#include "_struct_temp.h"

void addStringNode(stringNode *&head, string data);
void createSchoolYear(schoolYear &object, string name);
void createSemester(schoolYear &object);
void createClass(schoolYear &object);
void getContentOfFile(ifstream &ifile, stringNode *&head);
void displayListContent(stringNode *head);
void displayListContentWithIndex(stringNode *head);
void createCourse();