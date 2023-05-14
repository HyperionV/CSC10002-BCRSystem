#include "_supportiveFunction_.h"
void addStringNode(stringNode *&head, const string &data) {
    if (head == nullptr) {
        head = new stringNode;
        head->data = data;
        head->next = nullptr;
        head->idx = 1;
        return;
    }
    stringNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    stringNode* curr = new stringNode;
    curr->data = data;
    curr->next = nullptr;
    curr->idx = temp->idx+1;
    temp->next = curr;
    temp = curr = nullptr;
}

void addStudentNode(studentNode *&head, const student &source) {
    if (head == nullptr) {
        head = new studentNode;
        head->data = source;
        head->data.index = 1;
        head->next = nullptr;
        return;
    }
    studentNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    studentNode *curr = new studentNode;
    curr->data = source;
    if (source.index == 0) {
        curr->data.index = temp->data.index+1;
    }
    curr->next = nullptr;
    temp->next = curr;
    temp = curr = nullptr;
}

void addStaffNode(staffNode *&head, const staffInfo &curStaff) {
    staffNode* temp = new staffNode;
    temp->staff= curStaff;
    if(head == nullptr) {
        head= temp;
        return;
    }
    else {
        staffNode* cur = head;
        while(cur->next) {
            cur= cur->next;
        }
        cur->next= temp;
        cur= nullptr;
    }
    return;
}

