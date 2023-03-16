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

struct stringNode {
    int index;
    string data;
    stringNode* next{nullptr};
};

struct scoreboard {
    double total;
    double final;
    double midterm;
    double other;
};

struct student {
    unsigned int index;
    string id;
    string firstName;
    string lastName;
    string gender;
    string dob;
    string socialid;
    stringNode* _course;
    string className;
    string password;
};

struct studentNode {
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
    studentNode* enrolled;
};

struct courseNode {
    course data;
    courseNode* next = nullptr;
};

struct semester {
    string name;
    courseNode* _course;
};

struct _class {
    string name;
    studentNode* _student;
};

struct classNode {
    _class data;
    classNode *next = nullptr;
};

struct schoolYear {
    string _schoolYear;
    classNode* _class;
    semester *_semester;
};