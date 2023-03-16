#include "_modification_.h"

//students' indexes????

void addStringNode(stringNode *&head, const string &data) {
    if (head == nullptr) {
        head = new stringNode;
        head->data = data;
        head->next = nullptr;
        head->index = 1;
        return;
    }
    stringNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    stringNode* curr = new stringNode;
    curr->data = data;
    curr->next = nullptr;
    curr->index = temp->index+1;
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
        cout << "\t" << curr->index << ". " << curr->data << endl;
        curr = curr->next;
    }
    curr = nullptr;
}

string checkClassOfStudent(const student &obj, const string &schoolYear) {
    string path = "Data/"+schoolYear+"/Classes/info.txt";
    stringNode *classList = nullptr;
    getContentOfFile(path, classList);
    stringNode *curr = classList;
    string classPath = "Data/"+schoolYear+"/Classes/";
    while (curr) {
        string tempPath = classPath+curr->data;
        if (rename(tempPath.c_str(), tempPath.c_str()) != -1) {
            return curr->data;
        }
    }
    return "others";
    //optimize linked list here - delete all nodes
}

void saveStudentInfo(string path, const student &source) {
    ofstream studentInfo {path};
    studentInfo << source.id << "," << source.firstName << "," << source.lastName << "," << source.gender << "," << source.dob << "," << source.socialid << endl;
    studentInfo.close();
}

void createSchoolYear(schoolYear &source, string name) {
    cout << "\n--------Create school year--------\n" << endl;
    //check valid year

    //
    if (name.length() < 5) {
        string temp = name;
        temp[3] += 1;
        name = name + "-" + temp;
    }
    if (mkdir(("Data/" + name).c_str()) == -1) {
        cout << "This school year has been created before" << endl;
        return;
    }
    cout << "Created school year " << name << endl; 
    if (mkdir(("Data/"+name+"/Classes").c_str()) == -1) {
        cout << "Error while creating Class folder for " << name << endl;   //for debugging purpose
        return;
    }
    source.SY = name;
    source.classes = nullptr;   //add first node using function
    source.semester = nullptr;  //add first node using function
    ofstream out_file {"Data/schoolYears.txt", std::ios::app};
    out_file << name << endl;
    out_file.close();

    //add action: create classes menu after creating new school year
}

void createSemester(semester &s) {
    cout << "\n--------Create new semester--------\n" << endl;
    cout << "Choose a school year to create new semester: ";
    string path = {"Data/schoolYears.txt"};
    stringNode *yearList = nullptr;
    getContentOfFile(path, yearList);
    cout << endl;
    displayListContentWithIndex(yearList);
    cout << "Your choice: ";
    int choice;
    cin >> choice;  //check input here
    stringNode *curr = yearList;
    while (curr && curr->index != choice) {
        curr = curr->next;
    }
    s.schoolYear = curr->data;
    cout << "Choose a semester to create: \n\tA. Spring semester \n\tB. Summer semester \n\tC. Autumn semester" << endl;
    string semChoice; ///Check input here
    cout << "Your choice: ";
    cin >> semChoice;
    s.sem = semChoice;
    string filepath = "Data/"+s.schoolYear+"/Semester_"+semChoice;
    if (mkdir((filepath).c_str()) == -1) {
        cout << "This semester has already been created" << endl;
        return;
    }
    cout << "Created new semester " << semChoice << " for school year " << s.schoolYear << endl;
    cout << "Update semester information" << endl;
    cout << "Enter semester start date: ";
    string start;
    cin >> start;
    cout << "Enter semester end date: ";
    string end;
    cin >> end;
    ofstream ofile {filepath+"/info.txt", std::ios::app};
    ofile << start << "," << end << "," << s.schoolYear << endl;
    ofile.close();
}

void createCourse(const semester &source) {
    course temp;
    cout << "\n--------Create course--------\n" << endl;
    cout << "Enter course ID: ";
    cin >> temp.id;
    string pathID = "Data/"+source.schoolYear+"/Semester_"+source.sem+"/"+temp.id;
    if (mkdir(pathID.c_str()) == -1) {
        cout << "This course has been created for this semester" << endl;
        return;
    }
    ofstream ofile {pathID+"/info.txt"};
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
    ofile << temp.id << "," << temp.name << "," << temp.className << "," << temp.teacher << "," << temp.credit << "," << temp.max << "," << temp.day << "," << temp.session << endl;
    ofile.close();
}

