#include "_modification_.h"

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
    studentNode* temp = new studentNode;
    temp->data = source;
    if (!head) {
        head = temp;
        head->data = source;
        head->next = nullptr;
        return;
    }
    studentNode *cur = head;
    while (cur->next) {
        cur = cur->next;
    }
    cur->next = temp;
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
    studentInfo << source.id << "," << source.firstName << "," << source.lastName << "," << source.gender << "," << source.dob << "," << source.socialid << "," << defaultPassword << endl;
    studentInfo.close();
}

void createSchoolYear(schoolYear &source, string name) {
    cout << "\n--------Create school year--------\n" << endl;
    //check valid year

    //
    if (name.length() < 5) {
        int temp = stoi(name);
        temp++;
        name = name + "-" + to_string(temp);
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
        ofile << temp.id << endl;
        ofile.close();
        string studentClass = checkClassOfStudent(temp, schoolYear);
        if (studentClass == "others") {
            if (mkdir(("Data/"+schoolYear+"/others/"+temp.id).c_str()) == -1) {
                return;
            }
            saveStudentInfo("Data/"+schoolYear+"/others/"+temp.id+"/info.txt", temp);
        }
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
            ofile << curr->data.id << endl;
            string studentClass = checkClassOfStudent(curr->data, schoolYear);
            if (studentClass == "others") {
                if (mkdir(("Data/"+schoolYear+"/others/"+curr->data.id).c_str()) == -1) {
                    continue;
                }
                saveStudentInfo("Data/"+schoolYear+"/others/"+curr->data.id+"/info.txt", curr->data);
            }
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



////////////////////Huy//////////////////////////
void delCourse(const semester &source) {
    course temp;
    cout << "\n--------Delete course--------\n" << endl;
    cout << "Enter course ID: ";
    cin >> temp.id;
    string pathID = "Data/"+source.schoolYear+"/Semester_"+source.sem+"/"+temp.id ;
    if(remove((pathID + "/info.txt").c_str()) == 0) {
            if(_rmdir(pathID.c_str()) != -1) {
                cout << "Delete successfully" << endl;
            }
            else {
                cout << "This course is not exist" << endl;
            }
    }
    else {
        cout << "This course is not exist" << endl;
    } 
    return;
}
    
void delStudentInCourse(string cours, string schoolYear, string sem) {
    student del;
    cout << "\n--------Delete student in course--------\n" << endl;
    cout << "Enter student's ID : ";
    cin >> del.id;
    cout << "Enter student's first name : ";
    cin >> del.firstName;
    cout << "Enter student's last name : ";
    cin >> del.lastName;
    cout << "Enter student's gender [M/F]: ";
    cin >> del.gender;
    del.gender = toupper(del.gender[0]);
    cout << "Enter day of birth: ";
    cin >> del.dob;
    cout << "Enter social ID: ";
    cin >> del.socialid;
    string studentInfo = del.id + ',' + del.firstName + ',' + del.lastName + ',' + del.gender + ',' + del.dob + ',' + del.socialid;
    string pathID = "Data/"+schoolYear+"/Semester_"+sem+"/"+cours;
    ofstream ofs {pathID + "/enrolledTemp.txt"};
    ifstream ifs {pathID + "/enrolled.txt"};
    if(!ifs) {
        cout << "Error occurs ! Please try again."; 
        return;
    }
    else {
        string temp;
        while(getline(ifs, temp)) {
            if(temp == studentInfo) 
                continue;
            ofs << temp << endl;
        }
        ifs.close();
        ofs.close();
    }
    remove((pathID + "/enrolled.txt").c_str());
    if(!rename((pathID + "/enrolledTemp.txt").c_str(), (pathID + "/enrolled.txt").c_str())) {
        cout << "Deletion successfully !" << endl;
    }
    else {
        cout << "Failed !" << endl;
    }
    return ;
}

void updateCourseScoreboard(string cours, string schoolYear,string sem) {
    string path = "Data/"+schoolYear+"/Semester_"+sem+"/"+cours;
    cout << "\n--------Update scoreboard--------\n" << endl;
    cout << "Enter scoreboard's file name : " ;
    string fileScoreboard;
    cin >> fileScoreboard;
    ifstream ifs {fileScoreboard};
    ofstream ofs {path + "/Scoreboard.txt"}, ofs1;
    if(!ifs) {
        cout << "Error file !" ;
        return;
    }
    else {

        string temp;
        while(getline(ifs, temp)) {
            ofs << temp << endl;
            int idx= 0;
            string getStudentID ="";
            while(temp[idx] != ',') {
                getStudentID += temp[idx];
                idx++;
            }
            student tmp;
            tmp.id= getStudentID;
            string stuClass = checkClassOfStudent(tmp, schoolYear);
            ofs1.open("Data/" + schoolYear + "/Classes/" + stuClass + "/" + getStudentID + "/Scoreboard.txt", ios::app | ios::ate);
            ofs1 << cours << ',' << temp;
        }
        ifs.close();
        ofs.close();
        ofs1.close();
    }
    return;
}

scoreboard* newScoreBoard(scoreboard cur) {
    scoreboard* temp= new scoreboard;
    temp->courseId = cur.courseId;
    temp->midterm = cur.midterm;
    temp->final = cur.final;
    temp->other = cur.other;
    temp->total = cur.total;
    temp->next = nullptr;
    return temp;
}

void addScoreBoardNode(scoreboard* &head, scoreboard cur) {
    scoreboard* temp= newScoreBoard(cur);
    if(!head) {
        head = temp;
        return;
    }
    else {
        scoreboard* mover= head;
        while(mover->next) {
            mover = mover->next;
        }
        mover->next = temp;
    }
    return;
}

void viewStudentInCourse(string cours, string schoolYear, string sem) {
    string path = "Data/"+schoolYear+"/Semester_"+sem+"/"+cours +  "/enrolled.txt";
    cout << "\n-------View students in course--------\n" << endl;
    studentNode *head = nullptr;
    ifstream ifs {path};
    if(!ifs) {
        cout << "Error while opening file ! Please try agian later !" << endl;
        return;
    }
    while(!ifs.eof()) {
        student temp;
        string placeHolder;
        getline(ifs, placeHolder, ',');
        temp.index =  stoi(placeHolder) ;
        getline(ifs, temp.id, ',');
        getline(ifs, temp.firstName, ',');
        getline(ifs, temp.lastName, ',');
        getline(ifs, temp.gender, ',');
        getline(ifs, temp.dob, ',');
        getline(ifs, temp.socialid);

        addStudentNode(head, temp);
    }
    ifs.close();
    while(head) {
        cout << head->data.id << " ";
        cout << head->data.firstName << " ";
        cout << head->data.lastName << " ";
        cout << head->data.gender << " ";
        cout << head->data.dob <<   " ";
        cout << head->data.socialid << endl;
        head= head->next;
    }
    return;
}

void viewCourseScoreBoard(string cours, string schoolYear, string sem) {
    string path = "Data/"+schoolYear+"/Semester_"+sem+"/"+cours + "/Scoreboard.txt";
    cout << "\n-------View scoreboard of course--------\n" << endl;
    scoreboard* head;
    ifstream ifs {path};
    if(!ifs) {
        cout << "Error while opening file ! Please try agian later !" << endl;
        return;
    }
    while(!ifs.eof()) {
        string stuName, stuID, midterm, final, other, total;
        getline(ifs, stuID, ';');
        getline(ifs, stuName, ';');
        getline(ifs, midterm, ';');
        getline(ifs, final, ';');
        getline(ifs, other, ';');
        getline(ifs, total);

        cout << stuID << " " ;
        cout << stuName << " ";
        cout << midterm << " ";
        cout << final << " ";
        cout << other << " ";
        cout << total << " " << endl;
    }
    return;
}


void displayScoreboard(scoreboard* head) {
    while(head) {
        cout << head->courseId <<  " ";
        cout << head->midterm << " ";
        cout << head->other << " ";
        cout << head->final << " ";
        cout << head->total << endl;
        head= head->next;
    }
    return;
}

void viewStudentScoreboard(string schoolYear, string classes, string ID) {
    string path = "Data/" + schoolYear + '/' + "Classes/" + classes + '/' + ID + "/Scoreboard.txt";
    ifstream ifs {path};
    scoreboard* head= nullptr;
    if(!ifs) {
        cout << "Error while opening student's scoreboard ! Please try agian later." << endl;
        return;
    }
    else {
        while(!ifs.eof()) {
            string placeholder;
            scoreboard temp;
            string midterm, final, other, total, coursId;
            getline(ifs, temp.courseId, ';');
            getline(ifs, midterm, ';');
            getline(ifs, final, ';');
            getline(ifs, other, ';');
            getline(ifs, total);

            temp.final = stof(final);
            temp.midterm = stof(midterm);
            temp.other = stof(other);
            temp.total = stof(total);

            addScoreBoardNode(head, temp);
        }
    }
    cout << "Enter 1 to view a specific course" << endl;
    cout << "Enter 2 to view scoreboard of all course" << endl;
    cout << "Choice : ";
    int choice;
    cin >> choice;
    switch(choice) {
        case 1:
        {
            string coursId;
            cout << "Enter course's ID : ";
            cin >> coursId;
            scoreboard* cur= head;
            while(cur) {
                if(cur->courseId == coursId) {
                    cout << cur->courseId << " ";
                    cout << cur->midterm << " ";
                    cout << cur->other << " ";
                    cout << cur->final << " ";
                    cout << cur->total << endl;
                    break;
                }
                else {
                    cur = cur->next;
                }
            }
            break;
        }
        case 2:
            cout << "\n----------------Student's course scoreboard----------------\n";
            displayScoreboard(head);
    }
}

