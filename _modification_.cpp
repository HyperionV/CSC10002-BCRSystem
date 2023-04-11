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
        cout << "\t" << curr->data.index << ". " << curr->data.id << " - " << curr->data.firstName << " " << curr->data.lastName << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

void saveStudentInfo(string path, const student &source) {
    ofstream studentInfo {path};
    studentInfo << source.index << "," << source.id << "," << source.firstName << "," << source.lastName << "," << source.gender << "," << source.dob << "," << source.socialid << endl;
    studentInfo.close();
}

void addStudentByFile(studentNode *&head, const string &className) {
    cout << "\n--------Add students by file--------\n" << endl;
    cout << "Enter file path: ";
    string filePath;
    cin >> filePath;
    filePath = "TestData/" + filePath;
    ifstream in_file {filePath};
    if (!in_file) {
        cout << "Error while opening file! Please check if the path was correct" << endl;
        return;
    }
    string placeHolder;
    getline(in_file, placeHolder); //get the content line of the CSV file
    while (!in_file.eof()) {
        student temp;
        string placeHolder;
        getline(in_file, placeHolder, ',');
        if (placeHolder == "" || placeHolder == "\n") {
            // cout << "Blank line" << endl;
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
        cout << "Wrong ID format! The ID should consist of 8 numbers" << endl;
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
        cout << "Wrong social ID format" << endl;
        s.id = "NULL";
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
    courseNode *newhead = nullptr;
    courseNode *delHead = head;
    while (head) {
        if (head->data.id == ID) {
            courseNode *curr = head;
            deleteStudentList(curr->data.enrolled);
            head = head->next;
            delete curr;
            continue;
        }
        addCourseNode(newhead, head->data);
        head = head->next;
    }
    head = newhead;
    deleteCourseList(delHead);
    newhead = nullptr;
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
    scoreboardNode *newhead = nullptr;
    scoreboardNode *delHead = head;
    while (head) {
        if (head->data.courseID == ID) {
            scoreboardNode *curr = head;
            head = head->next;
            delete curr;
            continue;
        }
        addScoreboardNode(newhead, head->data);
        head = head->next;
    }
    head = newhead;
    deleteScoreboardList(delHead);
    newhead = nullptr;
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
    cout << "\n---------Create new school year----------" << endl;
    string SC;
    cout << "Enter school year: ";
    cin >> SC;
    if (SC.length() < 5) {
        string temp = SC;
        temp[3] += 1;
        SC += "-" + temp;
    }
    if (SC.length() > 5) {
        string temp1 = SC.substr(5);
        string temp2 = SC.substr(0, 4);
        if (abs(stoi(temp1) - stoi(temp2)) != 1 || SC[4] != '-') {
            cout << "Invalid input" << endl;
            return false;
        }
    }
    schoolYearNode *target = findSchoolYear(head, SC);
    if (target != nullptr) {
        cout << "This school year has been created before" << endl;
        return false;
    }
    year._schoolYear = SC;
    year._class = nullptr;
    // year._semester = new semester[3];
    year._semester[0].name = "Spring semester";
    year._semester[1].name = "Summer semester";
    year._semester[2].name = "Autumn semester";
    for (int i = 0; i < 3; i++){
        year._semester[i].start = "NULL";
        year._semester[i].end = "NULL";
        year._semester[i]._course = nullptr;
    }

    while (true) {
        cout << "Current classes: " << endl;
        classNode *currClass = year._class;
        while (currClass) {
            cout << "\t" << currClass->data.name << "\n";
            currClass = currClass->next;
        }
        cout << "Do you want to add new class? [Y/N]: ";
        char choice;
        cin >> choice;
        if (choice == 'Y') {
            createClass(year);
        }
        else if (choice == 'N') {
            cout << "Creating classes phase compeleted" << endl;
            break;
        }
        else {
            cout << "Invalid choice, please try again" << endl;
        }
    }
    cout << "Add new students to the newly created classes" << endl;
    bool isFinish = false;
    while (!isFinish) {
        cout << "Add new student? [Y/N]: ";
        char choice;
        cin >> choice;
        if (choice == 'Y') {
            addStudentToClass(year);
        }
        else if (choice == 'N') {
            cout << "Adding student phase completed" << endl;
            cout << "Displaying students of classes: " << endl;
            classNode *currClass = year._class;
            while (currClass) {
                int count = getNumberOfStudents(currClass->data._student);
                // if (count == 0) {
                //     string cName = currClass->data.name;
                //     currClass = currClass->next;
                //     deleteClassNode(year._class, cName);
                //     continue;
                // }
                cout << "\t" << currClass->data.name << ": \n";
                displayStudentList(currClass->data._student);
                currClass = currClass->next;
            }
            isFinish = true;
        }
        else {
            cout << "Invalid choice please try again" << endl;
        }
    }
    return true;
}

void createClass(schoolYear &SC) {
    cout << "\n----------Create class----------" << endl;
    string tmpYearNum = SC._schoolYear.substr(0, 4);
    string yearNum = tmpYearNum.substr(2);
    cout << "Choose a way to create classes: \n\t1. Single Creation \n\t2. Mass Creation" << endl;
    cout << "Your option: ";
    char choice;
    cin >> choice;
    if (choice == '1') {
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
    else if (choice == '2') {
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
    cout << "\n---------Add student to class--------\n" << endl;
    classNode *curr = _schoolYear._class;
    cout << "Choose a class: " << endl;
    int idx = 1;
    while (curr) {
        cout << "\t" << idx++ << ". " << curr->data.name << endl;
        curr = curr->next;
    }
    int choice;
    cout << "Choose an option: ";
    cin >> choice;
    if (choice > idx) {
        cout << "Invalid option" << endl;
        return;
    }
    idx = 1;
    curr = _schoolYear._class;
    while (idx != choice) {
        idx++;
        curr = curr->next;
    }
    _class c = curr->data;
    cout << "Choose a way: \n\t1. Individually \n\t2. By file" << endl;
    cout << "Choose an option: ";
    int choice2;
    cin >> choice2;
    if (choice2 == 1) {
        student temp;
        addStudentIndividually(temp);
        if (temp.id == "NULL") {
            return;
        }
        if (checkStudentExistence(_schoolYear, temp)) {
            cout << "This student has already been added" << endl;
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
        // cout << "Preview student list" << endl;
        // displayStudentList(_student);
        //check duplicate in input file
        while (currStudentNode) {
            if (checkStudentExistence(_schoolYear, currStudentNode->data)) {
                //cout << "This student has already been added" << endl;
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
    else {
        cout << "Invalid option!" << endl;
    }
    curr = nullptr;
}

void createSemester(schoolYear &SY) {
    cout << "\n----------Create semester----------" << endl;
    cout << "Choose a semester to create: \n\t1. Spring semester \n\t2. Summer semester \n\t3. Autumn semester" << endl;
    int choice;
    cout << "Choose an option: ";
    cin >> choice;
    if (SY._semester[choice-1].start != "NULL") {
        cout << "This semester has already been created" << endl;
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
    cout << "Created " << SY._semester[choice-1].name << " for school year " << SY._schoolYear << ". The semester starts on " << SY._semester[choice-1].start << ", ends on " << SY._semester[choice-1].end << endl; 
}

void createCourse(schoolYear &_schoolYear, semester &_semester) {
    cout << "\n----------Create course----------" << endl;
    course temp;
    cout << "Enter course ID: ";
    cin >> temp.id;
    if (findCourse(_semester._course, temp.id) != nullptr) {
        cout << "This course has already been created in this semester" << endl;
        return;
    }
    cout << "Enter course name: ";  
    cin.ignore();
    getline(cin, temp.name);
    cout << "Enter classname: "; 
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
    cout << "---Add student to this course---" << endl;
    addStudentToCourseByFile(_schoolYear, curr->data);
}

void addStudentToCourseByFile(const schoolYear &_schoolYear, course &_course) {
    cout << "Enter file path: ";
    string filePath;
    cin.ignore();
    getline(cin, filePath);
    ifstream inputFile {filePath};
    if (!inputFile) {
        cout << "Cannot open input file" << endl;
        return;
    }
    classNode *currYearClasses = _schoolYear._class;
    string placeHolder;
    int counter = getNumberOfStudents(_course.enrolled);
    getline(inputFile, placeHolder);    //skip the content line in the csv file
    while (!inputFile.eof()) {
        //check if the course is full
        if (counter >= _course.max) {
            break;
        }
        student tempStudent;
        string tmp;
        getline(inputFile, tmp, ',');
        tempStudent.index = stoi(tmp);
        getline(inputFile, tempStudent.id, ',');
        getline(inputFile, tempStudent.firstName, ',');
        getline(inputFile, tempStudent.lastName, ',');
        getline(inputFile, tempStudent.className);
        //Check valid file input??

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
            // cout << "The class of this student has not been created in the current year" << endl;
            continue;
        }
        //check if the current student is in a class
        studentNode *studentObject = findStudent(studentClass->data._student, tempStudent.id);
        if (studentObject == nullptr) {
            // cout << "Cannot find this student in the given class!" << endl;
            studentClass = nullptr;
            continue;
        }
        //update scoreboard node inside student object contained in a class list -> add new course to that student profile in the class list
        scoreboard tempScoreboard;
        tempScoreboard.courseID = _course.id;
        tempScoreboard.courseName = _course.name;
        addScoreboardNode(studentObject->data._course, tempScoreboard);
        tempStudent = studentObject->data;
        addStudentNode(_course.enrolled, tempStudent);
        counter++;
        studentObject = nullptr;
        studentClass = nullptr;
        checkStudentDuplicate = nullptr;
    }
    inputFile.close();
    currYearClasses = nullptr;
}

void addStudentToCourseManually(const schoolYear &_schoolYear, course &_course) {
    if (getNumberOfStudents(_course.enrolled) >= _course.max) {
        cout << "This course is currently full" << endl;
        return;
    }
    student tempStudent;
    cout << "Enter student ID: ";
    cin >> tempStudent.id;
    if (tempStudent.id.length() != 8) {
        cout << "Invalid ID format!" << endl;
        return;
    }
    cout << "Enter first name: ";
    cin.ignore();
    getline(cin, tempStudent.firstName);
    cout << "Enter last name: ";
    cin.ignore();
    getline(cin, tempStudent.lastName);
    cout << "Enter student's class: ";
    cin >> tempStudent.className;
    //The criteria of a valid classname ???
    studentNode *checkStudentDuplicate = findStudent(_course.enrolled, tempStudent.id);
    if (checkStudentDuplicate != nullptr) {
        checkStudentDuplicate = nullptr;
        cout << "This student has already enrolled in this course" << endl;
        return;
    }
    classNode *studentClass = findClassName(_schoolYear._class, tempStudent.className);
    if (studentClass == nullptr) {
        cout << "The class of this student has not been created in the current year" << endl;
        return;
    }
    studentNode *checkStudent = findStudent(studentClass->data._student, tempStudent.id);
    if (checkStudent == nullptr) {
        cout << "Incorrect classname or student information" << endl;
        studentClass = nullptr;
        return;
    }
    scoreboard tempScoreboard;
    tempScoreboard.courseID = _course.id;
    tempScoreboard.courseName = _course.name;
    addScoreboardNode(checkStudent->data._course, tempScoreboard);
    tempStudent = checkStudent->data;
    addStudentNode(_course.enrolled, tempStudent);
}

void removeStudentFromCourse(course &_course) {
    cout << "\n----------Remove student from course----------" << endl;
    cout << "Students enrolled in this course: " << endl;
    displayStudentList(_course.enrolled);
    cout << "Choose a student to remove: ";
    int choice;
    cin >> choice;
    if (choice < 1 || choice > getNumberOfStudents(_course.enrolled)) {
        cout << "Invalid option" << endl;
        return;
    }
    studentNode *curr = _course.enrolled;
    int idx = 1;
    while (idx != choice) {
        idx++;
        curr = curr->next;
    }
    deleteScoreboardNode(curr->data._course, _course.id);
    deleteStudentNode(_course.enrolled, curr->data.id);
}

void deleteCourse(schoolYear &_schoolYear, course &_course) {
    cout << "\n----------Delete course----------" << endl;
    studentNode* enrolledList = _course.enrolled;
    while (enrolledList) {
        string className = enrolledList->data.className;
        classNode *studentClass = _schoolYear._class;
        while (studentClass) {
            if (studentClass->data.name == className) {
                studentNode *target = findStudent(studentClass->data._student, enrolledList->data.id);
                deleteScoreboardNode(target->data._course, _course.id);
            }
            studentClass = studentClass->next;
        }
        studentClass = nullptr;
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
}

void viewCourseInfo(const course &_course) {
    cout << "\t1. ID: " << _course.id << endl;
    cout << "\t2. Name: " << _course.name << endl;
    cout << "\t3. Study Room: " << _course.className << endl;
    cout << "\t4. Teacher: " << _course.teacher << endl;
    cout << "\t5. Credits: " << _course.credit << endl;
    cout << "\t6. Max number of students: " << _course.max << endl;
    cout << "\t7. Schedule: " << _course.session << " - " << _course.day << endl;
}

void updateCourseInfo(course &_course) {
    cout << "\n---------Update course info----------" << endl;
    string placeHolder;
    cout << "Current course info:";
    viewCourseInfo(_course);
    //enter new course info
    cout << "\nEnter new information for this course: ";
    cout << "\n\t1. ID: ";
    cin >> _course.id;
    cout << "\n\t2. Name: "; 
    cin.ignore();
    getline(cin, _course.name);
    cout << "\n\t3. Study Room: ";
    cin >> _course.className;
    cout << "\n\t4. Teacher: ";
    cin.ignore();
    getline(cin, _course.teacher);
    //repeatedly asking user to re-enter information if inputted wrongly
    while (true) {
        cout << "\n\t5. Credits: ";
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
        cout << "\n\t6. Max number of students: ";
        cin >> placeHolder;
        _course.max = stoi(placeHolder);
        if (_course.max <= 0) {
            cout << "Invalid input! Please try again" << endl;
            continue;
        }
        break;
    }
    cout << "\n\t7.1 Day: ";
    cin >> _course.day;
    for (int i = 0; i < _course.day.length(); i++) {
        _course.day[i] = toupper(_course.day[i]);
    }
    cout << "\n\t7.2 Session: ";
    cin >> _course.session;
    //display the new course information
    cout << "Successfully updated course info" << endl;
    cout << "Current course info:";
    cout << "\n\t1. ID: " << _course.id;
    cout << "\n\t2. Name: " << _course.name;
    cout << "\n\t3. Study Room: " << _course.className;
    cout << "\n\t4. Teacher: " << _course.teacher;
    cout << "\n\t5. Credits: " << _course.credit;
    cout << "\n\t6. Max number of students: " << _course.max;
    cout << "\n\t7. Schedule: " << _course.session << " - " << _course.day << endl;
}

void updateStudentResult(const schoolYear &_schoolYear, const course &_course) {
    cout << "\n----------Update student result----------" << endl;
    int choice, idx = 1;
    studentNode *curr = _course.enrolled;
    while (curr) {
        cout << "\t" << idx++ << ". " << curr->data.className << endl;
        curr = curr->next;
    }
    cout << "Choose an option: ";
    cin >> choice;
    curr = _course.enrolled;
    while (choice-- && curr) {
        curr = curr->next;
    }
    if (choice > 0) {
        cout << "Invalid option" << endl;
        curr = nullptr;
        return;
    }
    scoreboardNode *currCourse = findCourseScoreboard(curr->data._course, _course.id);
    cout << "Current result: ";
    cout << "\n\tTotal: " << currCourse->data.total;
    cout << "\n\tFinal: " << currCourse->data.final;
    cout << "\n\tMidterm: " << currCourse->data.midterm;
    cout << "\n\tOther: " << currCourse->data.other << endl;
    cout << "Enter new value for each type of scores: ";
    cout << "\n\tTotal: "; cin >> currCourse->data.total;
    cout << "\n\tFinal: "; cin >> currCourse->data.final;
    cout << "\n\tMidterm: "; cin >> currCourse->data.midterm;
    cout << "\n\tOther: "; cin >> currCourse->data.other;
    classNode *studentClass = findClassName(_schoolYear._class, curr->data.className);
    studentNode *OG = findStudent(studentClass->data._student, curr->data.id);
    scoreboardNode *studentScore = findCourseScoreboard(OG->data._course, _course.id);
    studentScore->data = currCourse->data;
}

//Data export functions

void exportStudentInfoList(const string &_schoolYear, const course &_course) {
    string filePath = "Export/"+_schoolYear+"_"+_course.name+".csv";
    ofstream exportFile {filePath};
    exportFile << "Index,ID,Name,Other,Midterm,Final,Total" << endl;
    studentNode *curr = _course.enrolled;
    while (curr) {
        exportFile << curr->data.index <<","<<curr->data.id<<","<<curr->data.firstName<<" "<<curr->data.lastName<<endl;
        curr = curr->next;
    }
    exportFile.close();
    curr = nullptr;
}

void importStudentScore(const schoolYear &_schoolYear, const course &_course) {
    string path;
    cout << "Enter scoreboard path: ";
    cin >> path;
    ifstream importFile {path};
    if (!importFile) {
        cout << "Error! Cannot open import file" << endl;
        return;
    }
    classNode *currClassList = _schoolYear._class;
    studentNode *currStudentList = _course.enrolled;
    while (!importFile.eof()) {
        string placeHolder;
        string idx;
        string studentID;
        scoreboard tempScoreBoard;
        tempScoreBoard.courseID = _course.id;
        tempScoreBoard.courseName = _course.name;
        getline(importFile, idx, ',');  //get index
        getline(importFile, studentID, ',');    //get student id
        getline(importFile, placeHolder, ',');  //get firstname
        getline(importFile, placeHolder, ',');  //get lastname
        getline(importFile, placeHolder, ',');  //get other scores
        tempScoreBoard.other = stod(placeHolder);
        getline(importFile, placeHolder, ',');  //get midterm score
        tempScoreBoard.midterm = stod(placeHolder);
        getline(importFile, placeHolder, ',');  //get final score
        tempScoreBoard.final = stod(placeHolder);
        getline(importFile, placeHolder, ',');  //get total score
        tempScoreBoard.total = stod(placeHolder);
        //find student in course to change scoreboard
        studentNode *targetStudent = findStudent(currStudentList, studentID);
        scoreboardNode *targetScoreboard = findCourseScoreboard(targetStudent->data._course, _course.id);
        targetScoreboard->data = tempScoreBoard;
        targetScoreboard = nullptr;
        //find student in class to change scoreboard
        classNode *targetClass = findClassName(currClassList, targetStudent->data.className);
        targetStudent = findStudent(targetClass->data._student, studentID);
        targetScoreboard = findCourseScoreboard(targetStudent->data._course, _course.id);
        targetScoreboard->data = tempScoreBoard;
        targetStudent = nullptr;
        targetClass = nullptr;
        targetScoreboard = nullptr;
    }   
    //need better optimization here
    currClassList = nullptr;
    currStudentList = nullptr;
    importFile.close();
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
                    string full_path = path + "/" + entry_name;
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
                    curr.credit = stoi(hold);
                    getline(in_file, hold, ',');
                    curr.max = stoi(hold);
                    getline(in_file, curr.day, ',');
                    getline(in_file, curr.session);
                    in_file.close();
                }
            }
        }
    }
    return curr;
}

studentNode* loadStudentsFromClass(const string &path ,const string& className) {
    studentNode* curr = nullptr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
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
            cout << entry_name << " ";
            if(entry_name != "." && entry_name != ".." ) {
                if(entry_name == "Classes") {
                    string cur_path =  path + '/' + entry_name;
                    cout << cur_path << " ";
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
                getline(in_file, placeHolder, ',');
                temp.index = stoi(placeHolder);
                getline(in_file, temp.id, ',');
                getline(in_file, temp.firstName, ',');
                getline(in_file, temp.lastName, ',');
                getline(in_file, temp.gender, ',');
                getline(in_file, temp.dob, ',');
                getline(in_file, temp.socialid);
                temp.className = classname;


                ifstream in_file1 {full_path + "/Scoreboard.txt"};
                if(!in_file1) {
                    cout << "Error while opening file ! Please try agian later !" << endl;
                    return;
                }
                while(!in_file1.eof()) {
                    scoreboard curr;
                    string hold;
                    getline(in_file1, curr.courseID, ',');
                    getline(in_file1, curr.courseName, ',');
                    getline(in_file1, hold, ',');
                    curr.other = stod(hold);
                    getline(in_file1, hold, ',');
                    curr.midterm = stod(hold);
                    getline(in_file1, hold, ',');
                    curr.final = stod(hold);
                    getline(in_file1, hold);
                    curr.total = stod(hold);
                    hold.clear();
                    addScoreboardNode(temp._course, curr);
                }
                in_file1.close();
                addStudentNode(head, temp);
                in_file.close();
            }
        }
    }
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
                ifstream in_file {full_path};
                if(!in_file) {
                    cout << "Error while opening file ! Please try agian later !" << endl;
                    return;
                }
                while(!in_file.eof()) {
                    scoreboard curr;
                    string hold;
                    getline(in_file, curr.courseID, ',');
                    getline(in_file, curr.courseName, ',');
                    getline(in_file, hold, ',');
                    curr.other = stod(hold);
                    getline(in_file, hold, ',');
                    curr.midterm = stod(hold);
                    getline(in_file, hold, ',');
                    curr.final = stod(hold);
                    getline(in_file, hold);
                    curr.total = stod(hold);
                    hold.clear();
                    addScoreboardNode(scoreboardList, curr);
                }
            in_file.close();
            }
        }
    }
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
                    if(ifs)
                        ifs.close();
                    remove(full_path.c_str());
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
        string full_path= path + "/" + studentList->data.id;
        mkdir((path + "/" + studentList->data.id).c_str());
        ofstream out_file {full_path + "/info.txt"};
        out_file << studentList->data.index << "," ;
        out_file << studentList->data.id << ",";
        out_file << studentList->data.firstName << ",";
        out_file << studentList->data.lastName << ",";
        out_file << studentList->data.gender << ",";
        out_file << studentList->data.dob << ',';
        out_file << studentList->data.socialid ;
        if(studentList->next)
            out_file << endl;
        out_file.close();

        if(!studentList->data._course) {
            studentList = studentList->next;
            continue;
        }

        ofstream out_file1 {full_path + "/Scoreboard.txt"};
        while(studentList->data._course) {
            out_file1 << studentList->data._course->data.courseID << ",";
            out_file1 << studentList->data._course->data.courseName << ",";
            out_file1 << studentList->data._course->data.other << ",";
            out_file1 << studentList->data._course->data.midterm << ",";
            out_file1 << studentList->data._course->data.final << ",";
            out_file1 << studentList->data._course->data.total;
            if(studentList->data._course->next)
                out_file1 << endl;

            studentList->data._course= studentList->data._course->next;
        }
        out_file1.close();

        studentList = studentList->next;
    }
    return;
}

