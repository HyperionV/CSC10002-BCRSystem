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
    cout << "\n--------Add students by file--------\n" << endl;
    cout << "Enter file path: ";
    string filePath;
    cin >> filePath;
    filePath = "TestData/" + filePath;
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
    cout << "Successfully imported students to class\n" << endl;
    system("pause");
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

void deleteStringNode(stringNode *&head, const string &target) {
    stringNode *newhead = nullptr;
    stringNode *delHead = head;
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
    head = newhead;
    deleteStringList(delHead);
    newhead = nullptr;
}

void deleteCourseNode(courseNode *&head, const string &ID) {
    if(head == nullptr)
        return;
    if(head->data.id == ID) {
        courseNode *curr = head;
        deleteStudentList(curr->data.enrolled);
        head = head->next;
        delete curr;
        return;
    }
    courseNode *prevhead = nullptr;
    courseNode *delHead = head;
    while (delHead) {
        if (delHead->data.id == ID) {
            courseNode *curr = delHead;
            deleteStudentList(curr->data.enrolled);
            prevhead->next = delHead->next;
            delete curr;
            return;
        }
        prevhead = delHead;
        delHead = delHead->next;
    }
    return;
}

void deleteClassNode(classNode *&head, const string &className) {
    classNode* newhead = nullptr;
    classNode* delHead = head;
    while (head) {
        if (head->data.name == className) {
            classNode *curr = head;
            deleteStudentList(curr->data._student);
            head = head->next;
            delete curr;
            continue;
        }
        addClassNode(newhead, head->data);
        head = head->next;
    }
    head = newhead;
    deleteClassList(delHead);
    newhead = nullptr;
}

void deleteStudentNode(studentNode *&head, const string &studentID) {
    studentNode *newhead = nullptr;
    studentNode *delHead = head;
    while (head) {
        if (head->data.id == studentID) {
            studentNode *curr = head;
            deleteScoreboardList(curr->data._course);
            head = head->next;
            delete curr;
            continue;
        }
        addStudentNode(newhead, head->data);
        head = head->next;
    }
    head = newhead;
    deleteStudentList(delHead);
    newhead = nullptr;
}

void deleteScoreboardNode(scoreboardNode *&head, const string &ID) {
    if(head ==  nullptr)
        return;
    if(head->data.courseID == ID) {
        scoreboardNode *curr = head;
        head = head->next;
        delete curr;
        return;
    }
    scoreboardNode *delHead = head, *prev= head;

    while (delHead) {
        if (delHead->data.courseID == ID) {
            scoreboardNode *curr = delHead;
            prev->next = delHead->next;
            delete curr;
            return;
        }
        prev = delHead;
        delHead = delHead->next;
    }
    return;
}

void deleteSchoolYearNode(schoolYearNode *&head, const string &_schoolYear) {
    schoolYearNode *newhead = nullptr;
    schoolYearNode *delHead = head;
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
    head = newhead;
    deleteSchoolYearList(delHead);
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

//main features functions

bool createSchoolYear(schoolYearNode *&head, schoolYear &year) {
    // cout << "\n---------Create new school year----------" << endl;
    string SC;
    cout << "Enter school year: ";
    cin >> SC;
    if (SC.length() < 5) {
        int temp = stoi(SC);
        temp++;
        SC += "-" + to_string(temp);
    }
    if (SC.length() > 5) {
        string temp1 = SC.substr(5);
        string temp2 = SC.substr(0, 4);
        if (abs(stoi(temp2) - stoi(temp1)) != 1 || SC[4] != '-') {
            cout << "Invalid input" << endl;
            system("pause");
            return false;
        }
    }

    schoolYearNode *target = findSchoolYear(head, SC);
    if (target != nullptr) {
        cout << "This school year has been created before" << endl;
        system("pause");
        return false;
    }
    year._schoolYear = SC;
    year._class = nullptr;
    year._semester[0].name = "Semester 1";
    year._semester[1].name = "Semester 2";
    year._semester[2].name = "Semester 3";
    for (int i = 0; i < 3; i++){
        year._semester[i].start = "NULL";
        year._semester[i].end = "NULL";
        year._semester[i]._course = nullptr;
    }

    while (true) {
        system("cls");
        classNode *currClass = year._class;
        if (currClass) {
            cout << "Current classes: " << endl;
            while (currClass) {
                cout << "\t" << currClass->data.name << "\n";
                currClass = currClass->next;
            }
        }
        cout << "Choose an action below: " << endl;
        cout << "\t1. Create new class" << endl;
        cout << "\t2. Cancel" << endl;
        int choice;
        cout << "Your choice: ";
        choice = getChoiceInt();
        if (choice == 'Y' || choice == 'y') {
            createClass(year);
        }
        else if (choice == 'N' || choice == 'n') {
            if (year._class == nullptr) {
                cout << "No class was created! Please create at least 1 class to proceed\n" << endl;
                system("pause");
                createClass(year);
            }
            else {
                cout << "Classes created successfully! Proceed to add students to classes\n" << endl;
                system("pause");
                break;
            }
        }
        else {
            cout << "Invalid choice\n" << endl;
            system("pause");
        }
    }
    while (true) {
        system("cls");
        cout << "Choose an action below:" << endl;
        cout << "\t1. Add new student to class" << endl;
        cout << "\t2. Cancel" << endl;
        char choice;
        cout << "Your choice: ";
        choice  = getChoiceInt();
        if (choice == 1) {
            addStudentToClass(year);
        }
        else if (choice == 2) {
            break;
        }
        else {
            cout << "Invalid choice\n" << endl;
            system("pause");
        }
    }
    return true;
}

void createClass(schoolYear &SC) {
    // cout << "\n----------Create class----------" << endl;
    string tmpYearNum = SC._schoolYear.substr(0, 4);
    string yearNum = tmpYearNum.substr(2);
    cout << "Choose a way to create classes: \n\t1. Single Creation \n\t2. Mass Creation" << endl;
    cout << "Your option: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 2 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 1) {
        cout << "Enter class name: " << yearNum;
        string name;
        cin >> name;
        name = yearNum+=name;
        if (findClassName(SC._class, name)) {
            cout << "This class has already been added" << endl;
            return;
        }
        _class temp;
        temp.name = name;
        addClassNode(SC._class, temp);
        cout << "Created new class " << name << endl;
    }
    else if (choice == 2) {
        string type;
        cout << "Enter classes type [CLC/APCS/VP]" << endl;
        cout << "Your option: ";
        cin >> type;
        for (size_t i = 0; i < type.length(); i++) {
            type[i] = toupper(type[i]);
        }
        if (!(type == "CLC" || type == "APCS" || type == "VP")) {
            cout << "Unknown type! Please try again!" << endl;
            return;
        }
        string className = yearNum+type;
        cout << "New classes range starts from: " << className;
        int r1;
        cin >> r1;
        int r2;
        cout << "to " << className;
        cin >> r2;
        if (r2 < r1) {
            cout << "Invalid range! Please try again!" << endl;
            return;
        }
        for (int i = r1; i <= r2; i++) {
            string numName = to_string(i);
            if (numName.length() < 2) {
                numName = "0" + numName;
            }
            string tmpClassName = className + numName;
            if (findClassName(SC._class, tmpClassName)) {
                //cout << "This class has already been added" << endl;
                continue;
            }
            _class temp;
            temp.name = tmpClassName;
            addClassNode(SC._class, temp);
            //cout << "Created new class " << tmpClassName << endl;
        }
        cout << "Created classes from range " << r1 << " to " << r2 << endl;
    }
}

void addStudentToClass(schoolYear &_schoolYear) {
    classNode *curr = _schoolYear._class;
    cout << "Choose a class: " << endl;
    int idx = 1;
    while (curr) {
        cout << "\t" << idx++ << ". " << curr->data.name << endl;
        curr = curr->next;
    }
    int choice;
    cout << "Choose an class to add student: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 1) {
            cout << "Invalid option\n" << endl;
            system("pause");
            continue;
        }
        break;
    }
    idx = 1;
    curr = _schoolYear._class;
    while (idx != choice) {
        idx++;
        curr = curr->next;
    }
    _class c = curr->data;
    cout << "Choose a way to add new student: \n\t1. Individually \n\t2. By file \n\t3. Cancel" << endl;
    cout << "Your choice: ";
    int choice2;
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 <= 3 && choice2 >= 1) {
            break;
        }
        cout << "Invalid option!" << endl;
    }
    if (choice2 == 1) {
        student temp;
        addStudentIndividually(temp);
        if (temp.id == "NULL") {
            return;
        }
        if (checkStudentExistence(_schoolYear, temp)) {
            cout << "This student has already been added\n" << endl;
            system("pause");
            return;
        }
        temp.index = 0;
        temp.className = c.name;
        addStudentNode(c._student, temp);
        curr->data = c;
    }
    else if (choice2 == 2) {
        studentNode *_student = nullptr;
        addStudentByFile(_student, c.name);
        studentNode *currStudentNode = _student;
        while (currStudentNode) {
            if (checkStudentExistence(_schoolYear, currStudentNode->data)) {
                deleteStudentNode(_student, currStudentNode->data.id);
                continue;
            }
            currStudentNode = currStudentNode->next;
        }
        if (c._student == nullptr) {
            c._student = _student;
            curr->data = c;
            _student = currStudentNode = nullptr;
            return;
        }
        studentNode *traverseNode = c._student;
        while (traverseNode->next) {
            traverseNode = traverseNode->next;
        }
        int currIdx = traverseNode->data.index;
        traverseNode->next = _student;        
        while (traverseNode->next) {
            traverseNode = traverseNode->next;
            traverseNode->data.index += currIdx;
        }
        _student = currStudentNode = traverseNode = nullptr;
        curr->data = c;
    }
    curr = nullptr;
}

