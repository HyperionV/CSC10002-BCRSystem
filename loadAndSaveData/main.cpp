#include "_modification_.h"
#include <iostream>
#include <string>
#include <dirent.h>

using namespace std;

courseNode* loadCourse(const string &path);
void addSemesterNode(semesterNode* &head, semester curr);
semesterNode* loadSemester(const string &path);
void loadStudentByFile(studentNode *&head, const string &filePath);
void loadStudentByFile(studentNode *&head, const string &classname, const string &filePath);
scoreboard* newScoreBoard(scoreboard cur);
void loadStudentScoreboard(scoreboardNode* &list, const string &path);
void loadCourseScoreboard(scoreboardNode* &list, const string &path);
studentNode* loadStudentsFromClass(const string &path ,const string& className);
schoolYear* loadSchoolyear(const string &path, const string &sY);
classNode* loadClass(const string &path);

void addSemesterNode(semesterNode* &head, semester curr) {
    semesterNode* temp= new semesterNode;
    temp->name = curr;
    if(!head) {
        head= temp;
        return;
    }
    else {
        semesterNode* move= head;
        while(move->next) {
            move= move->next;
        }
        move->next->name= curr;
    }
    return;
}

semesterNode* loadSemester(const string &path) {
    semesterNode* curr = new semesterNode;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = path + "/" + entry_name;
                if(dir_entry->d_type == DT_DIR) {
                    curr->name._course= loadCourse(full_path);
                }
                else if(dir_entry->d_type == DT_REG) {
                    ifstream ifs {path + "/" + entry_name};
                    getline(ifs, curr->name.start);
                    getline(ifs, curr->name.end);
                }
            }
        }
        closedir(directory);
    }
    return curr;
}

void loadStudentByFile(studentNode *&head, const string &filePath) {
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
        cout << placeHolder << " ";
        temp.index = stoi(placeHolder);
        getline(in_file, temp.id, ',');
        getline(in_file, temp.firstName, ',');
        getline(in_file, temp.lastName, ',');
        getline(in_file, temp.className);
        addStudentNode(head, temp);
    }
    studentNode* curr = head;
    while (curr->next && curr->next->next) {
        curr = curr->next;
    }
    curr->next = nullptr;
    return;
    in_file.close();
}

void loadStudentByFile(studentNode *&head, const string &classname, const string &filePath) {
    DIR* directory = opendir(filePath.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                string full_path = filePath + "/" + entry_name + "/info.txt";
                ifstream in_file {full_path};
                if (!in_file) {
                    cout << "Error while opening file! Please check if the path was correct" << endl;
                    return;
                }
                student temp;
                string placeHolder;
                getline(in_file, placeHolder, ',');
                cout << placeHolder << " ";
                temp.index = stoi(placeHolder);
                getline(in_file, temp.id, ',');
                getline(in_file, temp.firstName, ',');
                getline(in_file, temp.lastName, ',');
                getline(in_file, temp.gender, ',');
                getline(in_file, temp.dob, ',');
                getline(in_file, temp.socialid, ',');
                temp.className = classname;
                addStudentNode(head, temp);
            }
        }
    }
}
scoreboard* newScoreBoard(scoreboard cur) {
    scoreboard* temp= new scoreboard;
    temp->courseID = cur.courseID;
    temp->midterm = cur.midterm;
    temp->final = cur.final;
    temp->other = cur.other;
    temp->total = cur.total;
    return temp;
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
                ifstream ifs {full_path};
                if(!ifs) {
                    cout << "Error while opening file ! Please try agian later !" << endl;
                    return;
                }
                while(!ifs.eof()) {
                    scoreboard curr;
                    string hold;
                    getline(ifs, curr.courseID, ';');
                    getline(ifs, curr.courseName, ';');
                    getline(ifs, hold, ';');
                    curr.other = stod(hold);
                    getline(ifs, hold, ';');
                    curr.midterm = stod(hold);
                    getline(ifs, hold, ';');
                    curr.final = stod(hold);
                    getline(ifs, hold);
                    curr.total = stod(hold);
                    hold.clear();
                    addScoreboardNode(list, curr);
                }
            ifs.close();
            }
        }
    }
    return;
}

void loadCourseScoreboard(scoreboardNode* &list, const string &path) {
    ifstream ifs {path};
    if(!ifs) {
        cout << "Error while opening file ! Please try agian later !" << endl;
        return;
    }
    while(!ifs.eof()) {
        scoreboard curr;
        string hold;
        getline(ifs, curr.courseID, ';');
        getline(ifs, curr.courseName, ';');
        getline(ifs, hold, ';');
        curr.other = stod(hold);
        getline(ifs, hold, ';');
        curr.midterm = stod(hold);
        getline(ifs, hold, ';');
        curr.final = stod(hold);
        getline(ifs, hold);
        curr.total = stod(hold);
        hold.clear();
        addScoreboardNode(list, curr);
    }
    return;
}

