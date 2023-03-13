#include "_modification_.h"

void addStringNode(stringNode *&head, string data) {
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

string checkClassOfStudent(const student &obj, string schoolYear) {
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
    studentInfo << source.id << "," << source.firstName << "," << source.lastName << "," << source.gender << "," << source.dob << "," << source.socialid << "," << defaultPassword << endl;
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
    string pathID = "Data/"+source.schoolYear+"/Semester_"+source.sem+temp.id;
    if (mkdir(pathID.c_str()) == -1) {
        cout << "This course has been created for this semester" << endl;
        return;
    }
    ofstream ofile {pathID+"/info.txt"};
    cout << "Enter course name: ";  
    cin >> temp.name;
    cout << "Enter classname: "; 
    cin >> temp.className;
    cout << "Enter teacher name: ";
    cin >> temp.teacher;
    cout << "Enter number of credits: ";
    cin >> temp.credit;
    cout << "Enter maximum number of students: ";
    cin >> temp.max;
    cout << "Enter day of week: ";
    cin >> temp.day;
    cout << "Enter session: ";
    cin >> temp.session;
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
    cout << "Choose a way to add: \n\t1. By file \n\tIndividually" << endl;
    cout << "Your choice: ";
    //add input validation
    int choice;
    cin >> choice;
    ofstream ofile {path+"enrolled.txt", std::ios::app};
    if (choice == 1) {
        student temp;
        addStudentIndividually(temp);
        ofile << temp.id << endl;
        ofile.close();
        if (checkClassOfStudent(temp) == "others") {
            if (mkdir(("Data/"+schoolYear+"/others/"+temp.id).c_str()) == -1) {
                return;
            }
            ofstream studentInfo {"Data/"+schoolYear+"/others/"+temp.id+"/info.txt", std::ios::app | std::ios::ate};
            studentInfo << c.id << endl;
            studentInfo.close();
        }
        string studentPath = "Data/"+schoolYear+"/Classes/"+temp.id;
        ofstream studentInfo {studentPath+"/info.txt", std::ios::app | std::ios::ate};
        studentInfo << c.id << endl;
        studentInfo.close();
        return;
    }
    else if (choice == 2) {

    }
}

void addStudentByFile(student &s) {

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