void writeCourseEnrolls(courseNode* &courseList, const string &path) {
    if(!courseList->data.enrolled) {
        return;
    }
    ofstream out_file {path};
    courseNode* holdToDelete= courseList;
    while(courseList->data.enrolled) {
        out_file << courseList->data.enrolled->data.id << "," << courseList->data.enrolled->data.firstName << "," << courseList->data.enrolled->data.lastName << "," << courseList->data.enrolled->data.className << ",";
        out_file << courseList->data.enrolled->data._course->data.other << ",";
        out_file << courseList->data.enrolled->data._course->data.midterm << ",";
        out_file << courseList->data.enrolled->data._course->data.total << ",";
        out_file << courseList->data.enrolled->data._course->data.final;
        if(courseList->data.enrolled->next)
            out_file << endl;

        courseList->data.enrolled= courseList->data.enrolled->next;

    }
    out_file.close();
    return;
}

void writeCourse(courseNode* &courseList , const string &path) {
    courseNode* holdToDelete = courseList;
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

void writeClass(classNode* &classList ,const string &path) {
    classNode* holdToDelete= classList;
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
    schoolYearNode* schoolYearList= SYlist;
    while(schoolYearList) {
        writeSchoolyear(path, schoolYearList->data);
        schoolYearList= schoolYearList->next;
    }

    // deleteSchoolYearList(schoolYearList);
}

void autoSaveClass(studentNode *&studentInClass) {
    string full_path = "Data/Classes/" + studentInClass->data.className;

    delete_directory(full_path);

    writeStudentInClass(studentInClass, full_path);
    return ;
}

void autoSaveCourse(semester sem, string courseName) {
    courseNode* temp = sem._course;

    while(temp) {
        if(temp->data.name == courseName) {
            string full_path = "Data/" + sem.name + "/" + courseName;
            delete_directory(full_path);
            writeCourseEnrolls(temp, full_path);
            return;
        }
        temp = temp->next;
    }
    return;
}

bool standardizeName(string &name) {
    for(int i= 0; i< name.length(); i++) {
        if(i == 0) {
            if(name[i] <= 'a' && name[i] >= 'z') {
                name[i] -= 32;
            }
        }
        else {
            if(name[i] <= 'A' && name[i] >= 'Z') {
                name[i] += 32;
            }
        }
        if((name[i] < 'a' && name[i] > 'z') || (name[i] < 'A' && name[i] > 'Z'))
            return false;
    }
    return true;
}

string createEmail(string fullName) {
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

void addAccountNode(accountNode*& head, account curr) {
    accountNode* temp= new accountNode;
    temp->userAccount = curr;
    if(!head) {
        head= temp;
        return;
    }
    else {
        accountNode* move = head;
        while(move->next) {
            move = move->next;
        }
        move->next = temp;
    }
    return;
}

void loadUserAccount (credential accountSystem, const string &path) {
    ifstream inStaff, inStudent;
    inStaff.open(path + "/" + "staff.txt");
    inStudent.open(path + "/" + "student.txt");

    while(!inStaff.eof()) {
        account curr;
        getline(inStaff, curr.ID , ',');
        getline(inStaff, curr.password);
        addAccountNode(accountSystem.staff, curr);
    }
    while(!inStudent.eof()) {
        account curr;
        getline(inStudent, curr.ID, ',');
        getline(inStudent, curr.password);
        addAccountNode(accountSystem.student, curr);
    }
    inStudent.close();
    inStaff.close();
}

bool changeAccountPassword(credential accountSystem, string userID, bool isStaff, string newPassword) {
    if(isStaff) {
        accountNode* temp = accountSystem.staff;
        while(temp) {
            if(temp->userAccount.ID == userID) {
                temp->userAccount.password = newPassword;
                return true;
            }
            temp = temp->next;
        }
    }
    else {
        accountNode* temp= accountSystem.student;
        while(temp) {
            if(temp->userAccount.ID == userID) {
                temp->userAccount.password = newPassword;
                return true;
            }
            temp= temp->next;
        }
    }
    return false;
}

//Work flow
schoolYear programStart(schoolYearNode *&head) {
    if (head == nullptr) {
        cout << "Database is empty! Please create a new school year to continue!";
        head = new schoolYearNode;
        if (!createSchoolYear(head, head->data)) head = nullptr;
    }
    //system("cls");
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
    cin >> choice;
    if (choice == 1) {
        schoolYear newSY;
        if (!createSchoolYear(head, newSY)) {
            cout << "Failed to created school year! Please try again" << endl;
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
        cout << "\n---------Main menu - staff---------" << endl;
        cout << "\t1. View profile" << endl;
        cout << "\t2. View current school year information" << endl;
        cout << "\t3. Update current school year information" << endl;
        cout << "\t4. Load another school year" << endl;
        cout << "\t5. Log out" << endl;
        cout << "\t6. Log out and close program" << endl;
        cout << "Your choice: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout << "In development lol" << endl;
            continue;
        }
        else if (choice == 2) {
            viewCurrentYearInfo(_schoolYear);
        }
        else if (choice == 3) {
            updateCurrentYearInfo(_schoolYear);
            continue;
        }
        else if (choice == 4) {
            _schoolYear = programStart(head);
            continue;
        }
        else if (choice == 5) {
            cout << "In development lol" << endl;
            continue;
        }
        else if (choice == 6) {
            cout << "Save and turn off" << endl;
            writeDataFolder("Data", head);
            return;
        }
        else {
            cout << "Not a valid option! Please choose again" << endl;
        }
    }
}

void viewCurrentYearInfo(const schoolYear &_schoolYear) {
    while (true) {
        cout << "\n---------View current school year information---------" << endl;
        cout << "\t1. View semesters information" << endl;
        cout << "\t2. View classes information" << endl;
        cout << "\t3. Back to main menu" << endl;
        int choice;
        cout << "Your choice: ";
        cin >> choice;
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
            continue;
        }
    }
}

//if return true -> return straight to main menu
//if return false -> return to previous menu only

void viewCourseScoreboard(studentNode *_student, const string &ID) {
    cout << "---View scoreboard---" << endl;
    cout << setw(5) << left << "No. " << setw(15) << left << "Student ID" << setw(25) << left << "Full name" << setw(10) << left << "Class" << setw(5) << right << "Other" << setw(5) << right << "Midterm" << setw(5) << right << "Final" << setw(5) << right << "Total" << endl; 
    studentNode *curr = _student;
    while (curr) {
        scoreboardNode *tmp = findCourseScoreboard(curr->data._course, ID);
        cout << setw(5) << left << curr->data.index << setw(15) << left << curr->data.id << setw(25) << left << curr->data.firstName << " " << curr->data.lastName << setw(10) << left << curr->data.className << setw(5) << right << tmp->data.other << setw(5) << right << tmp->data.midterm << setw(5) << right << tmp->data.final << setw(5) << right << tmp->data.total << endl; 
    }
}

bool viewSemestersInfo(const schoolYear &_schoolYear) {
    while (true) {
        cout << "Choose a semester: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
        }    
        cout << "Your choice: ";
        int choice;
        cin >> choice;
        if (choice > 3 || choice < 1) {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
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
        cin >> choice2;
        if (choice2 == 1) {
            //display courses for user to choose 
            cout << "Choose a course from the list below: " << endl;
            courseNode* currCourseNode = _schoolYear._semester[choice]._course;
            int idx = 1;
            while (currCourseNode) {
                cout << "\t" << idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
                idx++;
            }
            int choice3;
            cout << "Your choice: ";
            cin >> choice3;
            if (choice3 < 1 || choice3 >= idx) {
                cout << "Invalid option!" << endl;
                continue;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                currCourseNode = currCourseNode->next;
                idx++;
            }
            viewDetailedCourseInfo(currCourseNode->data);
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
        system("pause");
    }
    return true;
}

void viewClassesInfo(const schoolYear &_schoolYear) {
    while (true) {
        cout << "---Classes created for this school year---" << endl;
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
        cin >> choice;
        if (choice == 1) {
            cout << "Please choose a class to view: ";
            int choosen;
            cin >> choosen;
            if (choosen >= idx || choosen < 1) {
                cout << "Invalid choice! Please try again" << endl;
                continue;   
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
    //get every course of every student in the class
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
    //view scoreboard of the whole class and overall GPA
    cout << "\n----------View detailed class info----------" << endl;
    cout << "Class: " << source.name << endl;
    cout << "Students of this class: " << endl;
    displayStudentList(source._student);
    cout << endl;
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
}

void viewStudentResult(const student &source) {
    cout << "---View student result---" << endl;
    cout << setw(15) << left << "Course ID" << setw(30) << left << "Course name" << setw(5) << right << "Other" << setw(5) << right << "Midterm" << setw(5) << right << "Final" << setw(5) << right << "Total" << endl;
    scoreboardNode *curr = source._course;
    while (curr) {
        cout << setw(15) << left << curr->data.courseID << setw(30) << left << curr->data.courseName << setw(5) << right << curr->data.other << setw(5) << right << curr->data.midterm << setw(5) << right << curr->data.final << setw(5) << right << curr->data.total << endl;

    }
}

void viewStudentInfo(const schoolYear &_schoolYear) {
    while (true) {
        cout << "---View Student Information---" << endl;
        cout << "Enter ID of the student you want to find or \"NULL\" to stop: ";
        string ID;
        cin >> ID;
        if (ID == "NULL") {
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
                cout << setw(65) << setfill('-') << " " << endl;
                // scoreboardNode *currScoreboardNode = target->data._course;
                // while (currScoreboardNode) {
                //     cout << "\t" << setw(15) << left << currScoreboardNode->data.courseID << setw(30) << right << currScoreboardNode->data.courseName << endl;
                //     currScoreboardNode = currScoreboardNode->next;
                // }
                viewStudentResult(target->data);
                target = nullptr;
                // currScoreboardNode =  nullptr;
                currClassNode = nullptr;
                system("pause");
                found = true;
                break;
            }
            currClassNode = currClassNode->next;
        }
        if (!found) {
            cout << "There is no student associated with the provided student ID! Please try again" << endl;
            currClassNode = nullptr;
            continue;
        }
        currClassNode = nullptr;
    }
}

void viewDetailedCourseInfo(const course &_course) {
    cout << "\n---View detailed course information---" << endl;
    viewCourseInfo(_course);
    viewCourseScoreboard(_course.enrolled, _course.id);
}

void updateCurrentYearInfo(schoolYear &_schoolYear) {
    cout << "----------Modify Current School Year Information----------" << endl;
    cout << "\t1. Create new class" << endl;
    cout << "\t2. Create new semester" << endl;
    cout << "\t3. Create new course" << endl;
    cout << "\t4. Update semesters information" << endl;
    cout << "\t5. Update course information" << endl;
    cout << "\t6. Return to main menu" << endl;  
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            createClass(_schoolYear);
            break;
        case 2:
            createSemester(_schoolYear);
            break;
        case 3: 
            createNewCourseUI(_schoolYear);
            break;
        case 4:
            updateSemesterInfo(_schoolYear);
            break;
        case 5:
            updateCourseInfoUI(_schoolYear);
            break;
        case 6:
            break;
        default:
            cout << "Invalid option!" << endl;
    }
}

bool updateCourseInfoUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    if (choice < 1 || choice > 3) {
        cout << "Invalid option" << endl;
        return false;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        return false;
    }
    if (_schoolYear._semester[choice]._course == nullptr) {
        cout << "No course has been created for this semester" << endl;
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
    cin >> choice2;
    if (choice2 < 1 || choice2 > idx) {
        cout << "Invalid option!" << endl;
        return false;
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
    cout << "\t4. Delete this course" << endl;
    cout << "\t5. Return to previous menu" << endl;
    cout << "\t6. Return to main menu" << endl;
    int choice3;
    cout << "Your choice: ";
    cin >> choice3;
    if (choice3 < 1 || choice3 > 6) {
        cout << "Invalid option" << endl;
        return false;
    }
    switch (choice3) {
        case 1:
            updateCourseInfo(currCourseNode->data);
            break;
        case 2:
            addStudentToCourseManually(_schoolYear, currCourseNode->data);
            break;
        case 3: 
            removeStudentFromCourse(currCourseNode->data);
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
            return true;
        default:
            cout << "Invalid option" << endl;
            return false;
    }
    return false;
}

void createNewCourseUI(schoolYear &_schoolYear) {
    cout << "---Create new course---" << endl;
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    if (choice < 1 || choice > 3) {
        cout << "Invalid choice" << endl;
        return;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
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
        cout << "Your choice: ";
        int choice;
        cin >> choice;
        if (choice > 3 || choice < 1) {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
            return false;
        }
        cout << "---Current semester information---" << endl;
        cout << "\tSemester: " << _schoolYear._semester[choice].name << endl;
        cout << "\tStart date: " << _schoolYear._semester[choice].start << endl;
        cout << "\tEnd date: " << _schoolYear._semester[choice].end << endl;
        courseNode* curr = _schoolYear._semester[choice]._course;
        cout << "\tCourses: " << endl;
        while (curr) {
            cout << "\t\t" << curr->data.id << " - " << curr->data.name << endl;
            curr = curr->next;
        }
        cout << "--------------------------" << endl;
        cout << "\t1. View detailed information of a course" << endl;
        cout << "\t2. Change semester start date" << endl;
        cout << "\t3. Change semester end date" << endl;
        cout << "\t4. Return to previous menu" << endl;
        cout << "\t5. Return to main menu" << endl;
        cout << "\nYour choice: ";
        int choice2;
        cin >> choice2;
        if (choice2 == 1) {
            cout << "---View course detailed information---" << endl;
            int idx = 1;
            courseNode *currCourseNode = _schoolYear._semester[choice]._course;
            while (currCourseNode) {
                cout << "\t" << idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
                idx++;
            }
            cout << "Your choice: ";
            int choice3;
            cin >> choice3;
            //make the content dynamic - split the terminal into 2 parts including a static constant part with loaded content and new content - content that needs to be displayed over and over again
            if (choice3 < 1 || choice3 > idx) {
                cout << "Invalid choice! Please try again" << endl;
                //return straight to main menu because the dynamic content has not been set
                return false;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                idx++;
                currCourseNode = currCourseNode->next;
            }
            viewCourseInfo(currCourseNode->data);
            system("pause");
            return false;
        }
        else if (choice2 == 2) {
            cout << "---Change semester start date---" << endl;
            cout << "Current semester start date: " << _schoolYear._semester[choice].start << endl;
            cout << "Enter new start date for this semester: ";
            string newDate;
            cin >> newDate;
            //validate input
            _schoolYear._semester[choice].start = newDate;
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