void createClass(schoolYear &source) {
    cout << "\n--------Create class--------\n" << endl;
    string name;
    cout << "Enter class identifier: ";
    cin >> name;
    string path = "Data/" + source.SY;
    path += "/Classes/" + name;
    if (mkdir(path.c_str()) == -1) {
        cout << "This class has been created before" << endl;
        return;
    }
    else {
        cout << "Created class " << name << endl;
    }
    addStringNode(source.classes, name);
    ofstream out_file {"Data/"+source.SY+"/Classes/info.txt", std::ios::app};
    out_file << name << endl;
    out_file.close();
}

void addStudentToCourse(course &c, const string &schoolYear, const string &sem) {
    string path = "Data/"+schoolYear+"/Semester_"+sem+"/"+c.id;
    cout << "\n--------Add student to course--------\n" << endl;
    cout << "Choose a way to add: \n\t1. By file \n\t2. Individually" << endl;
    cout << "Your choice: ";
    //add input validation
    //check if that student has enrolled in that course before
    int choice;
    cin >> choice;
    ofstream ofile {path+"enrolled.txt", std::ios::app};
    if (choice == 2) {
        student temp;
        addStudentIndividually(temp);
        string studentClass = checkClassOfStudent(temp, schoolYear);
        if (studentClass == "others") {
            cout << "Error! Unknown student!" << endl;
            ofile.close();
            return;
        }
        ofile << temp.id << endl;
        ofile.close();
        string studentPath = "Data/"+schoolYear+"/Classes/"+studentClass+"/"+temp.id;
        ofstream studentInfo {studentPath+"/info.txt", std::ios::app | std::ios::ate};
        studentInfo << c.id << endl;
        studentInfo.close();
        mkdir((studentPath+"/Scoreboard").c_str());
        ofstream scoreboard {studentPath+"/Scoreboard"+c.id+".txt"};
        scoreboard.close();
        return;
    }
    else if (choice == 1) {
        studentNode* head = nullptr;
        addStudentByFile(head);
        studentNode *curr = head;
        string classPath = "Data/"+schoolYear+"/Classes/";
        while (curr) {
            string studentClass = checkClassOfStudent(curr->data, schoolYear);
            if (studentClass == "others") {
                cout << "Error! Unknown student" << endl;
                curr = curr->next;
                continue;
            }
            ofile << curr->data.id << endl;
            string studentPath = "Data/"+schoolYear+"/Classes/"+studentClass+"/"+curr->data.id;
            ofstream studentInfo {studentPath+"/info.txt", std::ios::app | std::ios::ate};
            studentInfo << c.id << endl;
            studentInfo.close();
            mkdir((studentPath+"/Scoreboard").c_str());
            ofstream scoreboard {studentPath+"/Scoreboard"+c.id+".txt"};
            scoreboard.close();
            curr = curr->next;
            
            //add efficient method to remove linked list here
        }
        ofile.close();
    }
    else {
        cout << "Invalid option!" << endl;
        return;
    }
}

void addStudentToClass(const string &schoolYear, const string &className) {
    cout << "\n--------Add student to class--------\n" << endl;
    string classPath = "Data/"+schoolYear+"/Classes"+className;
    cout << "Choose a way to add: \n\t1. By file \n\t2. Individually" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    //add input validation
    //check if a student has been in that class
    if (choice == 2) {
        student temp;
        addStudentIndividually(temp);
        if (checkClassOfStudent(temp, schoolYear) != "others") {
            cout << "That student has already been assigned to a class" << endl;
            return;
        }
        ofstream classInfo {classPath+"/info.txt", std::ios::app | std::ios::ate};
        classInfo << temp.id << endl;
        classInfo.close();
        string studentPath = classPath+"/"+temp.id;
        mkdir(studentPath.c_str());
        mkdir((studentPath+"/Scoreboard").c_str());
        saveStudentInfo(studentPath+"/info.txt", temp);
    }
    else if (choice == 1) {
        studentNode *studentList = nullptr;
        addStudentByFile(studentList);
        string classPath = "Data/"+schoolYear+"/Classes"+className;
        ofstream classInfo {classPath+"/info.txt", std::ios::app | std::ios::ate};
        while (studentList) {
            if (checkClassOfStudent(studentList->data, schoolYear) != "others") {
                studentList = studentList->next;
                continue;
            }
            classInfo << studentList->data.id << endl;
            string studentPath = classPath+"/"+studentList->data.id;
            mkdir(studentPath.c_str());
            mkdir((studentPath+"/Scoreboard").c_str());
            saveStudentInfo(studentPath+"/info.txt", studentList->data);
            studentList = studentList->next;
            //remove this linked list completely later
        }
        classInfo.close();
    }
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