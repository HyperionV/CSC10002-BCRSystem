#include "_library_.h"

struct schoolYear;
struct classes;
struct semester;
struct course;
struct student;
struct scoreboard;
struct staff;
struct stringNode;

struct stringNode {
    string data;
    stringNode* next;
};

struct scoreboard {
    double total;
    double final;
    double midterm;
    double other;
};

struct student {
    int index;
    string id;
    string firstName;
    string lastName;
    string gender;
    string dob;
    string socialid;
    stringNode* courses;
};

struct course {
    string id;
    string name;
    string className;
    string teacher;
    unsigned int credit;
    unsigned int max;
    string day;
    string session;
    stringNode* enrolled;
};

struct semester {
    string start;
    string end;
    string SY; //school year
    stringNode* courses;
};

struct classes {
    string name;
    stringNode* students;
};

struct schoolYear {
    string SY;
    stringNode* classes;
    stringNode* semester;
};