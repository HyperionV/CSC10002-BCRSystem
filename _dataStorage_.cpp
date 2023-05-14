#include "_library_.h"

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
}

void autoSaveSchoolyear(schoolYear curSchoolyear) {
    string full_path = "Data/" + curSchoolyear._schoolYear;
    delete_directory(full_path);
    rmdir(full_path.c_str());
    writeSchoolyear("Data", curSchoolyear);
    return;
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
        cout << "Could not open the file!" << endl;
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
        getline(in_file, tempStaff.fullName, ',');
        getline(in_file, tempStaff.mail);
        addStaffNode(staffList, tempStaff);
    }
    return;
}

void autoSaveCredential(stringNode *accountList) {
    string path = "credential.txt";

    ofstream out_file(path);
    while(accountList) {
        out_file << accountList->data << endl;
        accountList = accountList->next;
    }
    out_file.close();
    return;
}

void saveStaffInfo(staffNode* head) {
    ofstream out_file("staff.txt");
    while(head) {
        out_file << head->staff.fullName << "," << head->staff.mail ;
        if(head->next) {
            out_file << endl;
        }
        head= head->next;
    }
    out_file.close();
    return;
}