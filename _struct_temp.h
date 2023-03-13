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
    int index;
    string id;
    string firstName;
    string lastName;
    string gender;
    string dob;
    string socialid;
    stringNode* courses;
    string password;
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
    stringNode* enrolled;
};

struct semester {
    string schoolYear;
    string sem;
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