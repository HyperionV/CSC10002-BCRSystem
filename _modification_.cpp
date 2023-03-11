#include "_modification_.h"

void addStringNode(stringNode *&head, string content) {
    stringNode *temp = new stringNode;
    temp->data = content;
    temp->next = nullptr;
    temp->index = head->index+1;
    head->next  = temp;
    head = temp;
    temp = nullptr;
}

bool checkCreatedSemester(string choosen, string schoice) {
    string path = "Data/semesters/";
    path += choosen + "_";
    path += schoice;
    ifstream checker{path};
    if (checker) {
        checker.close();
        return false;
    }
    checker.close();
    return true;
}

void createSchoolYear(schoolYear &SC) {
    SC.sem = new semester[3];
    cout << "Enter school year: ";
    cin >> SC.name;
    if (SC.name.length() < 5) {
        string temp = SC.name;
        temp[3] += 1;
        SC.name += "-" + temp;
    }
    cout << SC.name << endl;
    ofstream schoolyears {"Data/schoolYears.txt", std::ios::app};
    schoolyears << SC.name << endl;
    while (true) {
        cout << "Enter class to create or Q to stop: ";
        string classname;
        cin >> classname;
        if (classname == "Q") {
            break;
        }
        if (createClass(classname)) {
            cout << "Created class " << classname << endl;
        }
    }
    schoolyears.close();
}

bool createClass(string name) {
    string path = "Data/classes/" + name;
    path += ".txt";
    const char *cpath = path.c_str();
    ifstream newclass {cpath};
    if (newclass) {
        cout << "Class has already been created" << endl;
        return false;
    }
    ofstream ofile {path};
    newclass.close();
    ofile.close();
    return true;
}

void createSemester() {
    ifstream schoolyears {"Data/schoolyears.txt"};  //luôn tồn tại năm học trong file schoolyears vì phải đi qua bước create school year thì mới có thể vào giao diện bên trong
    if (!schoolyears) {
        cout << "Error!" << endl;
        return;
    }
    if (schoolyears.eof()) {
        cout << "Error! No data found" << endl;
        return;
    }
    string start, end;
    cout << "Enter start date of the semester: ";
    cin >> start;
    cout << "Enter end date of the semester: ";
    cin >> end;
    stringNode *list = new stringNode;
    stringNode *current = list;
    list->index = 0;
    string placeholder;
    while (schoolyears >> placeholder) {
        addStringNode(current, placeholder);
    }
    list = list->next;
    cout << "\nCreated school years: \n";
    current = list;
    while (current) {
        cout << "\t" << current->index << ". " << current->data << endl;
        current = current->next;
    }
    string choosenYear;
    int choice;
    cout << "Choose a year to create new semester: ";
    cin >> choice;  //check valid input?
    current = list;
    while (current) {
        if (current->index == choice) {
            choosenYear = current->data;
            break;
        }
        current = current->next;
    }
    if (choosenYear == "") {
        cout << "Not a valid option" << endl; //allow retry if failed??
        return;
    }
    string schoice; //use char??
    cout << "Choose a semester to create: \n\tA. Spring semester \n\tB. Summer semester \n\tC. Autumn semester \nYour choice: ";
    cin >> schoice; //check valid input??
    if (!checkCreatedSemester(choosenYear, schoice)) {
        cout << "Error! This semester has already been created" << endl;
        return;
    }
    string path = "Data/semesters/";
    path += choosenYear + "_";
    path += schoice + ".txt";
    ofstream create_file {path};
    create_file << start << "," << end << ",";
    create_file.close();
}

void addStudentToClassIndividually(string classname) {
    string classpath = classname+".txt";
    ofstream ofile {"Data/classes/" + classpath};
    student temp;
    addStudentIndividual(temp);
    ofile <<temp.num<<","<<temp.id<<","<<temp.firstname<<","<<temp.lastname<<","<<temp.gender<<","<<temp.dob<<","<<temp.socialid<<endl;
    ofile.close();
}

void addStudentByFile(string classname) {
    string filepath;
    cout << "Enter filepath: ";
    cin >> filepath;
    ifstream checker {filepath};
    if (!checker) {
        cout << "Cannot find file" << endl;
        return;
    }
    string classpath = classname+".txt";
    ofstream ofile {"Data/classes/" + classpath};
    student temp;
    while (inputStudent(checker, temp)) {
        ofile <<temp.num<<","<<temp.id<<","<<temp.firstname<<","<<temp.lastname<<","<<temp.gender<<","<<temp.dob<<","<<temp.socialid<<endl;
    }
    checker.close();
    ofile.close();
}

bool inputStudent(ifstream &ifile, student &s) {
    if (ifile.eof()) {
        return false;
    }
    getline(ifile, s.num, ',');
    getline(ifile, s.id, ',');
    getline(ifile, s.firstname, ',');
    getline(ifile, s.lastname, ',');
    getline(ifile, s.gender, ',');
    getline(ifile, s.dob, ',');
    getline(ifile, s.socialid);
    return true;
}

void addStudentIndividual(student &s) {
    cout << "\nAdd student individually\n" << endl;
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter firstname: ";
    cin >> s.firstname;
    cout << "Enter lastname: ";
    cin >> s.lastname;
    cout << "Enter gender: ";
    cin >> s.gender;
    cout << "Enter DOB: ";
    cin >> s.dob;
    cout << "Enter social ID: ";
    cin >> s.socialid;
}