void createSemester(schoolYear &SY) {
    // cout << "\n----------Create semester----------" << endl;
    cout << "Choose a semester to create: \n\t1. Semester 1 \n\t2. Semester 2 \n\t3. Semester 3" << endl;
    int choice;
    cout << "Choose a semester to create: ";
    choice = getChoiceInt();
    if (SY._semester[choice-1].start != "NULL") {
        cout << "This semester has already been created" << endl;
        system("pause");
        system("cls");
        return;
    }
    string tempStart;
    string tempEnd;
    //add date validation
    cout << "Enter start date: ";
    cin >> tempStart;
    cout << "Enter end date: ";
    cin >>tempEnd;
    SY._semester[choice-1].start = tempStart;
    SY._semester[choice-1].end = tempEnd;
    cout << "\nCreated " << SY._semester[choice-1].name << " for school year " << SY._schoolYear << ". The semester starts on " << SY._semester[choice-1].start << ", ends on " << SY._semester[choice-1].end << "\n" << endl; 
    system("pause");
    system("cls");
}

void createCourse(schoolYear &_schoolYear, semester &_semester) {
    // cout << "\n----------Create course----------" << endl;
    course temp;
    cout << "Enter course ID: ";
    cin >> temp.id;
    if (findCourse(_semester._course, temp.id) != nullptr) {
        cout << "This course has already been created in this semester" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Enter course name: ";  
    cin.ignore();
    getline(cin, temp.name);
    cout << "Enter classroom: "; 
    cin >> temp.className;
    cout << "Enter teacher name: ";
    cin.ignore();
    getline(cin, temp.teacher);
    cout << "Enter number of credits: ";
    cin >> temp.credit;
    cout << "Enter maximum number of students: ";
    cin >> temp.max;
    cout << "Enter day of week: ";
    cin >> temp.day;
    cout << "Enter session: ";
    cin >> temp.session;
    addCourseNode(_semester._course, temp);
    courseNode *curr = _semester._course;
    while (curr->next) 
        curr = curr->next;
    cout << "Course created with the following information: " << endl;
    viewCourseInfo(curr->data);
    cout << "\nPlease enroll students to this course with a student list containing the following field: [index,studentID,first_name,last_name,class]" << endl;
    if (addStudentToCourseByFile(_schoolYear, curr->data)) {
        cout << "Students enrolled successfully" << endl;
    }
    else {
        cout << "Error(s) encountered while enrolling students. Please try again later" << endl;
    }
    system("pause");
    system("cls");
}

bool addStudentToCourseByFile(const schoolYear &_schoolYear, course &_course) {
    cout << "Enter file path: ";
    string filePath;
    cin.ignore();
    getline(cin, filePath);
    ifstream inputFile {filePath};
    if (!inputFile) {
        return false;
    }
    classNode *currYearClasses = _schoolYear._class;
    string placeHolder;
    int counter = getNumberOfStudents(_course.enrolled);
    getline(inputFile, placeHolder);    //skip the content line in the csv file
    while (inputFile.good()) {
        //check if the course is full
        if (counter >= _course.max) {
            break;
        }
        student tempStudent;
        string tmp;
        getline(inputFile, tmp, ',');
        if (tmp == "" || tmp == "\n") {
            break;
        } 
        tempStudent.index = stoi(tmp);
        getline(inputFile, tempStudent.id, ',');
        getline(inputFile, tempStudent.firstName, ',');
        getline(inputFile, tempStudent.lastName, ',');
        getline(inputFile, tempStudent.className);

        //check if the current student has been added to the enrolled list -> prevent duplication in input file
        studentNode* checkStudentDuplicate = findStudent(_course.enrolled, tempStudent.id);
        if (checkStudentDuplicate != nullptr) {
            // cout << "This student has already been added in this course" << endl;
            checkStudentDuplicate = nullptr;
            continue;
        }
        //check if the className provided was valid
        classNode *studentClass = findClassName(currYearClasses, tempStudent.className);
        if (studentClass == nullptr) {
            cout << "The class of this student has not been created in the current year" << endl;
            system("pause");
            system("cls");
            continue;
        }
        //check if the current student is in a class
        studentNode *studentObject = findStudent(studentClass->data._student, tempStudent.id);
        if (studentObject == nullptr) {
            cout << "Cannot find this student in the given class!" << endl;
            studentClass = nullptr;
            system("pause");
            system("cls");
            continue;
        }
        //update scoreboard node inside student object contained in a class list -> add new course to that student profile in the class list
        scoreboard tempScoreboard;
        tempScoreboard.courseID = _course.id; 
        tempScoreboard.courseName = _course.name; 
        addScoreboardNode(studentObject->data._course, tempScoreboard);
        tempStudent= studentObject->data;
        tempStudent._course = new scoreboardNode;
        tempStudent._course->data = tempScoreboard;

        // deleteScoreboardList(tempStudent._course);

        addScoreboardNode(tempStudent._course, tempScoreboard);
        addStudentNode(_course.enrolled, tempStudent);
        counter++;
        studentObject = nullptr;
        studentClass = nullptr;
        checkStudentDuplicate = nullptr;
    }
    inputFile.close();
    currYearClasses = nullptr;
    return true;
}

void addStudentToCourseManually(const schoolYear &_schoolYear, course &_course) {
    if (getNumberOfStudents(_course.enrolled) >= _course.max) {
        cout << "This course is currently full" << endl;
        system("pause");
        system("cls");
        return;
    }
    student tempStudent;
    cout << "Enter student ID: ";
    cin >> tempStudent.id;
    if (tempStudent.id.length() != 8) {
        cout << "Invalid ID format!" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Enter student's class: ";
    cin >> tempStudent.className;
    //The criteria of a valid classname ???
    studentNode *checkStudentDuplicate = findStudent(_course.enrolled, tempStudent.id);
    if (checkStudentDuplicate != nullptr) {
        checkStudentDuplicate = nullptr;
        cout << "This student has already enrolled in this course" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode *studentClass = findClassName(_schoolYear._class, tempStudent.className);
    if (studentClass == nullptr) {
        cout << "The class of this student has not been created in the current year" << endl;
        system("pause");
        system("cls");
        return;
    }
    studentNode *checkStudent = findStudent(studentClass->data._student, tempStudent.id);
    if (checkStudent == nullptr) {
        cout << "Incorrect classname or student information" << endl;
        studentClass = nullptr;
        system("pause");
        system("cls");
        return;
    }
    scoreboard tempScoreboard;
    tempScoreboard.courseID = _course.id;
    tempScoreboard.courseName = _course.name;
    addScoreboardNode(checkStudent->data._course, tempScoreboard);
    tempStudent = checkStudent->data;
    tempStudent._course = new scoreboardNode;
    tempStudent._course->data= tempScoreboard;


    addStudentNode(_course.enrolled, tempStudent);
    cout << "\nSuccessfully enrolled this student to the course" << endl;
    system("pause");
    system("cls");
}


//bug: course not be removed from student's scoreboard

void removeStudentFromCourse(schoolYear &_schoolYear, course &_course) {
    // cout << "\n----------Remove student from course----------" << endl;
    cout << "Students enrolled in this course: " << endl;
    displayStudentList(_course.enrolled);
    cout << "Choose a student to remove: ";
    int counter = getNumberOfStudents(_course.enrolled);
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > counter || choice < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    studentNode *curr = _course.enrolled, *prevCur= nullptr;
    int idx = 1;
    while (idx != choice) {
        idx++;
        prevCur = curr;
        curr = curr->next;
    }
    //find the student in to delete the course in his/her scoreboard list
    string className = curr->data.className;
    classNode *studentClass = findClassName(_schoolYear._class, className);
    studentNode *currStudent = findStudent(studentClass->data._student, curr->data.id);
    deleteScoreboardNode(currStudent->data._course, _course.id);

    //delete him/her from the course
    deleteScoreboardList(curr->data._course);
    cout << "\nRemoved student " << curr->data.id << " - " << curr->data.firstName << " " << curr->data.lastName << " from this course" << endl;
    if(idx != 1)
        prevCur->next = curr->next;
    else 
        _course.enrolled = curr->next;
    delete curr;

    system("pause");
    system("cls");
}

void deleteCourse(schoolYear &_schoolYear, course &_course) {
    studentNode* enrolledList = _course.enrolled;
    while (enrolledList) {
        string className = enrolledList->data.className;

        classNode *studentClass = findClassName(_schoolYear._class, className);
        studentNode *currStudent = findStudent(studentClass->data._student, enrolledList->data.id);
        deleteScoreboardNode(currStudent->data._course, _course.id);
        enrolledList = enrolledList->next;
    }
    
    deleteStudentList(_course.enrolled);

    for (int i = 0; i < 3; i++) {
        courseNode* target = findCourse(_schoolYear._semester[i]._course, _course.id);
        if (target != nullptr) {
            deleteCourseNode(_schoolYear._semester[i]._course, _course.id);
            return;
        }
    }

    // cout << "DONE ! << endl";
}

void viewCourseInfo(const course &_course) {
    cout << "\t1. ID: " << _course.id << endl;
    cout << "\t2. Name: " << _course.name << endl;
    cout << "\t3. Classroom: " << _course.className << endl;
    cout << "\t4. Teacher: " << _course.teacher << endl;
    cout << "\t5. Credits: " << _course.credit << endl;
    cout << "\t6. Max number of students: " << _course.max << endl;
    cout << "\t7. Schedule: " << _course.session << " - " << _course.day << endl;
}

//bug: change number of enrolled students when changing course information

void updateCourseInfo(schoolYear &_schoolYear, course &_course) {
    string prevID = _course.id;
    cout << "\n---------Update course info----------" << endl;
    string placeHolder;
    cout << "Current course info:";
    viewCourseInfo(_course);
    //enter new course info
    cout << "\nEnter new information for this course: ";
    cout << "\n\t1. ID: ";
    cin >> _course.id;
    cout << "\t2. Name: "; 
    cin.ignore();
    getline(cin, _course.name);
    cout << "\t3. Classroom: ";
    cin >> _course.className;
    cout << "\t4. Teacher: ";
    cin.ignore();
    getline(cin, _course.teacher);
    //repeatedly asking user to re-enter information if inputted wrongly
    while (true) {
        cout << "\t5. Credits: ";
        cin >> placeHolder;
        _course.credit = stoi(placeHolder);
        if (_course.credit > 5 || _course.credit <= 0) {
            cout << "Invalid input! Please try again!" << endl;
            continue;
        }
        break;
    }
    //repeatedly asking user to re-enter information if input wrongly
    while (true) {
        cout << "\t6. Max number of students: ";
        cin >> placeHolder;
        _course.max = stoi(placeHolder);
        if (_course.max <= 0) {
            cout << "Invalid input! Please try again" << endl;
            continue;
        }
        break;
    }
    cout << "\t7.1 Day: ";
    cin >> _course.day;
    for (int i = 0; i < _course.day.length(); i++) {
        _course.day[i] = toupper(_course.day[i]);
    }
    cout << "\t7.2 Session: ";
    cin >> _course.session;
    //display the new course information
    cout << "Successfully updated course info" << endl;
    cout << "Current course info:";
    cout << "\n\t1. ID: " << _course.id;
    cout << "\n\t2. Name: " << _course.name;
    cout << "\n\t3. Classroom: " << _course.className;
    cout << "\n\t4. Teacher: " << _course.teacher;
    cout << "\n\t5. Credits: " << _course.credit;
    cout << "\n\t6. Max number of students: " << _course.max;
    cout << "\n\t7. Schedule: " << _course.session << " - " << _course.day << endl;
    system("pause");
    studentNode *currStudentNode = _course.enrolled;
    while (currStudentNode) {
        classNode *currClassNode = findClassName(_schoolYear._class, currStudentNode->data.className);
        studentNode *target = findStudent(currClassNode->data._student, currStudentNode->data.id);
        scoreboardNode *currScoreboardNode = findCourseScoreboard(target->data._course, prevID);
        currScoreboardNode->data.courseID = _course.id;
        currScoreboardNode->data.courseName = _course.name;
        currClassNode = nullptr;
        target = nullptr;
        currScoreboardNode = nullptr;
        currStudentNode = currStudentNode->next;
    }
    currStudentNode = nullptr;
}

void updateStudentResult(const schoolYear &_schoolYear, const string &ID, student &source) {
    cout << "\n----------Update student result----------" << endl;
    cout << "Student : " << source.firstName << " " << source.lastName ;
    cout << "\nID : " << source.id << endl;
    cout << "\nCurrent result: ";
    cout << "\n\tOther: " << source._course->data.other;
    cout << "\n\tMidterm: " << source._course->data.midterm;
    cout << "\n\tFinal: " << source._course->data.final;
    cout << "\n\tTotal: " << source._course->data.total << endl;
    cout << "Enter new value for each type of scores: " << endl;
    cout << "\tOther: "; 
    cin >> source._course->data.other;
    cout << "\tMidterm: "; 
    cin >> source._course->data.midterm;
    cout << "\tFinal: "; 
    cin >> source._course->data.final;
    cout << "\tTotal: "; 
    cin >> source._course->data.total;
    classNode *studentClass = findClassName(_schoolYear._class, source.className);
    studentNode *OG = findStudent(studentClass->data._student, source.id);
    scoreboardNode *studentScore = findCourseScoreboard(OG->data._course, ID);

    if (!studentScore) {
        cout << "Error while update student result" << endl;
        system("pause");
        return;
    }
    studentScore->data.final = source._course->data.final;
    studentScore->data.other = source._course->data.other;
    studentScore->data.midterm = source._course->data.midterm;
    studentScore->data.total = source._course->data.total;
    system("pause");
    return ;
}


void updateStudentResult(const schoolYear &_schoolYear, scoreboardNode *curScoreboard, student& source) {
    cout << "\n----------Update student result----------" << endl;
    cout << "Student : " << source.firstName << " " << source.lastName ;
    cout << "\nID : " << source.id << endl;
    cout << "\nCurrent result: ";
    cout << "\n\tOther: " << curScoreboard->data.other;
    cout << "\n\tMidterm: " << curScoreboard->data.midterm;
    cout << "\n\tFinal: " << curScoreboard->data.final;
    cout << "\n\tTotal: " << curScoreboard->data.total << endl;
    cout << "Enter new value for each type of scores: " << endl;
    cout << "\tOther: "; 
    cin >> curScoreboard->data.other;
    cout << "\tMidterm: "; 
    cin >> curScoreboard->data.midterm;
    cout << "\tFinal: "; 
    cin >> curScoreboard->data.final;
    cout << "\tTotal: "; 
    cin >> curScoreboard->data.total;
    

    courseNode* currCourseNode = nullptr;
    for (int i = 0; i < 3; i++) {
        currCourseNode = findCourse(_schoolYear._semester[i]._course, curScoreboard->data.courseID);
        if (currCourseNode) {
            break;
        }
    }
    studentNode *courseStudent = findStudent(currCourseNode->data.enrolled, source.id);
    courseStudent->data._course->data = curScoreboard->data;
    system("pause");
    return ;
}
//Data export functions

void exportStudentInfoList(const string &_schoolYear, const course &_course) {
    string filePath = "Export/"+_schoolYear+"_"+_course.name+".csv";
    ofstream exportFile {filePath};
    exportFile << "Index,ID,Name,Other,Midterm,Final,Total" << endl;
    studentNode *curr = _course.enrolled;
    int index= 1;
    while (curr) {
        exportFile << index++ <<","<<curr->data.id<<","<<curr->data.firstName<<" "<<curr->data.lastName<<",0,0,0,0";
        if(curr->next) {
            exportFile << endl;
        }
        curr = curr->next;
    }
    exportFile.close();
    cout << "Empty scoreboard exported at: " << filePath << endl;
    system("pause");
}

void importStudentScore(const schoolYear& _schoolYear, const course & _course) {
    string path;
    cout << "Enter scoreboard path: " ;
    getline(cin, path);

    ifstream in_file(path);

    if(!in_file) {
        cout << "Could not open the file, please try again!" << endl;
        system("pause");
        return;
    }
    else {
        classNode *currClassList = _schoolYear._class;
        // studentNode* temp = _course.enrolled;
        string placeholder;
        getline(in_file, placeholder);
        while(in_file.good()) {
            getline(in_file, placeholder, ',');
            if (placeholder == "" ||placeholder == "\n") break;
            getline(in_file, placeholder, ',');
            studentNode *temp = findStudent(_course.enrolled, placeholder);
            getline(in_file, placeholder, ',');
            getline(in_file, placeholder, ',');
            temp->data._course->data.other = stod(placeholder);
            getline(in_file, placeholder, ',');
            temp->data._course->data.midterm = stod(placeholder);
            getline(in_file, placeholder, ',');
            temp->data._course->data.final = stod(placeholder);
            getline(in_file, placeholder);
            temp->data._course->data.total = stod(placeholder);
            placeholder.clear();
            classNode *targetClass = findClassName(currClassList, temp->data.className);
            studentNode *targetStudent = findStudent(targetClass->data._student, temp->data.id);
            findCourseScoreboard(targetStudent->data._course, _course.id)->data = temp->data._course->data;
            temp = nullptr;
        }
        in_file.close();
    }
    cout << "Scoreboard imported successfully!" << endl;
    system("pause");
}
//////////////////////Huy - Load and save data////////////////////////

/////////////////////////////// LOAD DATA //////////////////////////////////////////////

semester loadSemester(const string &path, string semesterName) {
    semester curr;
    curr.name = semesterName;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = path + "/" + entry_name;
                if(entry_name != "info.txt") {
                    course hold= loadCourse(full_path);
                    addCourseNode(curr._course, hold);
                }
                else {
                    ifstream in_file {path + "/" + entry_name};
                    getline(in_file, curr.start, ',');
                    getline(in_file, curr.end);
                    in_file.close();
                }
            }
        }
        closedir(directory);
    }
    return curr;
}

