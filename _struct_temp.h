#ifndef _STRUCT_TEMP_H
#define _STRUCT_TEMP_H
#include <string>

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
    int year;
};

struct scoreboard {
    double total;
    double final;
    double midterm;
    double other;
};

struct student {
    std::string name;
    std::string id;
    date dob;
    classes* classroom;
    std::string socialid;
    bool gender;
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
    semester* sem;
};

struct semester {
    course* cours;
    schoolYear SY;
    date start;
    date end;
};

#endif