courseNode* loadCourse(const string &path) {
    courseNode* list = nullptr;
    DIR* directory = opendir(path.c_str());
    if(directory != NULL) 
    {
        struct dirent *dir_entry;
        while((dir_entry = readdir(directory))) {
            string entry_name = dir_entry->d_name;
            if(entry_name != "." && entry_name != "..") {
                course curr;
                if(entry_name == "enrolled.txt") {
                    string full_path = path + "/" + entry_name;
                    loadStudentByFile(curr.enrolled, full_path);
                }
                else if(entry_name == "info.txt") {
                    string full_path = path + "/" + entry_name;
                    ifstream ifs {full_path};
                    string hold;
                    getline(ifs, curr.id, ',');
                    getline(ifs, curr.name, ',');
                    getline(ifs, curr.className, ',');
                    getline(ifs, hold, ',');
                    curr.credit = stod(hold);
                    getline(ifs, curr.day, ',');
                    getline(ifs, curr.session);
                }
                else {
                    string full_path = path + "/" + entry_name;
                    loadCourseScoreboard(curr.list, full_path);
                    addCourseNode(list, curr);
                }
            }
        }
    }
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
                loadStudentByFile(curr, className, path );
                loadStudentScoreboard(curr->data._course, path + "/Scoreboard.txt");
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

schoolYear* loadSchoolyear(const string &path, const string &sY) 
{
    schoolYear* curr = new schoolYear;
    curr->_schoolYear = sY;
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
                            curr->_class= loadClass(cur_path);
                        }
                        else {
                            string cur_path = full_path + "/" + entry_name1;
                            semesterNode* Sem= loadSemester(cur_path);
                            addSemesterNode(curr->sem, Sem->name);
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

void traverse_directory(const string& path)
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
                    cout << "Directory: " << full_path << endl;
                    traverse_directory(full_path);
                }
                else if (dir_entry->d_type == DT_REG)
                {
                    cout << "File: " << full_path << endl;
                }
            }
        }
        closedir(directory);
    }
    else
    {
        cerr << "Error: Failed to open directory " << path << endl;
    }
}


/////////////////////////////////////////////////////////////////////////////


void writeStudentInClass(studentNode *&studentList, const string &path) {
    ofstream ofs;
    string full_path = path + "/info.txt";
    ofs.open(full_path);

    while(studentList) {
        ofs << studentList->idx << "," ;
        ofs << studentList->data.id << ",";
        ofs << studentList->data.firstName << ",";
        ofs << studentList->data.lastName << ",";
        ofs << studentList->data.gender << ",";
        ofs << studentList->data.dob << endl;
        studentList = studentList->next;
    }
    ofs.close();
    return;
}

void writeStudentScoreboard(scoreboardNode* &courseList, const string &path) {
    ofstream ofs;
    string full_path = path + "/Scoreboard.txt";

    ofs.open(full_path);

    while(courseList) {
        ofs << courseList->data.courseID << ";";
        ofs << courseList->data.courseName << ";";
        ofs << courseList->data.other << ";";
        ofs << courseList->data.midterm << ";";
        ofs << courseList->data.final << ";";
        ofs << courseList->data.total << endl;
        courseList= courseList->next;
    }
    ofs.close();
    return;
}

void writeCourseScoreboard(courseNode* &list, const string &path) {
    ofstream ofs {path};
    while(list) {
        ofs << list->data.enrolled->data.id << ";" << list->data.enrolled->data.firstName << ";" << list->data.enrolled->data.firstName << ";" << list->data.enrolled->data.className << ";";
        ofs << list->data.list->data.other << ";";
        ofs << list->data.list->data.midterm << ";";
        ofs << list->data.list->data.final << ";";
        ofs << list->data.list->data.total << endl;
        list= list->next;
    }
    ofs.close();
    return;
}

void writeCourseEnrolls(studentNode* enrolled, const string &path) {
    ;

}

void writeCourse(courseNode* list , const string &path) {
    ofstream ofs; 
    while(list) {
        ////create course folder
        string full_path = path + "/" + list->data.name;
        mkdir((full_path).c_str());
        ////write enrolls to course
        writeCourseEnrolls(list->data.enrolled, full_path + "/enrolled.txt");
        ////write course info to file
        ofs.open(full_path + "/info.txt");
        ofs << list->data.name << "," << list->data.id << "," << list->data.teacher << "," << list->data.credit << "," << list->data.max << list->data.day << "," << list->data.session;
        ////write course scoreboard to file
        writeCourseScoreboard(list, full_path + "/Scoreboard.txt");
        list= list->next;
    }
    ofs.close();
    return;
}

void writeClass(classNode* classList ,const string &path) {
    while(classList) {
        string full_path = path + "/" + classList->data.name;
        mkdir((full_path).c_str());
        writeStudentInClass(classList->data._student, full_path);
        writeStudentScoreboard(classList->data._student->data._course, full_path);
        classList = classList->next;
    }
    return;
}

void* writeSchoolyear(string path, schoolYear* sY)  
{
    path = path + "/" + sY->_schoolYear;
    ////create school year folder
    mkdir(path.c_str());
    ////Write semesters to folder
    while(sY->sem) {
        ofstream ofs;
        string full_path = path + "/" + sY->sem->name.name;
        ////create semester folder
        mkdir(full_path.c_str());
        ////create info file of semester
        ofs.open(full_path + "/info.txt");
        ofs << sY->sem->name.start << "," << sY->sem->name.end << "," << sY->_schoolYear;
        ////write courses to semester's folder
        writeCourse(sY->sem->name._course, full_path);
        sY->sem = sY->sem->next;
    }
    ////Write student to classes 
    mkdir((path + "/Classes").c_str());
    writeClass(sY->_class, path + "/Classes");

}
int main()
{
    string start_path = "Data";

    schoolYear* hold = loadSchoolyear(start_path, "2020-2021");



    return 0;
}