course loadCourse(const string &path) {
    course curr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                if(entry_name == "enrolled.txt") {
                    string full_path = path + "/enrolled.txt";
                    loadStudentByFile(curr.enrolled, full_path);
                }
                else {
                    string full_path = path + "/" + entry_name;
                    ifstream in_file {full_path};
                    string hold;
                    getline(in_file, curr.id, ',');
                    getline(in_file, curr.name, ',');
                    getline(in_file, curr.className, ',');
                    getline(in_file, curr.teacher, ',');
                    getline(in_file, hold, ',');
                    if (hold == "" || hold == "\n") hold = "-1";
                    curr.credit = stoi(hold);
                    getline(in_file, hold, ',');
                    if (hold == "" || hold == "\n") hold = "-1";
                    curr.max = stoi(hold);
                    getline(in_file, curr.day, ',');
                    getline(in_file, curr.session);
                    in_file.close();
                }
            }
        }
    }
    closedir(directory);
    return curr;
}

studentNode* loadStudentsFromClass(const string &path ,const string& className) {
    studentNode* curr = nullptr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while(dir_entry = readdir(directory)) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                loadStudentByFile(curr, className, path);
                break;
            }
        }
    }
    closedir(directory);
    return curr;
}

classNode* loadClass(const string &path) {
    classNode* list = nullptr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                _class curr;
                string full_path = path + "/" + entry_name;
                curr._student= loadStudentsFromClass(full_path, entry_name);
                curr.name = entry_name;
                addClassNode(list, curr);
            }
        }
    }
    closedir(directory);
    return list;
}

