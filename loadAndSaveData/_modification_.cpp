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
    curr->data.index = temp->data.index+1;
    curr->next = nullptr;
    temp->next = curr;
    temp = curr = nullptr;
    return;
}

void getContentOfFile(const string &path, stringNode *&head) {
    ifstream ifile {path};
    if (!ifile) {
        cout << "Cannot open file at: " << path << endl;
    }
    string t;
    while (ifile >> t) {
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
        temp.className = className;
        addStudentNode(head, temp);
    }
    studentNode* curr = head;
    //the last line will be a blank line so we have to manually remove it
    while (curr->next && curr->next->next) {
        curr = curr->next;
    }
    curr->next = nullptr;
    return;
    in_file.close();
}

void addStudentIndividually(student &s) {
    //validate input

    cout << "\n--------Add student individually--------\n" << endl;
    cout << "Enter ID of student: ";
    cin >> s.id;
    cout << "Enter student's first name: ";
    cin >> s.firstName;
    cin.ignore();
    cout << "Enter student's last name: ";
    cin >> s.lastName;
    cin.ignore();
    cout << "Enter student's gender [M/F]: ";
    cin >> s.gender;
    s.gender = toupper(s.gender[0]);
    cout << "Enter day of birth: (DD/MM/YY) : ";
    cin >> s.dob;
    cout << "Enter social ID: ";
    cin >> s.socialid;
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
}

void deleteStudentList(studentNode *&head) {
    while (head) {
        studentNode *curr = head;
        head = head->next;
        deleteScoreboardList(curr->data._course);
        delete curr;
    }
}

void deleteClassList(classNode *&head) {
    while (head) {
        classNode *curr = head;
        head = head->next;
        deleteStudentList(curr->data._student);
        delete curr;
    }
}

void deleteCourseList(courseNode *&head) {
    while (head) {
        courseNode *curr = head;
        head = head->next;
        deleteStudentList(curr->data.enrolled);
        delete curr;
    }
}

void deleteScoreboardList(scoreboardNode *&head) {
    while (head) {
        scoreboardNode *curr = head;
        head = head->next;
        delete curr;
    }
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
    newhead = nullptr;
}

void deleteCourseNode(courseNode *&head, const string &ID) {
    courseNode *newhead = nullptr;
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
    newhead = nullptr;
}

void deleteClassNode(classNode *&head, const string &className) {
    classNode* newhead = nullptr;
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
    newhead = nullptr;
}

