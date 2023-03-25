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
        cout << "\t" << curr->data.id << " - " << curr->data.firstName << " " << curr->data.lastName << endl;
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
    while (curr->next && curr->next->next) {
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
        student newStudent;
        s = newStudent;
        cout << "Wrong ID format! The ID should consist of 8 numbers" << endl;
        return;
    }
    cin.ignore();
    cout << "Enter student's first name: ";
    getline(cin, s.firstName);
    cin.ignore();
    cout << "Enter student's last name: ";
    getline(cin, s.lastName);
    cin.ignore();
    cout << "Enter student's gender [M/F]: ";
    cin >> s.gender;
    s.gender = toupper(s.gender[0]);
    cout << "Enter day of birth: ";
    cin >> s.dob;
    cout << "Enter social ID: ";
    cin >> s.socialid;
    if (s.socialid.length() != 12) {
        cout << "Wrong social ID format" << endl;
        student newStudent;
        s = newStudent;
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

scoreboardNode* findCourseScoreboard(scoreboardNode *head, const string &ID) {
    while (head) {
        if (head->data.courseID == ID) {
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
    newhead = nullptr;
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


//main features functions

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
    // if (SC.length() > 5) {
    //     string temp1 = SC.substr(4);
    //     string temp2 = SC.substr(5, 4);
    //     if (abs(stoi(temp1) - stoi(temp2)) != 1 || SC[4] != '-') {
    //         cout << "Invalid input" << endl;
    //         return;
    //     }
    // }
    string yearPath = "Data/"+SC;
    if (rename((yearPath).c_str(), (yearPath).c_str()) == 1) {
        cout << "That school year has already been created" << endl;
        return;
    }
    year._schoolYear = SC;
    year._class = nullptr;
    year._semester = new semester[3];
    year._semester[0].name = "Spring semester";
    year._semester[1].name = "Summer semester";
    year._semester[2].name = "Autumn semester";
    for (int i = 0; i < 3; i++){
        year._semester->start = "NULL";
        year._semester->end = "NULL";
        year._semester->_course = nullptr;
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
    while (true) {
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
                cout << "\t" << currClass->data.name << ": \n";
                displayStudentList(currClass->data._student);
                currClass = currClass->next;
            }
            break;
        }
        else {
            cout << "Invalid choice please try again" << endl;
        }
    }
}

void createClass(schoolYear &SC) {
    cout << "\n----------Create class----------" << endl;
    cout << "Choose a way to create classes: \n\t1. Single Creation \n\t2. Mass Creation" << endl;
    cout << "Your option: ";
    char choice;
    cin >> choice;
    if (choice == '1') {
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
        string className = SC._schoolYear+type;
        cout << "New classes range starts from: " << className;
        int r1;
        cin >> r1;
        int r2;
        cout << " to " << className << endl;
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
    idx = 1;
    curr = _schoolYear._class;
    while (curr) {
        if (idx == choice) {
            break;
        }
        idx++;
        curr = curr->next;
    }
    _class c = curr->data;
    cout << "Choose a way: \n\t1. Individually \n\t2. By file" << endl;
    cout << "Choose an option: ";
    cin >> choice;
    if (choice == 1) {
        student temp;
        addStudentIndividually(temp);
        if (checkStudentExistence(_schoolYear, temp)) {
            cout << "This student has already been added" << endl;
            return;
        }
        temp.index = 0;
        temp.className = c.name;
        addStudentNode(c._student, temp);
        curr->data = c;
    }
    else if (choice == 2) {
        studentNode *_student = nullptr;
        addStudentByFile(_student, c.name);
        studentNode *currStudentNode = _student;
        //check duplicate in input file
        while (currStudentNode) {
            if (checkStudentExistence(_schoolYear, currStudentNode->data)) {
                //cout << "This student has already been added" << endl;
                deleteStudentNode(_student, currStudentNode->data.id);
                continue;
            }
            currStudentNode = currStudentNode->next;
        }
        c._student = _student;
        _student = currStudentNode = nullptr;
        curr->data = c;
    }
    else {
        cout << "Invalid option!" << endl;
    }
    curr = nullptr;
}

void createSemester(schoolYear &SY) {
    cout << "\n----------Create semester----------\n" << endl;
    cout << "Choose a semester to create: \n\t1. Spring semester \n\t2.Summer semester \n\t3. Autumn semester" << endl;
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

void createCourse(semester &_semester) {
    //add input validation here
    cout << "\n----------Create course----------\n";
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

    //add enrolled students
}

void addStudentToCourse(const schoolYear &_schoolYear, course &_course) {
    cout << "\n---------Add student to course--------\n" << endl;
    cout << "Choose a way: \n\t1. Individually \n\t2. By file" << endl;
    cout << "Choose an option: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        student placeHolder;
        addStudentIndividually(placeHolder);
        placeHolder.index = 0;
        classNode *currClass = _schoolYear._class;
        placeHolder.className = "NULL";
        while (currClass) {
            studentNode *temp = findStudent(currClass->data._student, placeHolder.id);
            if (temp) {
                placeHolder.className = temp->data.className;
                temp = nullptr;
                break;
            }
            temp = nullptr;
            currClass = currClass->next;
        }
        if (placeHolder.className == "NULL") {
            cout << "This student has not been added to any class" << endl;
            currClass = nullptr;
            return;
        }
        addStudentNode(_course.enrolled, placeHolder);
    }
    else if (choice == 2) {
        studentNode *placeHolder = nullptr;
        addStudentByFile(placeHolder, "");
        student sample = placeHolder->data;
        classNode *currClass = _schoolYear._class;
        string commonClassName = "NULL";
        while (currClass) {
            studentNode *temp = findStudent(currClass->data._student, sample.id);
            if (temp) {
                commonClassName = temp->data.className;
                temp = nullptr;
                break;
            }
            temp = nullptr;
            currClass = currClass->next;
        }
        if (commonClassName == "NULL") {
            cout << "Error! This student has not been added in any class" << endl;
            deleteStudentList(placeHolder);
            currClass = nullptr;
            return;
        }
        _course.enrolled = placeHolder;
        while (placeHolder) {
            placeHolder->data.className = commonClassName;
        }
        placeHolder = nullptr;
        currClass = nullptr; 
    }
    else {
        cout << "Invalid option!" << endl;
    }
}

void removeStudentFromCourse(course &_course, const string &studentID) {
    cout << "\n----------Remove student from course----------\n" << endl;
    deleteStudentNode(_course.enrolled, studentID);
}

void deleteCourse(semester &_semester, const string &ID) {
    cout << "\n----------Delete course----------\n" << endl;
    deleteStudentList(findCourse(_semester._course, ID)->data.enrolled);
    deleteCourseNode(_semester._course, ID);
}

void updateCourseInfo(course &_course) {
    //requires view course info
}

void updateStudentResult(const schoolYear &_schoolYear, const course &_course) {
    cout << "\n----------Update student result----------\n" << endl;
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

void exportCourseStudent(const string &_schoolYear, const course &_course) {
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