schoolYear loadSchoolyear(const string &path, const string &sY) 
{
    int index= 0;
    schoolYear curr;
    curr._schoolYear = sY;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {   
        struct dirent *dir_entry;
        while (dir_entry = readdir(directory)) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != ".." ) {
                if(entry_name == "Classes") {
                    string cur_path =  path + '/' + entry_name;
                    curr._class= loadClass(cur_path);
                }
                else {
                    string cur_path = path + "/" + entry_name;
                    curr._semester[index++] = loadSemester(cur_path, entry_name);
                }
            }
        }   
    }
    closedir(directory);
    return curr;
}

void loadStudentByFile(studentNode *&head, const string &path) {
    ifstream in_file {path};
    if (!in_file) {
        cout << "Error while opening file! Please check if the path was correct" << endl;
        return;
    }
    //validate input
    while (!in_file.eof()) {
        student temp;
        temp._course = new scoreboardNode;
        temp._course->next= nullptr;
        string placeHolder="";
        getline(in_file, temp.id, ',');
        getline(in_file, temp.firstName, ',');
        getline(in_file, temp.lastName, ',');
        getline(in_file, temp.className, ',');
        getline(in_file, placeHolder, ',');
        temp._course->data.other= stod(placeHolder);
        getline(in_file, placeHolder, ',');
        temp._course->data.midterm= stod(placeHolder);
        getline(in_file, placeHolder, ',');
        temp._course->data.final= stod(placeHolder);
        getline(in_file, placeHolder);
        temp._course->data.total= stod(placeHolder);
        addStudentNode(head, temp);
    }
    in_file.close();
}

void loadStudentByFile(studentNode *&head, const string &classname, const string &path) {
    DIR* directory = opendir(path.c_str());
    int idx = 1;
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = path + "/" + entry_name ;
                ifstream in_file {full_path + "/info.txt"};
                if (!in_file) {
                    cout << "Error while opening file! Please check if the path was correct" << endl;
                    return;
                }
                student temp;
                string placeHolder;
                temp.index = idx++;
                getline(in_file, temp.id, ',');
                getline(in_file, temp.firstName, ',');
                getline(in_file, temp.lastName, ',');
                getline(in_file, temp.gender, ',');
                getline(in_file, temp.dob, ',');
                getline(in_file, temp.socialid);
                temp.className = classname;
                in_file.close();
                ifstream in_file1 {full_path + "/Scoreboard.txt"};
                // cout << "\n" << full_path + "/Scoreboard.txt" << endl;
                if(in_file1) {
                    while(!in_file1.eof()) {
                        scoreboard curr;
                        string hold;
                        getline(in_file1, curr.courseID, ',');
                        getline(in_file1, curr.courseName, ',');
                        getline(in_file1, hold, ',');
                        if (hold == "" || hold == "\n") hold = "-1.0";
                        curr.other = stod(hold);
                        getline(in_file1, hold, ',');
                        if (hold == "" || hold == "\n") hold = "-1.0";
                        curr.midterm = stod(hold);
                        getline(in_file1, hold, ',');
                        if (hold == "" || hold == "\n") hold = "-1.0";
                        curr.final = stod(hold);
                        getline(in_file1, hold);
                        if (hold == "" || hold == "\n") hold = "-1.0";
                        curr.total = stod(hold);
                        hold.clear();
                        addScoreboardNode(temp._course, curr);
                    }
                    in_file1.close();
                }
                addStudentNode(head, temp);
            }
        }
    }
    closedir(directory);
    return;
}

void loadStudentScoreboard(scoreboardNode* &scoreboardList, const string &path) {
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = path + "/" + entry_name + "/Scoreboard.txt";
                cout << "\n" << full_path << endl;
                ifstream in_file {full_path};
                if(!in_file) {
                    cout << "Error while opening file! Please try again later!" << endl;
                    return;
                }
                while(!in_file.eof()) {
                    scoreboard curr;
                    string hold;
                    getline(in_file, curr.courseID, ',');
                    getline(in_file, curr.courseName, ',');
                    getline(in_file, hold, ',');
                    if (hold == "" || hold == "\n") hold = "-1.0";
                    curr.other = stod(hold);
                    getline(in_file, hold, ',');
                    if (hold == "" || hold == "\n") hold = "-1.0";
                    curr.midterm = stod(hold);
                    getline(in_file, hold, ',');
                    if (hold == "" || hold == "\n") hold = "-1.0";
                    curr.final = stod(hold);
                    getline(in_file, hold);
                    if (hold == "" || hold == "\n") hold = "-1.0";
                    curr.total = stod(hold);
                    hold.clear();
                    addScoreboardNode(scoreboardList, curr);
                }
            in_file.close();
            }
        }
    }
    closedir(directory);
    return;
}

void delete_directory(const string& path)
{
    DIR* directory = opendir(path.c_str());
    if (directory != NULL)
    {
        struct dirent* dir_entry;
        while ((dir_entry = readdir(directory)) != NULL)
        {
            DIR* sub_folder = NULL;
            string entry_name = dir_entry->d_name;
            if (entry_name != "." && entry_name != "..")
            {
                string full_path = path + "/" + entry_name;
                if (sub_folder = opendir(full_path.c_str()))
                {
                    closedir(sub_folder);
                    delete_directory(full_path);
                    rmdir(full_path.c_str());
                }
                else 
                {   
                    ifstream ifs {full_path};
                    if(ifs) {
                        ifs.close();
                        remove(full_path.c_str());
                    }
                }
            }
        }
        closedir(directory);
    }
    else
    {
        cerr << "Error: Failed to open directory " << path << endl;
    }
    return;
}


