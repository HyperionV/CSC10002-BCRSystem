#include <_modification_.h>

void addStringNode(stringNode *&head, string data) {
    if (head == nullptr) {
        head = new stringNode;
        head->data = data;
        head->next = nullptr;
        return;
    }
    stringNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    stringNode* curr = new stringNode;
    curr->data = data;
    curr->next = nullptr;
    temp->next = curr;
    temp = curr = nullptr;
}

void createSchoolYear(schoolYear &object, string name) {
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


}

void createSemester(schoolYear &object) {

}

void createClass(schoolYear &object) {
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
    ofstream out_file {"Data/"+object.SY+"/Classes/info.txt"};
    out_file << name << endl;
    out_file.close();
}