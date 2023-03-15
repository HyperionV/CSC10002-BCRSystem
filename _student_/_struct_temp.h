#pragma once
#include <string>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    std::string name;
    std::string id;
    date dob;
    classes* classroom;
    std::string socialid;
    bool gender;
    scoreboard score;
    course* courses;
};

struct staff {
    std::string name;
    std::string id;
    date dob;
    std::string socialid;
    bool gender;
};

struct scoreboard {
    double total;
    double final;
    double midterm;
    double other;
};

struct classes {
    std::string name;
    std::string type;
    student* studentList;
    int numberOfStudent;
};

struct course {
    std::string id;
    std::string name;
    std::string className;
    std::string teacherName;
    int credit;
    calendar shedule;
    int max;
    student* enrolled;
    semester* sem;
};

struct calendar {
    bool** session;
};

struct semester {
    course* cours;
    schoolYear SY;
    date start;
    date end;
};

struct schoolYear {
    semester* sem;
};