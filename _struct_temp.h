#include "_library_.h"

struct date;
struct student;
struct studentNode;
struct classes;
struct course;
struct courseNode;
struct staff;
struct scoreboard;
struct schoolYear;
struct semester;
struct calendar;

struct date {
    int day;
    int month;
};

struct scoreboard {
    double total;
    double final;
    double midterm;
    double other;
};

struct student {
    string num;
    std::string firstname;
    string lastname;
    std::string id;
    string dob;
    classes* classroom;
    std::string socialid;
    string gender;
    scoreboard score;
    courseNode* courses;
    std::string password;
};

struct studentNode {
    student data;
    studentNode* next;
};

struct staff {
    std::string name;
    std::string id;
    date dob;
    std::string socialid;
    bool gender;
    std::string password;
};

struct classes {
    std::string name;
    std::string type;
    student* studentList;
    int numberOfStudent;
};

struct calendar {
    course** session;
};

struct course {
    std::string id;
    std::string name;
    std::string className;
    std::string teacherName;
    int credit;
    calendar shedule;
    int max;
    studentNode* enrolled;
    semester* sem;
};

struct courseNode {
    course data;
    courseNode* next;
};

struct schoolYear {
    std::string name;
    semester* sem;
};

struct schoolYearNode {
    schoolYear data;
    schoolYearNode* next;
};

struct semester {
    courseNode* cours;
    schoolYear SY;
    std::string name;
    date start;
    date end;
};

struct stringNode {
    int index;
    string data;
    stringNode* next;
};