/////////////////////////////// SAVE DATA //////////////////////////////////////////////


void writeStudentInClass(studentNode *studentList, const string &path) {
    while(studentList) {
        string full_path= path + "/" + to_string(studentList->data.index) + '.' + studentList->data.id;
        mkdir(full_path.c_str());
        ofstream out_file {full_path + "/info.txt"};
        out_file << studentList->data.id << ",";
        out_file << studentList->data.firstName << ",";
        out_file << studentList->data.lastName << ",";
        out_file << studentList->data.gender << ",";
        out_file << studentList->data.dob << ',';
        out_file << studentList->data.socialid ;

        out_file.close();

        if(!studentList->data._course) {
            studentList = studentList->next;
            continue;
        }


        ofstream out_file1 {full_path + "/Scoreboard.txt"};
        scoreboardNode* tempCourseList = studentList->data._course;
        while(tempCourseList) {
            out_file1 << tempCourseList->data.courseID << ",";
            out_file1 << tempCourseList->data.courseName << ",";
            out_file1 << tempCourseList->data.other << ",";
            out_file1 << tempCourseList->data.midterm << ",";
            out_file1 << tempCourseList->data.final << ",";
            out_file1 << tempCourseList->data.total;
            if(tempCourseList->next)
                out_file1 << endl;

            tempCourseList= tempCourseList->next;
        }
        out_file1.close();

        studentList = studentList->next;
    }
    return;
}


void writeCourseEnrolls(courseNode* courseList, const string &path) {
    if(!courseList->data.enrolled) {
        return;
    }
    ofstream out_file {path};

    studentNode* tempEnrolledList = courseList->data.enrolled;
    while(tempEnrolledList) {
        out_file << tempEnrolledList->data.id << "," << tempEnrolledList->data.firstName << "," << tempEnrolledList->data.lastName << "," << tempEnrolledList->data.className << ",";
        out_file << tempEnrolledList->data._course->data.other << ",";
        out_file << tempEnrolledList->data._course->data.midterm << ",";
        out_file << tempEnrolledList->data._course->data.final << ",";
        out_file << tempEnrolledList->data._course->data.total;
        if(tempEnrolledList->next)
            out_file << endl;

        tempEnrolledList= tempEnrolledList->next;

    }
    out_file.close();
    return;
}

void writeCourse(courseNode* courseList , const string &path) {
    ofstream out_file; 
    while(courseList) {
        ////create course folder
        string full_path = path + "/" + courseList->data.id;
        mkdir((full_path).c_str());
        ////write enrolls to course
        writeCourseEnrolls(courseList, full_path + "/enrolled.txt");
        ////write course info to file
        out_file.open(full_path + "/info.txt");
        out_file << courseList->data.id << "," << courseList->data.name << "," << courseList->data.className << "," << courseList->data.teacher << "," << courseList->data.credit << "," << courseList->data.max << "," << courseList->data.day << "," << courseList->data.session;
        out_file.close();
        
        courseList= courseList->next;
    }

    return;
}

void writeClass(classNode* classList ,const string &path) {
    while(classList) {
        string full_path = path + "/" + classList->data.name;
        mkdir((full_path).c_str());
        writeStudentInClass(classList->data._student, full_path);

        classList = classList->next;
    }

    return;
}

void writeSchoolyear(string path, schoolYear sY)  
{
    path = path + "/" + sY._schoolYear;
    ////create school year folder
    mkdir(path.c_str());
    ////Write semesters to folder
    for(int i= 0; i< 3; i++) {
        ofstream out_file;
        string full_path = path + "/" + sY._semester[i].name;
        ////create semester folder
        mkdir(full_path.c_str());
        ////create info file of semester
        out_file.open(full_path + "/info.txt");
        out_file << sY._semester[i].start << "," << sY._semester[i].end;
        ////write courses to semester's folder
        writeCourse(sY._semester[i]._course, full_path);
        out_file.close();
    }

    mkdir((path + "/Classes").c_str());
    writeClass(sY._class, path + "/Classes");

}

void writeDataFolder(const string &path, schoolYearNode* &SYlist) {
    delete_directory(path);
    schoolYearNode* schoolYearList= SYlist;
    while(schoolYearList) {
        writeSchoolyear(path, schoolYearList->data);
        schoolYearList= schoolYearList->next;
    }
    // deleteSchoolYearList(schoolYearList);
}

void autoSaveSchoolyear(schoolYear curSchoolyear) {
    string full_path = "Data/" + curSchoolyear._schoolYear;
    cout << full_path << endl;
    delete_directory(full_path);
    rmdir(full_path.c_str());
    writeSchoolyear("Data", curSchoolyear);
    return;
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

bool createStaffAccount(staffInfo &newStaff) {
    cout << "----------------Create new staff account--------------------" << endl;
    cout << "Input staff's full name : "; 
    getline(cin, newStaff.name);
    newStaff.mail = createEmail(newStaff.name);
    return true;
}

schoolYearNode* loadDataFolder(const string &path) {
    schoolYearNode* schoolYearList= nullptr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {   
        struct dirent *dir_entry;
        while (dir_entry = readdir(directory)) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = path + "/" + entry_name;
                schoolYear curr= loadSchoolyear(full_path, entry_name);
                addSchoolYearNode(schoolYearList, curr);
            }
        }
    }
    closedir(directory);
    return schoolYearList;
}


void loadUserAccount (stringNode* &head) {
    ifstream in_file("credential.txt");

    if(!in_file) {
        cout << "Could not open the file ! " << endl;
        return;
    }
    string temp;
    while(getline(in_file, temp)) {
        addStringNode(head, temp);
    }

    in_file.close();
    return;
}

void loadStaffInfo(staffNode *& staffList) {
    ifstream in_file("staff.txt");

    string temp;
    while(in_file.good()) {
        staffInfo tempStaff;
        getline(in_file, tempStaff.name, ',');
        getline(in_file, tempStaff.mail);
        addStaffNode(staffList, tempStaff);
    }
    return;
}

void autoSaveCredential(stringNode *accountList) {
    string path = "credential.txt";

    ofstream out_file(path, ios::out);
    while(accountList) {
        out_file << accountList->data << endl;
        accountList = accountList->next;
    }

    return;
}

bool changeAccountPassword(stringNode* accountList, string newPassword, string userAccount) {
    while(accountList) {
        if(userAccount == accountList->data) {
            string temp(accountList->data);
            temp= temp.substr(0, temp.find_last_of(':') + 1);
            temp+=newPassword;
            accountList->data= temp;
            autoSaveCredential(accountList);
            return true;
        }
        accountList= accountList->next;
    }
    return false;
}

//Work flow
schoolYear programStart(schoolYearNode *&head) {
    if (head == nullptr) {
        cout << "Database is empty! Please create a new school year to continue!" << endl;
        head = new schoolYearNode;
        if (!createSchoolYear(head, head->data)) head = nullptr;
    }
    system("cls");
    schoolYearNode *currSchoolYearNode = head;
    cout << "Choose a schoolyear to work on: " << endl;
    int idx = 2;
    cout << "\t1. Create new school year" << endl;
    while (currSchoolYearNode) {
        cout << "\t" << idx++ << ". " << currSchoolYearNode->data._schoolYear << endl;
        currSchoolYearNode = currSchoolYearNode->next;
    }
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice <= idx && choice >= 1) {
            break;
        }
        cout << "Invalid option! Please try again" << endl;
    }
    if (choice == 1) {
        schoolYear newSY;
        if (!createSchoolYear(head, newSY)) {
            cout << "Failed to created school year! Please try again\n" << endl;
            system("pause");
            return programStart(head);
        }
        addSchoolYearNode(head, newSY);
        return newSY;
    }
    currSchoolYearNode = head;
    idx = 2;
    while (idx != choice) {
        currSchoolYearNode = currSchoolYearNode->next;
        idx++;
    }
    return currSchoolYearNode->data;
}

void mainMenuStaff(schoolYearNode *&head) {
    schoolYear _schoolYear = programStart(head);
    while (true) {
        system("cls");
        cout << "\n---------Main menu - staff---------" << endl;
        cout << "\t1. View profile" << endl;
        cout << "\t2. View current school year information" << endl;
        cout << "\t3. Update current school year information" << endl;
        cout << "\t4. Load another school year" << endl;
        cout << "\t5. View scoreboard" << endl;
        cout << "\t6. Update scoreboard" << endl;
        cout << "\t7. Log out" << endl;
        cout << "\t8. Save and close program" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 8 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            // void viewProfileStaff(staffInfo curStaff)
            cout << "In development lol" << endl;
        }
        else if (choice == 2) {
            viewCurrentYearInfo(_schoolYear);
        }
        else if (choice == 3) {
            updateCurrentYearInfo(_schoolYear);
        }
        else if (choice == 4) {
            _schoolYear = programStart(head);
        }
        else if (choice == 5) {
            viewScoreBoardUI(_schoolYear);
        }
        else if (choice == 6) {
            updateScoreboardUI(_schoolYear);
        }
        else if (choice == 7) {
            cout << "In development lol" << endl;
        }
        else if (choice == 8) {
            cout << "Database reloaded!\nClosing program..." << endl;
            writeDataFolder("Data", head);
            return;
        }
        else {
            cout << "Not a valid option!\n" << endl;
            system("pause");
        }
    }
}

void updateScoreboardUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester is not created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    cout << "----------Import scoreboard----------" << endl;
    cout << "\t1. Export empty course scoreboard" << endl;
    cout << "\t2. Import scoreboard for this course" << endl;
    cout << "\t3. Return to main menu" << endl;
    cout << "Your choice: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > 3 || choice3 < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    switch (choice3) {
        case 1:
            exportStudentInfoList(_schoolYear._schoolYear, currCourseNode->data);
            break;
        case 2:
            //export
            importStudentScore(_schoolYear, currCourseNode->data);
            break;
        case 3:
            return;
    }
}

void viewScoreBoardUI(schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "----------View Scoreboard----------" << endl;
        cout << "\t1. View class scoreboard" << endl;
        cout << "\t2. View course scoreboard" << endl;
        cout << "\t3. View student scoreboard" << endl;
        cout << "\t4. Return to main menu" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        switch (choice) {
            case 1:
                viewClassScoreboardUI(_schoolYear);
                break;
            case 2:
                viewCourseScoreBoardUI(_schoolYear);
                break;
            case 3:
                viewStudentResultUI(_schoolYear);
                break;
            case 4:
                return;
        }
    }
}

void viewStudentResultUI(schoolYear &_schoolYear) {
    cout << "Enter student ID: ";
    string id;
    cin >> id;
    if (id.length() != 8) {
        cout << "Wrong ID format" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode* currClassNode = _schoolYear._class;
    studentNode* target = nullptr;
    while (currClassNode) {
        target = findStudent(currClassNode->data._student, id);
        if (target != nullptr) {
            break;
        }
        currClassNode = currClassNode->next;
    }
    if (target == nullptr && currClassNode == nullptr) {
        cout << "Cannot find student in current school year" << endl;
        system("pause");
        system("cls");
        return;
    }
    viewStudentResult(target->data);
}

void viewCourseScoreBoardUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester is not created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    viewCourseScoreboard(currCourseNode->data.enrolled, currCourseNode->data.id);
}

void viewClassScoreboardUI(const schoolYear &_schoolYear) {
    classNode *currClassNode = _schoolYear._class;
    int idx = 1;
    while (currClassNode) {
        cout << "\t" << idx++ << ". " << currClassNode->data.name << endl;
        currClassNode = currClassNode->next;
    }
    cout << "Choose a class to view scoreboard or input \"0\" to cancel: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 0) {
        return;
    }
    idx = 1;
    currClassNode = _schoolYear._class;
    while (idx != choice) {
        currClassNode = currClassNode->next;
        idx++;
    }
    viewWholeClassScoreboard(currClassNode->data);
}

void viewWholeClassScoreboard(const _class &source) {
    scoreboardNode *courseName = nullptr;
    studentNode *currStudent = source._student;
    while (currStudent) {
        scoreboardNode* currScoreboard = currStudent->data._course;
        while (currScoreboard) {
            if (findCourseScoreboard(courseName, currScoreboard->data.courseID) == nullptr) {
                scoreboard tmp = currScoreboard->data;
                addScoreboardNode(courseName, tmp);
            }
            currScoreboard = currScoreboard->next;
        }
        currStudent = currStudent->next;
    }
    cout << setw(5) << left << "No. " << setw(20) << "Student ID" << setw(30) << "Full name";
    scoreboardNode *curr = courseName;
    while (curr) {
        cout << setw(30) << left << curr->data.courseName;
        curr = curr->next;
    } 
    cout << endl;
    curr = courseName;
    currStudent = source._student;
    while (currStudent) {
        string fullName = currStudent->data.firstName + " " + currStudent->data.lastName;
        cout << setw(5) << left << currStudent->data.index << setw(20) << currStudent->data.id << setw(30) << fullName;
        while (curr) {
            scoreboardNode *tmp = findCourseScoreboard(currStudent->data._course, curr->data.courseID);
            cout << setw(30) << left << ((tmp) ? to_string(tmp->data.total).substr(0,3):"X") ;
            curr = curr->next;
        } 
        currStudent = currStudent->next;
        curr = courseName;
        cout << endl;
    }
    system("pause");
}

///View class scoreboard

void viewProfileStudent(student curStudent) {
    // system("cls");
    cout << "--------------PROFILE-------------" << endl;
    cout << "Full name : " << curStudent.firstName << curStudent.lastName << endl;
    cout << "Student's ID : " << curStudent.id << endl;
    cout << "Student's gender : " << curStudent.gender << setw(10)<< left << "Student's date of birth : " << curStudent.dob << endl;
    cout << "Student's social ID : " << curStudent.socialid << endl;
    system("pause");
}

void viewProfileStaff(staffInfo curStaff) {
    // system("cls");
    cout << "------------------PROFILE--------------" << endl;
    cout << "Full name : " << curStaff.name << endl;
    cout << "Email : " << curStaff.mail << endl;
    system("pause");
}

void viewCurrentYearInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "\n---------View current school year information---------" << endl;
        cout << "\t1. View semesters information" << endl;
        cout << "\t2. View classes information" << endl;
        cout << "\t3. Back to main menu" << endl;
        int choice;
        cout << "Your choice: ";
        while (true) {
            choice = getChoiceInt();
            if (choice > 3 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            if (viewSemestersInfo(_schoolYear)) {
                return;
            }
            else {
                continue;
            }
        }
        else if (choice == 2) {
            viewClassesInfo(_schoolYear);
        }
        else if (choice == 3) {
            return;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            system("pause");
        }
    }
}

//if return true -> return straight to main menu
//if return false -> return to previous menu only

void viewCourseScoreboard(studentNode *_student, const string &ID) {
    // cout << "---View scoreboard---" << endl;
    cout << endl;
    cout << setw(5) << left << "No. " << setw(30) << left << "Student ID" << setw(40) << left << "Full name" << setw(10) << left << "Class" << setw(10) << left << "Other" << setw(10) << "Midterm" << setw(10) << "Final" << setw(10)<< "Total" << endl; 
    studentNode *curr = _student;
    int index = 1;
    while (curr) {
        // scoreboardNode *tmp = findCourseScoreboard(curr->data._course, ID);
        string fullName = curr->data.firstName + " " + curr->data.lastName;
        cout << setw(5) << left << index++ << setw(30) << left << curr->data.id << setw(40) << left << fullName << setw(10) << left << curr->data.className << setw(10) << curr->data._course->data.other << setw(10) << curr->data._course->data.midterm << setw(10) << curr->data._course->data.final << setw(10) << curr->data._course->data.total << endl; 
        curr = curr->next;
    }
    system("pause");
    // system("cls");
}

bool viewSemestersInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "Choose a semester: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
        }    
        cout << "\t4. Cancel" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 4) return false;
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
            system("pause");
            return false;
        }
        cout << "---Semester information---" << endl;
        cout << "\tSemester: " << _schoolYear._semester[choice].name << endl;
        cout << "\tStart date: " << _schoolYear._semester[choice].start << endl;
        cout << "\tEnd date: " << _schoolYear._semester[choice].end << endl;
        courseNode* curr = _schoolYear._semester[choice]._course;
        cout << "\tCourses: " << endl;
        while (curr) {
            cout << "\t\t" << curr->data.id << " - " << curr->data.name << endl;
            curr = curr->next;
        }
        int choice2;
        cout << "--------------------------" << endl;
        cout << "\t1. View detailed information of a course" << endl;
        cout << "\t2. Return to previous menu" << endl;
        cout << "\t3. Return to main menu" << endl;
        cout << "\nYour choice: ";
        while (true) {
            choice2 = getChoiceInt();
            if (choice2 > 3 || choice2 < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice2 == 1) {
            //display courses for user to choose 
            cout << "Choose a course from the list below: " << endl;
            courseNode* currCourseNode = _schoolYear._semester[choice]._course;
            if (currCourseNode == nullptr) {
                cout << "No course has been added for this semester" << endl;
                system("pause");
                return false;
            }
            int idx = 1;
            while (currCourseNode) {
                cout << "\t" << idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
                idx++;
            }
            int choice3;
            cout << "Your choice: ";
            while (true) {
                choice3 = getChoiceInt();
                if (choice3 > --idx || choice3 < 1) {
                    cout << "Invalid option" << endl;
                    continue;
                }
                break;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                currCourseNode = currCourseNode->next;
                idx++;
            }
            viewDetailedCourseInfo(currCourseNode->data);
            break;
        }
        else if (choice2 == 2) {
            return false;
        }
        else if (choice2 == 3) {
            return true;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        // system("pause");
    }
    return false;
}

void viewClassesInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "Classes created for this school year: " << endl;
        classNode *curr = _schoolYear._class;
        int idx = 1;
        while (curr) {
            cout << "\t" << idx << ". " << curr->data.name << " - " << getNumberOfStudents(curr->data._student) << " students" << endl;
            curr = curr->next;
            idx++;
        }
        cout << "\n----------View Class Info----------" << endl;
        cout << "\t1. View detailed info of a class" << endl;
        cout << "\t2. View all students of this school year" << endl;
        cout << "\t3. View information of a student" << endl; 
        cout << "\t4. Return to previous menu" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            cout << "Please choose a class to view: ";
            int choosen;
            while (true) {
                choosen = getChoiceInt();
                if (choosen > idx || choosen < 1) {
                    cout << "Invalid option" << endl;
                    system("pause");
                    continue;
                }
                break;
            }
            idx = 1;
            curr = _schoolYear._class;
            while (idx != choosen) {
                curr = curr->next;
                idx++;
            }
            viewDetailedClassInfo(curr->data);
        }
        else if (choice == 2) {
            viewSchoolYearAllStudent(_schoolYear);
        }
        else if (choice == 3) {
            viewStudentInfo(_schoolYear);
        }
        else if (choice == 4) {
            curr = nullptr;
            return;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
    }
}

void viewDetailedClassInfo(const _class &source) {
    //view scoreboard of the whole class and overall GPA
    cout << "\n----------View detailed class info----------" << endl;
    cout << "Class: " << source.name << endl;
    cout << "Students of this class: " << endl;
    displayStudentList(source._student);
    cout << endl;
    system("pause");
    system("cls");
}

void viewSchoolYearAllStudent(const schoolYear &_schoolyear) {
    cout << setw(30) << left << "Student ID" << setw(20) << right << "Full name" << setw(10) << right << "Class" << endl;
    cout << "---------------------------------------------" << endl;
    classNode *currClassNode = _schoolyear._class;
    while (currClassNode) {
        studentNode *currStudentNode = currClassNode->data._student;
        while (currStudentNode) {
            string studentFullName = currStudentNode->data.firstName + " " + currStudentNode->data.lastName;
            cout << setw(30) << left << currStudentNode->data.id << setw(20) << studentFullName << setw(10) << right << currClassNode->data.name << endl;
            currStudentNode = currStudentNode->next;
        }
        currStudentNode = nullptr;
        currClassNode = currClassNode->next;
    }
    currClassNode = nullptr;
    system("pause");
    system("cls");
}

void viewStudentResult(const student &source) {
    // cout << "View student result" << endl;

    cout << setw(15) << left << "Course ID" << setw(30) << left << "Course name" << setw(10) << "Other" << setw(10) << "Midterm" << setw(10) << "Final" << setw(10) << "Total" << endl;
    scoreboardNode *curr = source._course;
    while (curr) {
        cout << setw(15) << left << curr->data.courseID << setw(30) << left << curr->data.courseName << setw(10) << curr->data.other << setw(10) << curr->data.midterm << setw(10) << curr->data.final << setw(10) << curr->data.total << endl;
        curr = curr->next;
    }
    system("pause");
}

void viewStudentInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        // cout << "---View Student Information---" << endl;
        cout << "Enter ID of the student you want to find or \"0\" to stop: ";
        string ID;
        cin >> ID;
//Check studentID input
        if (ID == "0") {
            return;
        }
        //check ID validity here
        classNode* currClassNode = _schoolYear._class;
        bool found = false;
        while (currClassNode && !found) {
            studentNode* target = findStudent(currClassNode->data._student, ID);
            if (target != nullptr) {
                cout << "Student ID: " << ID << endl;
                cout << "Student name: " << target->data.firstName << " " << target->data.lastName << endl;
                cout << "Class: " << currClassNode->data.name << endl;
                cout << "Personal information: " << endl;
                cout << "\tBirthday: " << target->data.dob << endl;
                cout << "\tGender: " << target->data.gender << endl;
                cout << "\tSocial ID: " << target->data.socialid << endl;
                cout << "Courses enrolled and result: " << endl;
                scoreboardNode *currScoreboardNode = target->data._course;
                if (currScoreboardNode == nullptr) {
                    cout << "\tStudent has not enrolled in any courses" << endl;
                }
                else 
                    viewStudentResult(target->data);
                target = nullptr;
                currClassNode = nullptr;
                // system("pause");
                found = true;
                break;
            }
            currClassNode = currClassNode->next;
        }
        if (!found) {
            cout << "There is no student associated with the provided student ID! Please try again" << endl;
            currClassNode = nullptr;
            // system("pause");
            system("cls");
            continue;
        }
        currClassNode = nullptr;
    }
}

void viewDetailedCourseInfo(const course &_course) {
    // cout << "\n---View detailed course information---" << endl;
    viewCourseInfo(_course);
    viewCourseScoreboard(_course.enrolled, _course.id);
}

void updateCurrentYearInfo(schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "----------Modify Current School Year Information----------" << endl;
        cout << "\t1. Create new semester" << endl;
        cout << "\t2. Create new course" << endl;
        cout << "\t3. Update semesters information" << endl;
        cout << "\t4. Update course information" << endl;
        cout << "\t5. Update student result" << endl;
        cout << "\t6. Return to main menu" << endl;  
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 6 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        switch (choice) {
            case 1:
                createSemester(_schoolYear);
                break;
            case 2: 
                createNewCourseUI(_schoolYear);
                break;
            case 3:
                updateSemesterInfo(_schoolYear);
                break;
            case 4:
                updateCourseInfoUI(_schoolYear);
                break;
            case 5:
                updateStudentResultUI(_schoolYear);
                break;
            case 6:
                return;
            default:
                cout << "Invalid option!" << endl;
        }
    }
}

bool updateStudentResultUI(schoolYear &_schoolYear) {
    system("cls");
    cout << "\t1. Choose from classes" << endl;
    cout << "\t2. Choose from courses" << endl;
    cout << "\t3. Enter student ID" << endl;
    cout << "\t4. Return to previous menu" << endl;
    cout << "\t5. Return to main menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 6 || choice < 1) {
            cout << "Invalid choice!" << endl;
            continue;
        }
        break;
    }
    switch (choice) {
        case 1: 
            updateStudentResultFromClass(_schoolYear);
            break;
        case 2:
            updateStudentResultFromCourse(_schoolYear);
            break;
        case 3:
            updateStudentResultWithID(_schoolYear);
            break;
        case 4:
            return false;
        case 5:
            return true;
    }
    cout << "Out" << endl;
    autoSaveSchoolyear(_schoolYear);
    return false;
}