void deleteStudentNode(studentNode *&head, const string &studentID) {
    studentNode *newhead = nullptr;
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
        int temp = stoi(SC);
        temp += 1;
        SC += "-" + to_string(temp);
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
        while (currStudentNode) { //O(n^2)
            if (checkStudentExistence(_schoolYear, currStudentNode->data)) {
                cout << "This student has already been added" << endl;
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
    choice--;
    if (SY._semester[choice].start != "NULL") {
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
    SY._semester[choice].start = tempStart;
    SY._semester[choice].end = tempEnd;
    cout << "Created " << SY._semester[choice].name << " for school year " << SY._schoolYear << ". The semester starts on " << SY._semester[choice-1].start << ", ends on " << SY._semester[choice-1].end << endl; 
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
    getline(cin, temp.teacher);
    cout << "Enter number of credits: ";
    cin >> temp.credit;
    cin.ignore();
    cout << "Enter maximum number of students: ";
    cin >> temp.max;
    cin.ignore();
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
    studentNode *curr = _course.enrolled;
    while (curr) {
        exportFile << curr->data.index <<","<<curr->data.id<<","<<curr->data.firstName<<" "<<curr->data.lastName<<endl;
        curr = curr->next;
    }
    exportFile.close();
    curr = nullptr;
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
                if(dir_entry->d_type == DT_DIR) {
                    course hold= loadCourse(full_path);
                    addCourseNode(curr._course, hold);
                }
                else if(dir_entry->d_type == DT_REG) {
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

// scoreboard* newScoreBoard(scoreboard curr) {
//     scoreboard* temp= new scoreboard;
//     temp->courseID = curr.courseID;
//     temp->midterm = curr.midterm;
//     temp->final = curr.final;
//     temp->other = curr.other;
//     temp->total = curr.total;
//     return temp;
// }

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
        struct dirent *dir_entry, *dir_entry1;
        while (dir_entry = readdir(directory)) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != ".." && entry_name == sY) {
                string full_path = path + "/" + entry_name;
                DIR* direc= opendir(full_path.c_str());
                while(dir_entry1 = readdir(direc)) {
                    string entry_name1= dir_entry1->d_name;
                    if(entry_name1 != "." && entry_name1 != ".." && dir_entry1->d_type == DT_DIR) {
                        if(entry_name1 == "Classes") {
                            string cur_path =  full_path + '/' + entry_name1;
                            curr._class= loadClass(cur_path);
                        }
                        else {
                            string cur_path = full_path + "/" + entry_name1;
                            curr._semester[index++] = loadSemester(cur_path, entry_name1);
                        }
                    }
                }
                break;
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

void loadStudentScoreboard(scoreboardNode* &list, const string &path) {
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
                    addScoreboardNode(list, curr);
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
            string entry_name = dir_entry->d_name;
            if (entry_name != "." && entry_name != "..")
            {
                string full_path = path + "/" + entry_name;
                if (dir_entry->d_type == DT_DIR)
                {
                    delete_directory(full_path);
                    rmdir(full_path.c_str());
                }
                else if (dir_entry->d_type == DT_REG)
                {
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
            //DELETE AFTER DATA IS SAVED
            scoreboardNode* del= studentList->data._course;
            studentList->data._course= studentList->data._course->next;
            delete del;
            del = nullptr;
        }
        out_file1.close();
        //DELETE AFTER DATA IS SAVED
        studentNode* del= studentList;
        studentList = studentList->next;
        delete del;
        del= nullptr;
    }
    return;
}

void writeCourseEnrolls(courseNode* &list, const string &path) {
    ofstream out_file {path};
    courseNode* holdToDelete= list;
    while(list->data.enrolled) {
        out_file << list->data.enrolled->data.id << "," << list->data.enrolled->data.firstName << "," << list->data.enrolled->data.lastName << "," << list->data.enrolled->data.className << ",";
        out_file << list->data.enrolled->data._course->data.other << ",";
        out_file << list->data.enrolled->data._course->data.midterm << ",";
        out_file << list->data.enrolled->data._course->data.total << ",";
        out_file << list->data.enrolled->data._course->data.final;
        if(list->data.enrolled->next)
            out_file << endl;
        //DELETE AFTER DATA IS SAVED
        deleteScoreboardList(list->data.enrolled->data._course);
        studentNode* del= list->data.enrolled;
        list->data.enrolled= list->data.enrolled->next;
        delete del;
        del = nullptr;
    }
    out_file.close();
    return;
}

void writeCourse(courseNode* &list , const string &path) {
    courseNode* holdToDelete = list;
    ofstream out_file; 
    while(list) {
        ////create course folder
        string full_path = path + "/" + list->data.id;
        mkdir((full_path).c_str());
        ////write enrolls to course
        writeCourseEnrolls(list, full_path + "/enrolled.txt");
        ////write course info to file
        out_file.open(full_path + "/info.txt");
        out_file << list->data.id << "," << list->data.name << "," << list->data.className << "," << list->data.teacher << "," << list->data.credit << "," << list->data.max << "," << list->data.day << "," << list->data.session;
        out_file.close();
        
        list= list->next;
    }
    //DELETE AFTER DATA IS SAVED
    deleteCourseList(holdToDelete);
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
    //DELETE AFTER DATA IS SAVED
    deleteClassList(holdToDelete);
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
    delete [] sY._semester;
    ////Write student to classes 
    mkdir((path + "/Classes").c_str());
    writeClass(sY._class, path + "/Classes");

}
