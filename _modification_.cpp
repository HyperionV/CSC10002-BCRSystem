#include "_modification_.h"

//Miscellaneous/support functions

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
        head->next = nullptr;
        return;
    }
    studentNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    studentNode *curr = new studentNode;
    curr->data = source;
    curr->next = nullptr;
    temp->next = curr;
    temp = curr = nullptr;
}

void getContentOfFile(const string &path, stringNode *&head) {
    ifstream ifile {path};
    if (!ifile) {
        cout << "Cannot open file at: " << path << endl;
    }
    string t;
    while (ifile>>t) {
        addStringNode(head, t);
    }
    ifile.close();
}

void displayListContent(stringNode *head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    stringNode *curr = head;
    while (curr) {
        cout << curr->data << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

void displayListContentWithIndex(stringNode *head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    stringNode *curr = head;
    while (curr) {
        cout << "\t" << curr->idx << ". " << curr->data << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

void displayStudentList(studentNode *head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    studentNode *curr = head;
    while (curr) {
        cout << "\t" << curr->data.id << ". " << curr->data.firstName << " " << curr->data.lastName << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

void saveStudentInfo(string path, const student &source) {
    ofstream studentInfo {path};
    studentInfo << source.index << " " << source.id << "," << source.firstName << "," << source.lastName << "," << source.gender << "," << source.dob << "," << source.socialid << endl;
    studentInfo.close();
}

void addStudentByFile(studentNode *&head) {
    cout << "\n--------Add students by file--------\n" << endl;
    cout << "Enter file path: ";
    string filePath;
    cin >> filePath;
    ifstream in_file {filePath};
    if (!in_file) {
        cout << "Error while opening file! Please check if the path was correct" << endl;
        return;
    }
    //validate input
    while (!in_file.eof()) {
        student temp;
        string placeHolder;
        getline(in_file, placeHolder, ',');
        temp.index = stoi(placeHolder);
        getline(in_file, temp.id, ',');
        getline(in_file, temp.firstName, ',');
        getline(in_file, temp.lastName, ',');
        getline(in_file, temp.gender, ',');
        getline(in_file, temp.dob, ',');
        getline(in_file, temp.socialid, ',');
        addStudentNode(head, temp);
    }
    studentNode* curr = head;
    while (curr->next && curr->next->next) {
        curr = curr->next;
    }
    curr->next = nullptr;
    in_file.close();
}

void addStudentIndividually(student &s) {
    //validate input

    cout << "\n--------Add student individually--------\n" << endl;
    cout << "Enter ID of student: ";
    cin >> s.id;
    cout << "Enter student's first name: ";
    cin >> s.firstName;
    cout << "Enter student's last name: ";
    cin >> s.lastName;
    cout << "Enter student's gender [M/F]: ";
    cin >> s.gender;
    s.gender = toupper(s.gender[0]);
    cout << "Enter day of birth: ";
    cin >> s.dob;
    cout << "Enter social ID: ";
    cin >> s.socialid;
}

void exportStudentListOfClass(const string &schoolYear, const string &className) {
    string classPath = "Data/"+schoolYear+"/Classes/"+className;
    string file = schoolYear+"_"+className+"_students_Export.txt";
    ofstream exportFile {"Export/"+file};
    stringNode *studentList = nullptr;
    getContentOfFile(classPath+"/info.txt", studentList);
    while (studentList) {
        ifstream studentInfo {classPath+"/"+studentList->data+"/info.txt"};
        if (!studentInfo) {
            cout << "Error! Cannot open student info file" << endl;
            studentList = studentList->next;
            continue;
        }
        string data;
        getline(studentInfo, data);
        studentInfo.close();
        exportFile << data << endl;
        studentList = studentList->next;

        //dispose of the linked list here
    }
    exportFile.close();
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
        delete curr;
    }
    head = nullptr;
}

void deleteClassList(classNode *&head) {
    while (head) {
        classNode *curr = head;
        head = head->next;
        delete curr;
    }
    head = nullptr;
}

void deleteCourseList(courseNode *&head) {
    while (head) {
        courseNode *curr = head;
        head = head->next;
        delete curr;
    }
    head = nullptr;
}

    //use deep copy constructor ??
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
//The main part

void createSchoolYear(schoolYear &year) {
    cout << "\n---------Create new school year----------\n" << endl;
    string SC;
    cout << "Enter school year: ";
    cin >> SC;
    if (SC.length() < 5) {
        string temp = SC;
        temp[3] += 1;
        SC += "-" + temp;
    }
    if (SC.length() > 5) {
        string temp1 = SC.substr(4);
        string temp2 = SC.substr(5, 4);
        if (abs(stoi(temp1) - stoi(temp2)) != 1 || SC[4] != '-') {
            cout << "Invalid input" << endl;
            return;
        }
    }
    string yearPath = "Data/"+SC;
    if (rename((yearPath).c_str(), (yearPath).c_str()) == -1) {
        cout << "That school year has already been created" << endl;
        return;
    }
    year._schoolYear = SC;
    year._class = nullptr;
    year._semester = new semester[3];
    for (int i = 0; i < 3; i++){
        year._semester->name = "NULL";
        year._semester->_course = nullptr;
    }

    //add create classes

}

void createClass(schoolYear &SC) {
    cout << "\n----------Create class----------\n" << endl;
    cout << "Enter class name: ";
    string name;
    cin >> name;
    if (findClassName(SC._class, name)) {
        cout << "This class has already been added" << endl;
        return;
    }
    _class temp;
    temp.name = name;
    addClassNode(SC._class, temp);
    cout << "Created new class " << name << endl;
}