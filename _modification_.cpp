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

void getContentOfFile(string path, stringNode *&head) {
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

void createSchoolYear(schoolYear &object, string name) {
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
    object.SY = name;
    object.classes = nullptr;   //add first node using function
    object.semester = nullptr;  //add first node using function
    ofstream out_file {"Data/schoolYears.txt", std::ios::app};
    out_file << name << endl;
    out_file.close();

    //add action: create classes menu after creating new school year
}

void createSemester(schoolYear &object) {
    cout << "\n--------Create new semester--------\n" << endl;
    cout << "Choose a school year to create new semester: ";
    string path = {"Data/schoolYears.txt"};
    stringNode *yearList = nullptr;
    getContentOfFile(path, yearList);
    cout << endl;
    displayListContentWithIndex(yearList);
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    stringNode *curr = yearList;
    while (curr && curr->index != choice) {
        curr = curr->next;
    }
    string choosenYear = curr->data;
    cout << "Choose a semester to create: \n\tA. Spring semester \n\tB. Summer semester \n\tC. Autumn semester" << endl;
    string semChoice; ///Check for input here
    cout << "Your choice: ";
    cin >> semChoice;
    string filepath = "Data/"+choosenYear+"/Semester_"+semChoice;
    if (mkdir((filepath).c_str()) == -1) {
        cout << "This semester has already been created" << endl;
        return;
    }
    cout << "Created new semester " << semChoice << " for school year " << choosenYear << endl;
    cout << "Update semester information" << endl;
    cout << "Enter semester start date: ";
    string start;
    cin >> start;
    cout << "Enter semester end date: ";
    string end;
    cin >> end;
    ofstream ofile {filepath+"/info.txt", std::ios::app};
    ofile << start << "," << end << "," << choosenYear << endl;
    ofile.close();
}

void createCourse() {

}

void createClass(schoolYear &object) {
    cout << "\n--------Create class--------\n" << endl;
    string name;
    cout << "Enter class identifier: ";
    cin >> name;
    string path = "Data/" + object.SY;
    path += "/Classes/" + name;
    if (mkdir(path.c_str()) == -1) {
        cout << "This class has been created before" << endl;
        return;
    }
    else {
        cout << "Created class " << name << endl;
    }
    addStringNode(object.classes, name);
    ofstream out_file {"Data/"+object.SY+"/Classes/info.txt", std::ios::app};
    out_file << name << endl;
    out_file.close();
}