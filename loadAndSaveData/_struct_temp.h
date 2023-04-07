#include "_library_.h"

struct schoolYear;
struct _class;
struct semester;
struct course;
struct student;
struct scoreboard;
struct staff;
struct stringNode;
struct studentNode;
struct classNode;
struct courseNode;
struct scoreboardNode;
struct basicCourseInfo;

struct stringNode {
    int idx;
    string data;
    stringNode* next = nullptr;
};

struct scoreboard {
    
    string courseID;
    string courseName;
    double total;
    double final;
    double midterm;
    double other;
};

struct scoreboardNode {
    scoreboard data;
    scoreboardNode *next = nullptr;
};

struct student {
    unsigned int index;
    string id;
    string firstName;
    string lastName;
    string gender;
    string dob;
    string socialid;
    scoreboardNode* _course = nullptr;
    string className;
    string password = defaultPassword;
};

struct studentNode {
    int idx;
    student data;
    studentNode* next = nullptr;
};

struct course {
    string id;
    string name;
    string className;
    string teacher;
    unsigned int credit;
    unsigned int max = 50;
    string day;
    string session;
    studentNode* enrolled = nullptr;
    scoreboardNode* list= nullptr;

};

struct courseNode {
    int idx;
    course data;
    courseNode* next = nullptr;
};


struct semester {
    string name;
    string start;
    string end;
    courseNode* _course = nullptr;
};

struct _class {
    string name;
    studentNode* _student = nullptr;
};

struct classNode {
    int idx;
    _class data;
    classNode *next = nullptr;
};

struct schoolYear {
    string _schoolYear;
    classNode* _class = nullptr;
    semester *_semester = new semester[3];
};

struct schoolYearNode {
    schoolYear data;
    schoolYearNode* next= nullptr;
};