void updateStudentResultWithID(schoolYear &_schoolYear) {
    cout << "Enter student ID: ";
    string ID;
    cin >> ID;
    if (ID.length() != 8) {
        cout << "Wrong ID format!" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode *currClassNode = _schoolYear._class;
    studentNode *target = nullptr;
    while (currClassNode) {
        target = findStudent(currClassNode->data._student, ID);
        if (target) {
            break;
        }
        currClassNode = currClassNode->next;
    }
    if (target == nullptr && currClassNode == nullptr) {
        cout << "Cannot find a student with such student ID" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Courses this student has enrolled in: " << endl;
    scoreboardNode *currScoreboardNode = target->data._course;
    if (currScoreboardNode == nullptr) {
        cout << "This student has not enrolled in any courses" << endl;
        system("pause");
        system("cls");
        return;
    }
    int idx = 1;
    while (currScoreboardNode) {
        cout << "\t" << idx++ << ". " << currScoreboardNode->data.courseID << "\t" << currScoreboardNode->data.courseName << endl;
        currScoreboardNode = currScoreboardNode->next;
    }
    cout << "Choose a course to update result or input \"0\" to cancel: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 0) {
        return;
    }
    idx = 1;
    currScoreboardNode = target->data._course;
    while (idx != choice) {
        currScoreboardNode = currScoreboardNode->next;
        idx++;
    }

    updateStudentResult(_schoolYear, currScoreboardNode, target->data);
}

void updateStudentResultFromCourse(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    displayStudentList(currCourseNode->data.enrolled);
    int counter = getNumberOfStudents(currCourseNode->data.enrolled);
    cout << "Choose a student or input \"0\" to cancel: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > counter || choice3 < 0) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice3 == 0) 
        return;
    studentNode *currStudentNode = currCourseNode->data.enrolled;
    idx = 1;
    while (idx!=choice3) {
        currStudentNode = currStudentNode->next;
        idx++;
    }
    updateStudentResult(_schoolYear, currCourseNode->data.id, currStudentNode->data);
}

void updateStudentResultFromClass(schoolYear &_schoolYear) {
    classNode* currClassNode = _schoolYear._class;
    int idx = 1;
    while (currClassNode) {
        cout << "\t" << idx++ << ". " << currClassNode->data.name << endl;
        currClassNode = currClassNode->next;
    }
    cout << "Choose a class: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 1) {
            cout << "Invalid choice" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    currClassNode = _schoolYear._class;
    while (idx != choice) {
        currClassNode = currClassNode->next;
        idx++;
    }
    //system clear here
    studentNode* currStudentNode  = currClassNode->data._student;
    cout << "Students in this class: " << endl;
    displayStudentList(currStudentNode);
    cout << "Choose a student from this class: ";
    int choice2;
    int counter = getNumberOfStudents(currStudentNode);
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 < 1 || choice2 > counter) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    while (idx != choice2) {
        currStudentNode = currStudentNode->next;
        idx++;
    }
    scoreboardNode *currScoreboardNode = currStudentNode->data._course;
    cout << "Courses of this student: " << endl;
    idx = 1;
    while (currScoreboardNode) {
        cout << "\t" << idx++ << ". " << currScoreboardNode->data.courseID << "\t" << currScoreboardNode->data.courseName << endl;
        currScoreboardNode = currScoreboardNode->next;
    }
    cout << "Choose a course to modify result: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 < 1 || choice3 > idx) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    currScoreboardNode = currStudentNode->data._course;
    idx = 1;
    while (idx != choice3) {
        currScoreboardNode = currScoreboardNode->next;
        idx++;
    }
    //change the result for the student object in classes
    updateStudentResult(_schoolYear, currScoreboardNode->data.courseID, currStudentNode->data);
    //update the result for the student object in course
    courseNode *currCourseNode = nullptr;
    for (int i = 0; i < 3; i++) {
        currCourseNode = findCourse(_schoolYear._semester[i]._course, currScoreboardNode->data.courseID);
        if (currCourseNode) {
            break;
        }
    }
    studentNode *courseStudent = findStudent(currCourseNode->data.enrolled, currStudentNode->data.id);
    courseStudent->data._course->data = currScoreboardNode->data;
}

bool updateCourseInfoUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Cancel" << endl;
    int choice;
    cout << "Your choice: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) {
        return false;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        system("pause");
        system("cls");
        return false;
    }
    if (_schoolYear._semester[choice]._course == nullptr) {
        cout << "No course has been created for this semester" << endl;
        system("pause");
        system("cls");
        return false;
    }
    cout << "Current semester's courses: " << endl;
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    cout << "Choose a course to update information: ";
    int choice2;
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > --idx || choice2 < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        idx++;
        currCourseNode = currCourseNode->next;
    }
    viewCourseInfo(currCourseNode->data);
    cout << "Choose an action: " << endl;
    cout << "\t1. Update course information" << endl;
    cout << "\t2. Add student to this course" << endl;
    cout << "\t3. Remove a student from this course" << endl;
    cout << "\t4. Import scoreboard for this course" << endl;
    cout << "\t5. Delete this course" << endl;
    cout << "\t6. Return to previous menu" << endl;
    cout << "\t7. Return to main menu" << endl;
    int choice3;
    cout << "Your choice: ";
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > 7 || choice3 < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    switch (choice3) {
        case 1:
            updateCourseInfo(_schoolYear, currCourseNode->data);
            break;
        case 2:
            addStudentToCourseManually(_schoolYear, currCourseNode->data);
            break;
        case 3: 
            removeStudentFromCourse(_schoolYear, currCourseNode->data);
            break;
        case 4:
            importStudentScore(_schoolYear, currCourseNode->data);
            break;
        case 5:
            deleteCourse(_schoolYear, currCourseNode->data);
            break;
        case 6:
            return false;
        case 7:
            return false;
    }
    autoSaveSchoolyear(_schoolYear);
    return false;
}

void createNewCourseUI(schoolYear &_schoolYear) {
    // cout << "---Create new course---" << endl;
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Cancel" << endl;
    int choice;
    cout << "Your choice: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) {
        return;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        system("pause");
        system("cls");
        return;
    }
    if (_schoolYear._semester[choice]._course == nullptr) {
        cout << "No course has been created for this semester" << endl;
    }
    else {
        cout << "Current semester's courses: " << endl;
        courseNode *currCourseNode = _schoolYear._semester[choice]._course;
        while (currCourseNode) {
            cout << "\t" << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
            currCourseNode = currCourseNode->next;
        }
    }
    createCourse(_schoolYear, _schoolYear._semester[choice]);
}

bool updateSemesterInfo(schoolYear &_schoolYear) {
    while (true) {
        cout << "Choose a semester: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
        }    
        cout << "\t4. Cancel" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice == 4) return false;
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
            system("pause");
            system("cls");
            return false;
        }
        cout << "----------Current semester information----------" << endl;
        cout << "\tSemester: " << _schoolYear._semester[choice].name << endl;
        cout << "\tStart date: " << _schoolYear._semester[choice].start << endl;
        cout << "\tEnd date: " << _schoolYear._semester[choice].end << endl;
        courseNode* curr = _schoolYear._semester[choice]._course;
        cout << "\tCourses: " << endl;
        while (curr) {
            cout << "\t\t" << curr->data.id << " - " << curr->data.name << endl;
            curr = curr->next;
        }
        cout << "------------------------------------------------" << endl;
        cout << "\t1. View detailed information of a course" << endl;
        cout << "\t2. Change semester start date" << endl;
        cout << "\t3. Change semester end date" << endl;
        cout << "\t4. Return to previous menu" << endl;
        cout << "\t5. Return to main menu" << endl;
        cout << "\nYour choice: ";
        int choice2;
        while (true) {
            choice2 = getChoiceInt();
            if (choice2 > 5 || choice2 < 1) {
                cout << "Invalid option" << endl;
                continue;
            }
            break;
        }
        if (choice2 == 1) {
            cout << "----------View course detailed information----------" << endl;
            int idx = 1;
            courseNode *currCourseNode = _schoolYear._semester[choice]._course;
            while (currCourseNode) {
                cout << "\t" << idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
                idx++;
            }
            cout << "Your choice: ";
            int choice3;
            while (true) {
                choice3 = getChoiceInt();
                if (choice > idx || choice < 1) {
                    cout << "Invalid option" << endl;
                    continue;
                }
                break;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                idx++;
                currCourseNode = currCourseNode->next;
            }
            viewCourseInfo(currCourseNode->data);
            system("pause");
            system("cls");
            return false;
        }
        else if (choice2 == 2) {
            cout << "---Change semester start date---" << endl;
            cout << "Current semester start date: " << _schoolYear._semester[choice].start << endl;
            cout << "Enter new start date for this semester: ";
            string newDate;
//Date validation
            cin >> newDate;
            //validate input
            _schoolYear._semester[choice].start = newDate;
            cout << "Start date changed successfully" << endl;
            system("pause");
            system("cls");
            return false;
        }
        else if (choice2 == 3) {
            cout << "---Change semester end date---" << endl;
            cout << "Current semester end date: " << _schoolYear._semester[choice].start << endl;
            cout << "Enter new end date for this semester: ";
            string newDate;
            cin >> newDate;
            //validate input
            _schoolYear._semester[choice].start = newDate;
            cout << "End date changed successfully" << endl;
            system("pause");
            system("cls");
            return false;
        } 
        else if (choice2 == 4) {
            return false;
        }
        else if (choice2 == 5) {
            return true;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        system("pause");
        break;
    }
}

bool login(stringNode *accountList, bool &isStaff) {
    int loginAttempt= 0;
    while(loginAttempt < 5) {
        system("cls");
        if(loginAttempt > 0) {
            cout << "Invalid user ID or password ! Please try again !" << endl;
        }
        string ID, PW;
        cout << "------------LOGIN------------" << endl;
        cout << "User ID : "; 
        cin >> ID;
        cout << "Password : ";
        cin >> PW;

        if(PW.find_last_of(':') != string::npos) {
            loginAttempt++;
            continue;
        }   
        string userAccount = ID + ':' + PW;
        stringNode *temp= accountList;
        while(temp) {
            if(temp->data == userAccount) {
                cout << "Login successfully - welcome back ! " << endl;
                if(!isdigit(userAccount[0]))
                    isStaff = 1;
                return true;
            }
            temp= temp->next;
        }
        loginAttempt++;
    }
    cout << "Too many login, please try again in a minute ! " << endl;
    return false;
}