void displayStudentList(studentNode *head) {
    if (head == nullptr) {
        cout << "\tList is empty" << endl;
        return;
    }
    studentNode *curr = head;
    int index= 1;
    while (curr) {
        cout << "\t" << index++ << ". " << curr->data.id << " - " << curr->data.firstName << " " << curr->data.lastName << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

void addStudentByFile(studentNode *&head, const string &className) {
    // cout << "\n--------Add students by file--------\n" << endl;
    cout << "Enter file path: ";
    string filePath;
    cin >> filePath;
    filePath = "Import/" + filePath;
    ifstream in_file {filePath};
    if (!in_file) {
        cout << "Error while opening file! Please check if the path was correct\n" << endl;
        system("pause");
        return;
    }
    string placeHolder;
    getline(in_file, placeHolder); //get the content line of the CSV file
    while (!in_file.eof()) {
        student temp;
        string placeHolder;
        getline(in_file, placeHolder, ',');
        if (placeHolder == "" || placeHolder == "\n") {
            break;
        }
        // cout << placeHolder << endl;
        temp.index = stoi(placeHolder);
        getline(in_file, temp.id, ',');
        getline(in_file, temp.firstName, ',');
        getline(in_file, temp.lastName, ',');
        getline(in_file, temp.gender, ',');
        getline(in_file, temp.dob, ',');
        getline(in_file, temp.socialid); //the default delimiter is "\n"
        temp.className = className;
        addStudentNode(head, temp);
    }
    studentNode* curr = head;
    //the last line will be a blank line so we have to manually remove it
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = nullptr;
    in_file.close();
}

void addStudentIndividually(student &s) {
    //validate input

    cout << "\n--------Add student individually--------" << endl;
    cout << "Enter ID of student: ";
    cin >> s.id;
    if (s.id.length() != 8) {
        s.id = "NULL";
        cout << "Wrong ID format! The ID should consist of 8 numbers\n" << endl;
        system("pause");
        return;
    }
    cout << "Enter student's first name: ";
    cin.ignore();
    getline(cin, s.firstName);
    cout << "Enter student's last name: ";
    getline(cin, s.lastName);
    cout << "Enter student's gender [M/F]: ";
    cin >> s.gender;
    s.gender = toupper(s.gender[0]);
    cout << "Enter day of birth: ";
    cin >> s.dob;
    cout << "Enter social ID: ";
    cin >> s.socialid;
    if (s.socialid.length() != 12) {
        cout << "Wrong social ID format\n" << endl;
        s.id = "NULL";
        system("pause");
        return;
    }
}

void addCourseNode(courseNode *&head, const course &_course) {
    if (head == nullptr) {
        head = new courseNode;
        head->data = _course;
        head->idx = 1;
        return;
    }
    courseNode *curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = new courseNode;
    curr->next->data = _course;
    curr->next->idx = curr->idx+1;
    curr = nullptr;
}

void addClassNode(classNode *&head, const _class &c) {
    if (head == nullptr) {
        head = new classNode;
        head->data = c;
        head->idx = 1;
        return;
    }
    classNode *curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = new classNode;
    curr->next->data = c;
    curr->next->idx = curr->idx+1;
    curr = nullptr;
}

void addScoreboardNode(scoreboardNode *&head, const scoreboard &score) {
    if (head == nullptr) {
        head = new scoreboardNode;
        head->data = score;
        return;
    }
    scoreboardNode *curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = new scoreboardNode;
    curr->next->data = score;
    curr = nullptr;
}

void addSchoolYearNode(schoolYearNode *&head, const schoolYear &_schoolYear) {
    if (head == nullptr) {
        head = new schoolYearNode;
        head->data = _schoolYear;
        return;
    }
    schoolYearNode *curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = new schoolYearNode;
    curr->next->data = _schoolYear;
    curr = nullptr;
}

void deleteStringList(stringNode *&head) {
    while (head) {
        stringNode *curr = head;
        head = head->next;
        delete curr;
    }
    head = nullptr;
}

void deleteStudentList(studentNode *&head) {
    while (head) {
        studentNode *curr = head;
        head = head->next;
        deleteScoreboardList(curr->data._course);
        delete curr;
    }
    head = nullptr;
}

void deleteClassList(classNode *&head) {
    while (head) {
        classNode *curr = head;
        head = head->next;
        deleteStudentList(curr->data._student);
        delete curr;
    }
    head = nullptr;
}

void deleteCourseList(courseNode *&head) {
    while (head) {
        courseNode *curr = head;
        head = head->next;
        deleteStudentList(curr->data.enrolled);
        delete curr;
    }
    head = nullptr;
}

void deleteScoreboardList(scoreboardNode *&head) {
    while (head) {
        scoreboardNode *curr = head;
        head = head->next;
        delete curr;
    }
    head = nullptr;
}

void deleteSchoolYearList(schoolYearNode *&head) {
    while (head) {
        schoolYearNode *curr = head;
        head = head->next;
        delete curr;
    }
    head = nullptr;
}

void deleteStringNode(stringNode *&head, const string &target) {
    stringNode *newhead = nullptr;
    while (head) {
        if (head->data == target) {
            stringNode *curr = head;
            head = head->next;
            delete curr;
            continue;
        }
        addStringNode(newhead, head->data);
        head = head->next;
    }
    deleteStringList(head);
    head = newhead;
    newhead = nullptr;
}

void deleteCourseNode(courseNode *&head, const string &ID) {
    courseNode* newhead = nullptr;
    while (head) {
        if (head->data.id != ID) {
            addCourseNode(newhead, head->data);
        }
        else {
            deleteStudentList(head->data.enrolled);
        }
        head = head->next;
    }
    deleteCourseList(head);
    head = newhead;
    newhead = nullptr;
}

void deleteStudentNode(studentNode *&head, const string &studentID) {
    studentNode *newhead = nullptr;
    while (head) {
        if (head->data.id != studentID) {
            addStudentNode(newhead, head->data);
        }
        else {
            deleteScoreboardList(head->data._course);
        }
        head = head->next;
    }
    deleteStudentList(head);
    head = newhead;
    newhead = nullptr;
}

void deleteScoreboardNode(scoreboardNode *&head, const string &ID) {
    scoreboardNode *newhead = nullptr;
    while (head) {
        if (head->data.courseID != ID) {
            addScoreboardNode(newhead, head->data);
        }
        head = head->next;
    }
    deleteScoreboardList(head);
    head = newhead;
    newhead = nullptr;
}

void deleteSchoolYearNode(schoolYearNode *&head, const string &_schoolYear) {
    schoolYearNode *newhead = nullptr;
    while (head) {
        if (head->data._schoolYear == _schoolYear) {
            schoolYearNode *curr = head;
            deleteClassList(curr->data._class);
            head = head->next;
            delete curr;
            continue;
        }
        addSchoolYearNode(newhead, head->data);
        head = head->next;
    }
    deleteSchoolYearList(head);
    head = newhead;
    newhead= nullptr;
}

bool checkStudentExistence(const schoolYear &_schoolYear, const student &_student) {
    classNode *curr = _schoolYear._class;
    while (curr) {
        if (findStudent(curr->data._student, _student.id) != nullptr) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

stringNode* findString(stringNode *head, const string &str) {
    while (head) {
        if (head->data == str) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
} 

classNode* findClassName(classNode *head, const string &className) {
    while (head) {
        if (head->data.name == className) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

studentNode* findStudent(studentNode *head, const string &studentID) {
    while (head) {
        if (head->data.id == studentID) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

courseNode* findCourse(courseNode *head, const string &ID) {
    while (head) {
        if (head->data.id == ID) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

scoreboardNode* findCourseScoreboard(scoreboardNode *head, const string &ID) {
    while (head) {
        if (head->data.courseID == ID) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

schoolYearNode* findSchoolYear(schoolYearNode *head, const string &_schoolYear) {
    while (head) {
        if (head->data._schoolYear == _schoolYear) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

studentNode* findStudentInDatabase(schoolYearNode *_schoolYearNode, const string &ID) {
    schoolYearNode *currSchoolYearNode = _schoolYearNode;
    while (currSchoolYearNode) {
        classNode *currClassNode = currSchoolYearNode->data._class;
        while (currClassNode) {
            studentNode *target = findStudent(currClassNode->data._student, ID);
            if (target != nullptr) {
                currSchoolYearNode = nullptr;
                currClassNode = nullptr;
                return target;
            }
            currClassNode = currClassNode->next;
        }
        currSchoolYearNode = currSchoolYearNode->next;
    }
    return nullptr;
}

courseNode* findCourseInDatabase(schoolYearNode *_schoolYearNode, const string &ID) {
    schoolYearNode *currSchoolYearNode = _schoolYearNode;
    while (currSchoolYearNode) {
        for (int i = 0; i < 3; i++) {
            courseNode *target = findCourse(currSchoolYearNode->data._semester[i]._course, ID);
            if (target != nullptr) {
                currSchoolYearNode = nullptr;
                return target;
            }
        }
        currSchoolYearNode = currSchoolYearNode->next;
    }
    return nullptr;
}

int getNumberOfStudents(studentNode *_student) {
    int counter = 0;
    studentNode* curr = _student;
    while (curr) {
        curr = curr->next;
        counter++;
    }
    return counter;
}

string createEmail(const string &fullName) {
    stringstream ss {fullName};
    string temp, email;
    while(ss >> temp) {
        standardizeName(temp);
        email += temp;
        temp.clear();
    }
    email += "@staff.hcmus.edu.vn";
    return email;
}

bool changeAccountPassword(stringNode* accountList, string userID) {
    string newPassword, oldPassword;
    cout << "Input old password: ";
    cin >> oldPassword;
    cout << "Input new password: ";
    cin >> newPassword;
    string curAccount = userID + ":" + oldPassword;
    stringNode* acc = accountList;
    while(acc) {
        if(curAccount == acc->data) {
            string temp = userID + ":" + newPassword;
            acc->data = temp;
            autoSaveCredential(accountList);
            return true;
        }
        acc = acc->next;
    }
    return false;
}