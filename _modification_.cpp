#include "_modification_.h"
//main features functions

bool createSchoolYear(schoolYearNode *&head, schoolYear &year, stringNode* accountList) {
    // cout << "\n---------Create new school year----------" << endl;
    string SC;
    cout << "Enter school year: ";
    cin >> SC;
    if (SC.length() < 5) {
        int temp = stoi(SC);
        temp++;
        SC += "-" + to_string(temp);
    }
    if (SC.length() > 5) {
        string temp1 = SC.substr(5);
        string temp2 = SC.substr(0, 4);
        if (abs(stoi(temp2) - stoi(temp1)) != 1 || SC[4] != '-') {
            cout << "Invalid input" << endl;
            system("pause");
            return false;
        }
    }
    schoolYearNode *target = findSchoolYear(head, SC);
    if (target != nullptr) {
        cout << "This school year has been created before" << endl;
        system("pause");
        return false;
    }
    year._schoolYear = SC;
    year._class = nullptr;
    year._semester[0].name = "Semester 1";
    year._semester[1].name = "Semester 2";
    year._semester[2].name = "Semester 3";
    for (int i = 0; i < 3; i++){
        year._semester[i].start = "NULL";
        year._semester[i].end = "NULL";
        year._semester[i]._course = nullptr;
    }

    while (true) {
        system("cls");
        classNode *currClass = year._class;
        if (currClass) {
            cout << "Current classes: " << endl;
            while (currClass) {
                cout << "\t" << currClass->data.name << "\n";
                currClass = currClass->next;
            }
        }
        cout << "Choose an action below: " << endl;
        cout << "\t1. Create new class" << endl;
        cout << "\t2. Cancel" << endl;
        int choice;
        cout << "Your choice: ";
        choice = getChoiceInt();
        if (choice == 1 || choice == 1) {
            createClass(year);
        }
        else if (choice == 2 || choice == 2) {
            if (year._class == nullptr) {
                cout << "No class was created! Please create at least 1 class to proceed\n" << endl;
                system("pause");
                createClass(year);
            }
            else {
                cout << "Classes created successfully! Proceed to add students to classes\n" << endl;
                system("pause");
                break;
            }
        }
        else {
            cout << "Invalid choice\n" << endl;
            system("pause");
        }
    }
    while (true) {
        system("cls");
        cout << "Choose an action below:" << endl;
        cout << "\t1. Add new student to class" << endl;
        cout << "\t2. Cancel" << endl;
        int choice;
        cout << "Your choice: ";
        choice  = getChoiceInt();
        if (choice == 1) {
            addStudentToClass(year, accountList);
        }
        else if (choice == 2) {
            break;
        }
        else {
            cout << "Invalid choice\n" << endl;
            system("pause");
        }
    }
    return true;
}

void createClass(schoolYear &SC) {
    // cout << "\n----------Create class----------" << endl;
    string tmpYearNum = SC._schoolYear.substr(0, 4);
    string yearNum = tmpYearNum.substr(2);
    cout << "Choose a way to create classes: \n\t1. Single Creation \n\t2. Mass Creation" << endl;
    cout << "Your option: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 2 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 1) {
        cout << "Enter class name: " << yearNum;
        string name;
        cin >> name;
        for (auto &t: name) {
            t = toupper(t);
        }
        if (name != "CLC" && name != "APCS" && name != "VP") {
            cout << "\nInvalid type!\n" << endl;
            system("pause");
            return;
        }
        name = yearNum+=name;
        if (findClassName(SC._class, name)) {
            cout << "\nThis class has already been added\n" << endl;
            system("pause");
            return;
        }
        _class temp;
        temp.name = name;
        addClassNode(SC._class, temp);
        cout << "Created new class " << name << endl;
    }
    else if (choice == 2) {
        string type;
        cout << "Enter classes type [CLC/APCS/VP]" << endl;
        cout << "Your option: ";
        cin >> type;
        for (size_t i = 0; i < type.length(); i++) {
            type[i] = toupper(type[i]);
        }
        if (!(type == "CLC" || type == "APCS" || type == "VP")) {
            cout << "Unknown type! Please try again!" << endl;
            system("pause");
            return;
        }
        string className = yearNum+type;
        cout << "New classes range starts from: " << className;
        int r1;
        cin >> r1;
        int r2;
        cout << "to " << className;
        cin >> r2;
        if (r2 < r1) {
            cout << "Invalid range! Please try again!" << endl;
            system("pause");
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

void addStudentToClass(schoolYear &_schoolYear, stringNode* accountList) {
    classNode *curr = _schoolYear._class;
    cout << "Choose a class: " << endl;
    int idx = 1;
    while (curr) {
        cout << "\t" << idx++ << ". " << curr->data.name << endl;
        curr = curr->next;
    }
    int choice;
    cout << "Choose an class to add student: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 1) {
            cout << "Invalid option! Please try again!\n" << endl;
            system("pause");
            continue;
        }
        break;
    }
    idx = 1;
    curr = _schoolYear._class;
    while (idx != choice) {
        idx++;
        curr = curr->next;
    }
    _class c = curr->data;
    cout << "Choose a way to add new student: \n\t1. Individually \n\t2. By file \n\t3. Cancel" << endl;
    cout << "Your choice: ";
    int choice2;
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 <= 3 && choice2 >= 1) {
            break;
        }
        cout << "Invalid option! Please try again!" << endl;
    }
    if (choice2 == 1) {
        student temp;
        addStudentIndividually(temp);
        if (temp.id == "NULL") {
            return;
        }
        if (checkStudentExistence(_schoolYear, temp)) {
            cout << "\nThis student has already been added before\n" << endl;
            system("pause");
            return;
        }
        if (temp.id.substr(0,2) != c.name.substr(0,2)) {
            cout << "\nCannot add this student in this school year\n" << endl;
            system("pause");
            return;
        }
        temp.index = 0;
        temp.className = c.name;
        addStudentNode(c._student, temp);
        curr->data = c;
        cout << "\nSuccessfully added student to class\n" << endl;
        addStringNode(accountList, temp.id+":"+defaultPassword);
        autoSaveCredential(accountList);
        system("pause");
    }
    //Change the mechanism into adding node instead of removing node from the original list
    else if (choice2 == 2) {
        studentNode *_student = nullptr;
        studentNode *currStudentNode = nullptr;
        addStudentByFile(currStudentNode, c.name);
        while (currStudentNode) {
            // cout << "Student not null" << endl;
            if (!checkStudentExistence(_schoolYear, currStudentNode->data)) {
                addStudentNode(_student, currStudentNode->data);
                addStringNode(accountList, currStudentNode->data.id+":"+defaultPassword);
            }
            currStudentNode = currStudentNode->next;
        }
        autoSaveCredential(accountList);
        if (_student == nullptr) {
            cout << "\nErrors occured while adding student using file\n" << endl;
            system("pause");
            return;
        }
        if (c._student == nullptr) {
            c._student = _student;
            curr->data = c;
            _student = nullptr;
            cout << "\nStudents added to class successfully\n" << endl;
            system("pause");
            return;
        }
        studentNode *traverseNode = c._student;
        while (traverseNode || traverseNode->next) {
            traverseNode = traverseNode->next;
        }
        int currIdx = traverseNode->data.index;
        traverseNode->next = _student;        
        while (traverseNode->next) {
            traverseNode = traverseNode->next;
            traverseNode->data.index += currIdx;
        }
        _student = traverseNode = nullptr;
        curr->data = c;
        cout << "\nStudents added to class successfully\n" << endl;
        system("pause");
    }
    curr = nullptr;
}

void createSemester(schoolYear &SY) {
    // cout << "\n----------Create semester----------" << endl;
    cout << "Choose a semester to create: \n\t1. Semester 1 \n\t2. Semester 2 \n\t3. Semester 3" << endl;
    int choice;
    cout << "Choose a semester to create: ";
    choice = getChoiceInt();
    if (SY._semester[choice-1].start != "NULL") {
        cout << "This semester has already been created" << endl;
        system("pause");
        system("cls");
        return;
    }
    string tempStart;
    string tempEnd;
    //added date validation
    
    do {
        cout << "Enter start date: ";
        cin >> tempStart;
        }
    while (!checkValidDate(tempStart));
    
    do {
        cout << "Enter end date: ";
        cin >>tempEnd;
    }
    while (!checkValidDate(tempEnd));
    SY._semester[choice-1].start = tempStart;
    SY._semester[choice-1].end = tempEnd;
    cout << "\nCreated " << SY._semester[choice-1].name << " for school year " << SY._schoolYear << ". The semester starts on " << SY._semester[choice-1].start << ", ends on " << SY._semester[choice-1].end << "\n" << endl; 
    system("pause");
    system("cls");
}

void createCourse(schoolYear &_schoolYear, semester &_semester) {
    // cout << "\n----------Create course----------" << endl;
    course temp;
    cout << "Enter course ID: ";
    cin >> temp.id;
    if (findCourse(_semester._course, temp.id) != nullptr) {
        cout << "This course has already been created in this semester" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Enter course name: ";  
    cin.ignore();
    getline(cin, temp.name);
    cout << "Enter classroom: "; 
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
    courseNode *curr = _semester._course;
    while (curr->next) 
        curr = curr->next;
    cout << "Course created with the following information: " << endl;
    viewCourseInfo(curr->data);
    cout << "\nPlease enroll students to this course with a student list containing the following field: [index,studentID,first_name,last_name,class]" << endl;
    if (addStudentToCourseByFile(_schoolYear, curr->data)) {
        cout << "Students enrolled successfully" << endl;
    }
    else {
        cout << "Error(s) encountered while enrolling students. Please try again later" << endl;
    }
    system("pause");
    system("cls");
}

bool addStudentToCourseByFile(const schoolYear &_schoolYear, course &_course) {
    cout << "Enter file path: ";
    string filePath;
    cin.ignore();
    getline(cin, filePath);
    ifstream inputFile {"Import/"+filePath};
    if (!inputFile) {
        return false;
    }
    classNode *currYearClasses = _schoolYear._class;
    string placeHolder;
    int counter = getNumberOfStudents(_course.enrolled);
    getline(inputFile, placeHolder);    //skip the content line in the csv file
    while (inputFile.good()) {
        //check if the course is full
        if (counter >= _course.max) {
            break;
        }
        student tempStudent;
        string tmp;
        getline(inputFile, tmp, ',');
        if (tmp == "" || tmp == "\n") {
            break;
        } 
        tempStudent.index = stoi(tmp);
        getline(inputFile, tempStudent.id, ',');
        getline(inputFile, tempStudent.firstName, ',');
        getline(inputFile, tempStudent.lastName, ',');
        getline(inputFile, tempStudent.className);

        //check if the current student has been added to the enrolled list -> prevent duplication in input file
        studentNode* checkStudentDuplicate = findStudent(_course.enrolled, tempStudent.id);
        if (checkStudentDuplicate != nullptr) {
            // cout << "This student has already been added in this course" << endl;
            checkStudentDuplicate = nullptr;
            continue;
        }
        //check if the className provided was valid
        classNode *studentClass = findClassName(currYearClasses, tempStudent.className);
        if (studentClass == nullptr) {
            cout << "The class " << tempStudent.className << " of this student has not been created in the current year" << endl;
            continue;
        }
        //check if the current student is in a class
        studentNode *studentObject = findStudent(studentClass->data._student, tempStudent.id);
        if (studentObject == nullptr) {
            cout << "Cannot find student with the ID " << tempStudent.id << " in the given class!" << endl;
            studentClass = nullptr;
            continue;
        }
        //update scoreboard node inside student object contained in a class list -> add new course to that student profile in the class list
        scoreboard tempScoreboard;
        tempScoreboard.courseID = _course.id; 
        tempScoreboard.courseName = _course.name; 
        addScoreboardNode(studentObject->data._course, tempScoreboard);
        tempStudent= studentObject->data;
        tempStudent._course = new scoreboardNode;
        tempStudent._course->data = tempScoreboard;

        // deleteScoreboardList(tempStudent._course);

        addScoreboardNode(tempStudent._course, tempScoreboard);
        addStudentNode(_course.enrolled, tempStudent);
        counter++;
        studentObject = nullptr;
        studentClass = nullptr;
        checkStudentDuplicate = nullptr;
    }
    inputFile.close();
    currYearClasses = nullptr;
    return true;
}

void addStudentToCourseManually(const schoolYear &_schoolYear, course &_course) {
    if (getNumberOfStudents(_course.enrolled) >= _course.max) {
        cout << "This course is currently full" << endl;
        system("pause");
        system("cls");
        return;
    }
    student tempStudent;
    cout << "Enter student ID: ";
    cin >> tempStudent.id;
    if (tempStudent.id.length() != 8) {
        cout << "Invalid ID format!" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Enter student's class: ";
    cin >> tempStudent.className;
    //The criteria of a valid classname ???
    studentNode *checkStudentDuplicate = findStudent(_course.enrolled, tempStudent.id);
    if (checkStudentDuplicate != nullptr) {
        checkStudentDuplicate = nullptr;
        cout << "This student has already enrolled in this course" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode *studentClass = findClassName(_schoolYear._class, tempStudent.className);
    if (studentClass == nullptr) {
        cout << "The class of this student has not been created in the current year" << endl;
        system("pause");
        system("cls");
        return;
    }
    studentNode *checkStudent = findStudent(studentClass->data._student, tempStudent.id);
    if (checkStudent == nullptr) {
        cout << "Incorrect classname or student information" << endl;
        studentClass = nullptr;
        system("pause");
        system("cls");
        return;
    }
    scoreboard tempScoreboard;
    tempScoreboard.courseID = _course.id;
    tempScoreboard.courseName = _course.name;
    addScoreboardNode(checkStudent->data._course, tempScoreboard);
    tempStudent = checkStudent->data;
    tempStudent._course = new scoreboardNode;
    tempStudent._course->data= tempScoreboard;


    addStudentNode(_course.enrolled, tempStudent);
    cout << "\nSuccessfully enrolled this student to the course" << endl;
    system("pause");
    system("cls");
}
//bug: course not removed from student's scoreboard when delete course
//bug: course not removed from student's scoreboard when modifying course info 

void removeStudentFromCourse(schoolYear &_schoolYear, course &_course) {
    // cout << "\n----------Remove student from course----------" << endl;
    cout << "Students enrolled in this course: " << endl;
    displayStudentList(_course.enrolled);
    cout << "Choose a student to remove: ";
    int counter = getNumberOfStudents(_course.enrolled);
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > counter || choice < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    studentNode *curr = _course.enrolled, *prevCur= nullptr;
    int idx = 1;
    while (idx != choice) {
        idx++;
        prevCur = curr;
        curr = curr->next;
    }
    //find the student in to delete the course in his/her scoreboard list
    string className = curr->data.className;
    classNode *studentClass = findClassName(_schoolYear._class, className);
    studentNode *currStudent = findStudent(studentClass->data._student, curr->data.id);
    deleteScoreboardNode(currStudent->data._course, _course.id);

    //delete him/her from the course
    deleteScoreboardList(curr->data._course);
    cout << "\nRemoved student " << curr->data.id << " - " << curr->data.firstName << " " << curr->data.lastName << " from this course" << endl;
    if(idx != 1)
        prevCur->next = curr->next;
    else 
        _course.enrolled = curr->next;
    delete curr;

    system("pause");
    system("cls");
}

void deleteCourse(schoolYear &_schoolYear, course &_course) {
    studentNode* enrolledList = _course.enrolled;
    while (enrolledList) {
        string className = enrolledList->data.className;
        classNode *studentClass = findClassName(_schoolYear._class, className);
        studentNode *currStudent = findStudent(studentClass->data._student, enrolledList->data.id);
        deleteScoreboardNode(currStudent->data._course, _course.id);
        enrolledList = enrolledList->next;
    }
    deleteStudentList(_course.enrolled);
    for (int i = 0; i < 3; i++) {
        courseNode* target = findCourse(_schoolYear._semester[i]._course, _course.id);
        if (target) {
            deleteCourseNode(_schoolYear._semester[i]._course, _course.id);
            return;
        }
    }
}

void viewCourseInfo(const course &_course) {
    cout << "\t1. ID: " << _course.id << endl;
    cout << "\t2. Name: " << _course.name << endl;
    cout << "\t3. Classroom: " << _course.className << endl;
    cout << "\t4. Teacher: " << _course.teacher << endl;
    cout << "\t5. Credits: " << _course.credit << endl;
    cout << "\t6. Max number of students: " << _course.max << endl;
    cout << "\t7. Schedule: " << _course.session << " - " << _course.day << endl;
}

//bug: cannot delete course from student's scoreboard

void updateCourseInfo(schoolYear &_schoolYear, course &_course) {
    string prevID = _course.id;
    cout << "\n---------Update course info----------" << endl;
    string placeHolder;
    cout << "Current course info:" << endl;
    viewCourseInfo(_course);
    //enter new course info
    cout << "\nEnter new information for this course: ";
    cout << "\n\t1. ID: ";
    cin >> _course.id;
    cout << "\t2. Name: "; 
    cin.ignore();
    getline(cin, _course.name);
    cout << "\t3. Classroom: ";
    cin >> _course.className;
    cout << "\t4. Teacher: ";
    cin.ignore();
    getline(cin, _course.teacher);
    //repeatedly asking user to re-enter information if inputted wrongly
    while (true) {
        cout << "\t5. Credits: ";
        cin >> placeHolder;
        _course.credit = stoi(placeHolder);
        if (_course.credit > 5 || _course.credit <= 0) {
            cout << "Invalid input! Please try again!" << endl;
            continue;
        }
        break;
    }
    //repeatedly asking user to re-enter information if input wrongly
    while (true) {
        cout << "\t6. Max number of students: ";
        cin >> placeHolder;
        _course.max = stoi(placeHolder);
        if (_course.max <= 0) {
            cout << "Invalid input! Please try again" << endl;
            continue;
        }
        break;
    }
    cout << "\t7.1 Day: ";
    cin >> _course.day;
    for (int i = 0; i < _course.day.length(); i++) {
        _course.day[i] = toupper(_course.day[i]);
    }
    cout << "\t7.2 Session: ";
    cin >> _course.session;
    //display the new course information
    system("cls");
    cout << "Successfully updated course info" << endl;
    cout << "Current course info:";
    cout << "\n\t1. ID: " << _course.id;
    cout << "\n\t2. Name: " << _course.name;
    cout << "\n\t3. Classroom: " << _course.className;
    cout << "\n\t4. Teacher: " << _course.teacher;
    cout << "\n\t5. Credits: " << _course.credit;
    cout << "\n\t6. Max number of students: " << _course.max;
    cout << "\n\t7. Schedule: " << _course.session << " - " << _course.day << endl;
    system("pause");
    studentNode *currStudentNode = _course.enrolled;
    int counter = 1;
    studentNode *toBeDeleted= nullptr;
    while (currStudentNode) {
        classNode *currClassNode = findClassName(_schoolYear._class, currStudentNode->data.className);
        studentNode *target = findStudent(currClassNode->data._student, currStudentNode->data.id);
        scoreboardNode *currScoreboardNode = findCourseScoreboard(target->data._course, prevID);
        currScoreboardNode->data.courseID = _course.id;
        currScoreboardNode->data.courseName = _course.name;
        if (counter == _course.max) {
            toBeDeleted = currStudentNode->next;
            currStudentNode->next = nullptr;
            break;
        }
        counter++;
        currStudentNode = currStudentNode->next;
    }
    while (toBeDeleted) {
        classNode *currClassNode = findClassName(_schoolYear._class, toBeDeleted->data.className);
        studentNode *target = findStudent(currClassNode->data._student, toBeDeleted->data.id);
        deleteScoreboardNode(target->data._course, prevID);
        studentNode *curr = toBeDeleted;
        toBeDeleted = toBeDeleted->next;
        deleteScoreboardList(curr->data._course);
        delete curr;
    }
    currStudentNode = nullptr;
}

void updateStudentResult(const schoolYear &_schoolYear, const string &ID, student &source) {
    cout << "\n----------Update student result----------" << endl;
    cout << "Student: " << source.firstName << " " << source.lastName ;
    cout << "\nID: " << source.id << endl;
    cout << "\nCurrent result: ";
    cout << "\n\tOther: " << source._course->data.other;
    cout << "\n\tMidterm: " << source._course->data.midterm;
    cout << "\n\tFinal: " << source._course->data.final;
    cout << "\n\tTotal: " << source._course->data.total << endl;
    cout << "Enter new value for each type of scores: " << endl;
    cout << "\tOther: "; 
    cin >> source._course->data.other;
    cout << "\tMidterm: "; 
    cin >> source._course->data.midterm;
    cout << "\tFinal: "; 
    cin >> source._course->data.final;
    cout << "\tTotal: "; 
    cin >> source._course->data.total;
    classNode *studentClass = findClassName(_schoolYear._class, source.className);
    studentNode *OG = findStudent(studentClass->data._student, source.id);
    scoreboardNode *studentScore = findCourseScoreboard(OG->data._course, ID);

    if (!studentScore) {
        cout << "Error while update student result" << endl;
        system("pause");
        return;
    }
    studentScore->data.final = source._course->data.final;
    studentScore->data.other = source._course->data.other;
    studentScore->data.midterm = source._course->data.midterm;
    studentScore->data.total = source._course->data.total;
    system("pause");
    return ;
}

void updateStudentResult(const schoolYear &_schoolYear, scoreboardNode *curScoreboard, student& source) {
    cout << "\n----------Update student result----------" << endl;
    cout << "Student : " << source.firstName << " " << source.lastName ;
    cout << "\nID : " << source.id << endl;
    cout << "\nCurrent result: ";
    cout << "\n\tOther: " << curScoreboard->data.other;
    cout << "\n\tMidterm: " << curScoreboard->data.midterm;
    cout << "\n\tFinal: " << curScoreboard->data.final;
    cout << "\n\tTotal: " << curScoreboard->data.total << endl;
    cout << "Enter new value for each type of scores: " << endl;
    cout << "\tOther: "; 
    cin >> curScoreboard->data.other;
    cout << "\tMidterm: "; 
    cin >> curScoreboard->data.midterm;
    cout << "\tFinal: "; 
    cin >> curScoreboard->data.final;
    cout << "\tTotal: "; 
    cin >> curScoreboard->data.total;
    

    courseNode* currCourseNode = nullptr;
    for (int i = 0; i < 3; i++) {
        currCourseNode = findCourse(_schoolYear._semester[i]._course, curScoreboard->data.courseID);
        if (currCourseNode) {
            break;
        }
    }
    studentNode *courseStudent = findStudent(currCourseNode->data.enrolled, source.id);
    courseStudent->data._course->data = curScoreboard->data;
    system("pause");
    return ;
}

void exportStudentInfoList(const string &_schoolYear, const course &_course) {
    string filePath = "Export/"+_schoolYear+"_"+_course.id+".csv";
    ofstream exportFile {filePath};
    exportFile << "Index,ID,Name,Other,Midterm,Final,Total" << endl;
    studentNode *curr = _course.enrolled;
    int index= 1;
    while (curr) {
        exportFile << index++ <<","<<curr->data.id<<","<<curr->data.firstName<<" "<<curr->data.lastName << ",";
        exportFile << curr->data._course->data.other << "," << curr->data._course->data.midterm << "," <<curr->data._course->data.final << "," << curr->data._course->data.total;
        if(curr->next) {
            exportFile << endl;
        }
        curr = curr->next;
    }
    exportFile.close();
    cout << "Empty scoreboard exported at: " << filePath << endl;
    system("pause");
}

void importStudentScore(const schoolYear& _schoolYear, const course & _course) {
    string path;
    cout << "Enter scoreboard path: " ;
    getline(cin, path);

    ifstream in_file(path);

    if(!in_file) {
        cout << "Could not open file, please try again!" << endl;
        system("pause");
        return;
    }
    else {
        classNode *currClassList = _schoolYear._class;
        string placeholder;
        getline(in_file, placeholder);
        while(in_file.good()) {
            getline(in_file, placeholder, ',');
            if (placeholder == "" ||placeholder == "\n") break;
            getline(in_file, placeholder, ',');
            studentNode *temp = findStudent(_course.enrolled, placeholder);
            getline(in_file, placeholder, ',');
            getline(in_file, placeholder, ',');
            temp->data._course->data.other = stod(placeholder);
            getline(in_file, placeholder, ',');
            temp->data._course->data.midterm = stod(placeholder);
            getline(in_file, placeholder, ',');
            temp->data._course->data.final = stod(placeholder);
            getline(in_file, placeholder);
            temp->data._course->data.total = stod(placeholder);
            placeholder.clear();
            temp->data._course->data.courseID = _course.id;
            temp->data._course->data.courseName = _course.name;
            classNode *targetClass = findClassName(currClassList, temp->data.className);
            studentNode *targetStudent = findStudent(targetClass->data._student, temp->data.id);
            findCourseScoreboard(targetStudent->data._course, _course.id)->data = temp->data._course->data;
            temp = nullptr;
        }
        in_file.close();
    }
    cout << "\nScoreboard imported successfully!\n" << endl;
    system("pause");
}

//Work flow
schoolYear programStart(schoolYearNode *&head, stringNode* accountList) {
    if (head == nullptr) {
        system("cls");
        cout << "\nDatabase is empty! Please create a new school year to continue!\n" << endl;
        system("pause");
        system("cls");
        head = new schoolYearNode;
        if (!createSchoolYear(head, head->data, accountList)) {
            delete head;
            head = nullptr;
        }
    }
    system("cls");
    schoolYearNode *currSchoolYearNode = head;
    cout << "Choose a schoolyear to work on: " << endl;
    int idx = 1;
    cout << "\t1. Create new school year" << endl;
    while (currSchoolYearNode) {
        cout << "\t" << ++idx << ". " << currSchoolYearNode->data._schoolYear << endl;
        currSchoolYearNode = currSchoolYearNode->next;
    }
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice <= idx && choice >= 1) {
            break;
        }
        cout << "Invalid option! Please try again!" << endl;
    }
    if (choice == 1) {
        schoolYear newSY;
        if (!createSchoolYear(head, newSY, accountList)) {
            cout << "Failed to created school year! Please try again\n" << endl;
            system("pause");
            return programStart(head, accountList);
        }
        addSchoolYearNode(head, newSY);
        return newSY;
    }
    currSchoolYearNode = head;
    idx = 2;
    while (idx != choice) {
        currSchoolYearNode = currSchoolYearNode->next;
        idx++;
    }
    return currSchoolYearNode->data;
}

void createNewStaff(staffNode* staffList, stringNode* accountList) {
    staffInfo newStaff;
    string curAcc;
    string staffName;
    cout << "\nInput staff's fullname: ";
    getline(cin, staffName);
    while(!standardizeName(staffName)) {
        system("cls");
        cout << "Name must not consist of special characters!" << endl;
        cout << "Input staff's fullname: ";
        getline(cin, staffName);
    }
    newStaff.fullName= staffName;
    newStaff.mail= createEmail(staffName);
    curAcc= newStaff.mail.substr(0, newStaff.mail.find_first_of("@")) + ":" + "123456789";
    addStaffNode(staffList, newStaff);
    addStringNode(accountList, curAcc);
    autoSaveCredential(accountList);
    saveStaffInfo(staffList);
    cout << "\nCreate new staff successfully! Default password is: 123456789\n" << endl;
    system("pause");
    return;
}

void updateScoreboardUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester is not created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    cout << "----------Import scoreboard----------" << endl;
    cout << "\t1. Export empty course scoreboard" << endl;
    cout << "\t2. Import scoreboard for this course" << endl;
    cout << "\t3. Return to main menu" << endl;
    cout << "Your choice: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > 3 || choice3 < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    switch (choice3) {
        case 1:
            exportStudentInfoList(_schoolYear._schoolYear, currCourseNode->data);
            break;
        case 2:
            //export
            importStudentScore(_schoolYear, currCourseNode->data);
            break;
        case 3:
            return;
    }
}

void viewScoreBoardUI(schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "----------View Scoreboard----------" << endl;
        cout << "\t1. View class scoreboard" << endl;
        cout << "\t2. View course scoreboard" << endl;
        cout << "\t3. View student scoreboard" << endl;
        cout << "\t4. Return to main menu" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        switch (choice) {
            case 1:
                viewClassScoreboardUI(_schoolYear);
                break;
            case 2:
                viewCourseScoreBoardUI(_schoolYear);
                break;
            case 3:
                viewStudentResultUI(_schoolYear);
                break;
            case 4:
                return;
        }
    }
}

void viewStudentResultUI(schoolYear &_schoolYear) {
    cout << "Enter student ID: ";
    string id;
    cin >> id;
    if (id.length() != 8) {
        cout << "Wrong ID format" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode* currClassNode = _schoolYear._class;
    studentNode* target = nullptr;
    while (currClassNode) {
        target = findStudent(currClassNode->data._student, id);
        if (target != nullptr) {
            break;
        }
        currClassNode = currClassNode->next;
    }
    if (target == nullptr && currClassNode == nullptr) {
        cout << "Cannot find student in current school year" << endl;
        system("pause");
        system("cls");
        return;
    }
    viewStudentResult(target->data);
}

void viewCourseScoreBoardUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester is not created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 1;
    while (currCourseNode) {
        cout << "\t" << idx++ << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    if(!currCourseNode) {
        return;
    }
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    viewCourseScoreboard(currCourseNode->data.enrolled, currCourseNode->data.id);
}

void viewClassScoreboardUI(const schoolYear &_schoolYear) {
    classNode *currClassNode = _schoolYear._class;
    int idx = 1;
    while (currClassNode) {
        cout << "\t" << idx++ << ". " << currClassNode->data.name << endl;
        currClassNode = currClassNode->next;
    }
    cout << "Choose a class to view scoreboard or input \"0\" to cancel: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 0) {
        return;
    }
    idx = 1;
    currClassNode = _schoolYear._class;
    while (idx != choice) {
        currClassNode = currClassNode->next;
        idx++;
    }
    viewWholeClassScoreboard(_schoolYear, currClassNode->data);
}

void viewWholeClassScoreboard(const schoolYear &_schoolYear, const _class &source) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }    
    cout << "\t4. Cancel" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
           continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        system("pause");
        return;
    }
    //the currSemesterCourses courseNode is used to conviniently access the courseNode of the current semester
    //the courseName scoreboardNode is used to store the courses that will be displayed in the report
    //the currStudent studentNode is used to quickly access the studentNode of the source class
    courseNode* currSemesterCourses = _schoolYear._semester[choice]._course;
    scoreboardNode *courseName = nullptr;
    studentNode *currStudent = source._student;
    //go through every students in this class to gather every courses enrolled by students in this class that were created in this semester
    while (currStudent) {
        scoreboardNode* currScoreboard = currStudent->data._course;
        while (currScoreboard) {
            //if the course we are looking at is not in the current semester, skip it 
            //if the course has not been added to the temp scoreboard node, add it
            if (findCourse(currSemesterCourses, currScoreboard->data.courseID) != nullptr && findCourseScoreboard(courseName, currScoreboard->data.courseID) == nullptr) {
                scoreboard tmp = currScoreboard->data;
                addScoreboardNode(courseName, tmp);
            }
            currScoreboard = currScoreboard->next;
        }
        currStudent = currStudent->next;
    }
    //the basic layout of the report
    cout << setw(5) << left << "No. " << setw(20) << "Student ID" << setw(30) << "Full name";
    scoreboardNode *curr = courseName;
    //write the name of courses appeared in the list
    while (curr) {
        int length = curr->data.courseName.length();
        cout << setw(length+5) << left << curr->data.courseName;
        curr = curr->next;
    } 
    cout << setw(17) << left << "Current GPA" << setw(17) << left << "Overall GPA" << endl;
    curr = courseName;
    currStudent = source._student;
    //go through the student list one more time to display the report for every student
    while (currStudent) {
        string fullName = currStudent->data.firstName + " " + currStudent->data.lastName;
        cout << setw(5) << left << currStudent->data.index << setw(20) << currStudent->data.id << setw(30) << fullName;
        double totalScoreSemester = 0;
        double semesterCoursesCount = 0;
        double totalScoreYear = 0;
        double yearCoursesCount = 0;
        scoreboardNode* currStudentScoreboard = currStudent->data._course;
        //get the overall GPA of the student 
        while (currStudentScoreboard) {
            totalScoreYear += currStudentScoreboard->data.total;
            yearCoursesCount++;
            currStudentScoreboard = currStudentScoreboard->next;
        }
        //get the GPA of the current semester and display the report for this semester
        while (curr) {
            int length2 = curr->data.courseName.length();
            scoreboardNode *tmp = findCourseScoreboard(currStudent->data._course, curr->data.courseID);
            cout << setw(length2+5) << left << ((tmp) ? to_string(tmp->data.final).substr(0,3):"X") ;
            if (tmp) {
                totalScoreSemester += tmp->data.total;
                semesterCoursesCount++;
            }
            curr = curr->next;
        }
        semesterCoursesCount = (semesterCoursesCount > 0) ? semesterCoursesCount:1;
        yearCoursesCount = (yearCoursesCount > 0) ? yearCoursesCount:1;
        cout << setw(17) << left << to_string(totalScoreSemester/semesterCoursesCount).substr(0,3) << setw(17) << left << to_string(totalScoreYear/yearCoursesCount).substr(0,3) << endl;
        currStudent = currStudent->next;
        curr = courseName;
    }
    system("pause");
    curr = nullptr;
    deleteScoreboardList(courseName);
}

///View class scoreboard

void viewProfileStudent(student curStudent) {
    // system("cls");
    cout << "--------------PROFILE-------------" << endl;
    cout << "Full name : " << curStudent.firstName << curStudent.lastName << endl;
    cout << "Student's ID : " << curStudent.id << endl;
    cout << "Student's gender : " << curStudent.gender << setw(10)<< left << "Student's date of birth : " << curStudent.dob << endl;
    cout << "Student's social ID : " << curStudent.socialid << endl;
    system("pause");
}

void viewCurrentYearInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "\n---------View current school year information---------" << endl;
        cout << "\t1. View semesters information" << endl;
        cout << "\t2. View classes information" << endl;
        cout << "\t3. Back to main menu" << endl;
        int choice;
        cout << "Your choice: ";
        while (true) {
            choice = getChoiceInt();
            if (choice > 3 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            if (viewSemestersInfo(_schoolYear)) {
                return;
            }
            else {
                continue;
            }
        }
        else if (choice == 2) {
            viewClassesInfo(_schoolYear);
        }
        else if (choice == 3) {
            return;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            system("pause");
        }
    }
}

//if return true -> return straight to main menu
//if return false -> return to previous menu only

void viewCourseScoreboard(studentNode *_student, const string &ID) {
    // cout << "---View scoreboard---" << endl;
    cout << endl;
    cout << setw(5) << left << "No. " << setw(30) << left << "Student ID" << setw(40) << left << "Full name" << setw(10) << left << "Class" << setw(10) << left << "Other" << setw(10) << "Midterm" << setw(10) << "Final" << setw(10)<< "Total" << endl; 
    studentNode *curr = _student;
    int index = 1;
    while (curr) {
        // scoreboardNode *tmp = findCourseScoreboard(curr->data._course, ID);
        string fullName = curr->data.firstName + " " + curr->data.lastName;
        cout << setw(5) << left << index++ << setw(30) << left << curr->data.id << setw(40) << left << fullName << setw(10) << left << curr->data.className << setw(10) << curr->data._course->data.other << setw(10) << curr->data._course->data.midterm << setw(10) << curr->data._course->data.final << setw(10) << curr->data._course->data.total << endl; 
        curr = curr->next;
    }
    system("pause");
    // system("cls");
}

bool viewSemestersInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "Choose a semester: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
        }    
        cout << "\t4. Cancel" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice == 4) return false;
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
            system("pause");
            return false;
        }
        cout << "---Semester information---" << endl;
        cout << "\tSemester: " << _schoolYear._semester[choice].name << endl;
        cout << "\tStart date: " << _schoolYear._semester[choice].start << endl;
        cout << "\tEnd date: " << _schoolYear._semester[choice].end << endl;
        courseNode* curr = _schoolYear._semester[choice]._course;
        cout << "\tCourses: " << endl;
        while (curr) {
            cout << "\t\t" << curr->data.id << " - " << curr->data.name << endl;
            curr = curr->next;
        }
        int choice2;
        cout << "--------------------------" << endl;
        cout << "\t1. View detailed information of a course" << endl;
        cout << "\t2. Return to previous menu" << endl;
        cout << "\t3. Return to main menu" << endl;
        cout << "\nYour choice: ";
        while (true) {
            choice2 = getChoiceInt();
            if (choice2 > 3 || choice2 < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice2 == 1) {
            //display courses for user to choose 
            cout << "Choose a course from the list below: " << endl;
            courseNode* currCourseNode = _schoolYear._semester[choice]._course;
            if (currCourseNode == nullptr) {
                cout << "No course has been added for this semester" << endl;
                system("pause");
                return false;
            }
            int idx = 0;
            while (currCourseNode) {
                cout << "\t" << ++idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
            }
            int choice3;
            cout << "Your choice: ";
            while (true) {
                choice3 = getChoiceInt();
                if (choice3 > idx || choice3 < 1) {
                    cout << "Invalid option! Please try again!" << endl;
                    continue;
                }
                break;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                currCourseNode = currCourseNode->next;
                idx++;
            }
            viewDetailedCourseInfo(currCourseNode->data);
            break;
        }
        else if (choice2 == 2) {
            return false;
        }
        else if (choice2 == 3) {
            return true;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        // system("pause");
    }
    return false;
}

void viewClassesInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "Classes created for this school year: " << endl;
        classNode *curr = _schoolYear._class;
        int idx = 1;
        while (curr) {
            cout << "\t" << idx << ". " << curr->data.name << " - " << getNumberOfStudents(curr->data._student) << " students" << endl;
            curr = curr->next;
            idx++;
        }
        cout << "\n----------View Class Info----------" << endl;
        cout << "\t1. View detailed info of a class" << endl;
        cout << "\t2. View all students of this school year" << endl;
        cout << "\t3. View information of a student" << endl; 
        cout << "\t4. Return to previous menu" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice == 1) {
            int choosen;
            while (true) {
                cout << "Please choose a class to view: ";
                choosen = getChoiceInt();
                if (choosen > idx || choosen < 1) {
                    cout << "Invalid option! Please try again!" << endl;
                    system("pause");
                    continue;
                }
                break;
            }
            idx = 1;
            curr = _schoolYear._class;
            while (idx != choosen) {
                curr = curr->next;
                idx++;
            }
            viewDetailedClassInfo(curr->data);
        }
        else if (choice == 2) {
            viewSchoolYearAllStudent(_schoolYear);
        }
        else if (choice == 3) {
            viewStudentInfo(_schoolYear);
        }
        else if (choice == 4) {
            curr = nullptr;
            return;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
    }
}

void viewDetailedClassInfo(const _class &source) {
    //view scoreboard of the whole class and overall GPA
    cout << "\n----------View detailed class info----------" << endl;
    cout << "Class: " << source.name << endl;
    cout << "Students of this class: " << endl;
    displayStudentList(source._student);
    cout << endl;
    system("pause");
    system("cls");
}

void viewSchoolYearAllStudent(const schoolYear &_schoolyear) {
    cout << setw(15) << left << "Student ID " << setw(30) << "Full name" << setw(30) << "Class" << endl;
    classNode *currClassNode = _schoolyear._class;
    while (currClassNode) {
        studentNode *currStudentNode = currClassNode->data._student;
        while (currStudentNode) {
            string studentFullName = currStudentNode->data.firstName + " " + currStudentNode->data.lastName;
            cout << setw(15) << left << currStudentNode->data.id << setw(30) << studentFullName << setw(30) << currClassNode->data.name << endl;
            currStudentNode = currStudentNode->next;
        }
        currStudentNode = nullptr;
        currClassNode = currClassNode->next;
    }
    currClassNode = nullptr;
    system("pause");
    system("cls");
}

void viewStudentResult(const student &source) {
    // cout << "View student result" << endl;

    cout << setw(15) << left << "Course ID" << setw(30) << left << "Course name" << setw(10) << "Other" << setw(10) << "Midterm" << setw(10) << "Final" << setw(10) << "Total" << endl;
    scoreboardNode *curr = source._course;
    while (curr) {
        cout << setw(15) << left << curr->data.courseID << setw(30) << left << curr->data.courseName << setw(10) << curr->data.other << setw(10) << curr->data.midterm << setw(10) << curr->data.final << setw(10) << curr->data.total << endl;
        curr = curr->next;
    }
    system("pause");
}

void viewStudentInfo(const schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        // cout << "---View Student Information---" << endl;
        cout << "Enter ID of the student you want to find or \"0\" to stop: ";
        string ID;
        cin >> ID;
//Check studentID input
        if (ID == "0") {
            return;
        }
        //check ID validity here
        classNode* currClassNode = _schoolYear._class;
        bool found = false;
        while (currClassNode && !found) {
            studentNode* target = findStudent(currClassNode->data._student, ID);
            if (target != nullptr) {
                cout << "Student ID: " << ID << endl;
                cout << "Student name: " << target->data.firstName << " " << target->data.lastName << endl;
                cout << "Class: " << currClassNode->data.name << endl;
                cout << "Personal information: " << endl;
                cout << "\tBirthday: " << target->data.dob << endl;
                cout << "\tGender: " << target->data.gender << endl;
                cout << "\tSocial ID: " << target->data.socialid << endl;
                cout << "Courses enrolled and result: " << endl;
                scoreboardNode *currScoreboardNode = target->data._course;
                if (currScoreboardNode == nullptr) {
                    cout << "\tStudent has not enrolled in any courses" << endl;
                }
                else 
                    viewStudentResult(target->data);
                target = nullptr;
                currClassNode = nullptr;
                system("pause");
                found = true;
                break;
            }
            currClassNode = currClassNode->next;
        }
        if (!found) {
            cout << "There is no student associated with the provided student ID! Please try again" << endl;
            currClassNode = nullptr;
            system("pause");
            system("cls");
            continue;
        }
        currClassNode = nullptr;
    }
}

void viewDetailedCourseInfo(const course &_course) {
    // cout << "\n---View detailed course information---" << endl;
    viewCourseInfo(_course);
    viewCourseScoreboard(_course.enrolled, _course.id);
}

void updateCurrentYearInfo(schoolYear &_schoolYear) {
    while (true) {
        system("cls");
        cout << "----------Modify Current School Year Information----------" << endl;
        cout << "\t1. Create new semester" << endl;
        cout << "\t2. Create new course" << endl;
        cout << "\t3. Update semesters information" << endl;
        cout << "\t4. Update course information" << endl;
        cout << "\t5. Update student result" << endl;
        cout << "\t6. Return to main menu" << endl;  
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 6 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        switch (choice) {
            case 1:
                createSemester(_schoolYear);
                break;
            case 2: 
                createNewCourseUI(_schoolYear);
                break;
            case 3:
                updateSemesterInfo(_schoolYear);
                break;
            case 4:
                updateCourseInfoUI(_schoolYear);
                break;
            case 5:
                updateStudentResultUI(_schoolYear);
                break;
            case 6:
                return;
            default:
                cout << "Invalid option!" << endl;
        }
    }
}

bool updateStudentResultUI(schoolYear &_schoolYear) {
    system("cls");
    cout << "\t1. Choose from classes" << endl;
    cout << "\t2. Choose from courses" << endl;
    cout << "\t3. Enter student ID" << endl;
    cout << "\t4. Return to previous menu" << endl;
    cout << "\t5. Return to main menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 5 || choice < 1) {
            cout << "Invalid choice!" << endl;
            continue;
        }
        break;
    }
    switch (choice) {
        case 1: 
            updateStudentResultFromClass(_schoolYear);
            break;
        case 2:
            updateStudentResultFromCourse(_schoolYear);
            break;
        case 3:
            updateStudentResultWithID(_schoolYear);
            break;
        case 4:
            return false;
        case 5:
            return true;
    }
    autoSaveSchoolyear(_schoolYear);
    return false;
}

void updateStudentResultWithID(schoolYear &_schoolYear) {
    cout << "Enter student ID: ";
    string ID;
    cin >> ID;
    if (ID.length() != 8) {
        cout << "Wrong ID format!" << endl;
        system("pause");
        system("cls");
        return;
    }
    classNode *currClassNode = _schoolYear._class;
    studentNode *target = nullptr;
    while (currClassNode) {
        target = findStudent(currClassNode->data._student, ID);
        if (target) {
            break;
        }
        currClassNode = currClassNode->next;
    }
    if (target == nullptr && currClassNode == nullptr) {
        cout << "Cannot find a student with such student ID" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "Courses this student has enrolled in: " << endl;
    scoreboardNode *currScoreboardNode = target->data._course;
    if (currScoreboardNode == nullptr) {
        cout << "This student has not enrolled in any courses" << endl;
        system("pause");
        system("cls");
        return;
    }
    int idx = 1;
    while (currScoreboardNode) {
        cout << "\t" << idx++ << ". " << currScoreboardNode->data.courseID << "\t" << currScoreboardNode->data.courseName << endl;
        currScoreboardNode = currScoreboardNode->next;
    }
    cout << "Choose a course to update result or input \"0\" to cancel: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 0) {
        return;
    }
    idx = 1;
    currScoreboardNode = target->data._course;
    while (idx != choice) {
        currScoreboardNode = currScoreboardNode->next;
        idx++;
    }

    updateStudentResult(_schoolYear, currScoreboardNode, target->data);
}

void updateStudentResultFromCourse(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Back to previous menu" << endl;
    cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) return;
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created!" << endl;
        system("pause");
        system("cls");
        return;
    }
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    cout << "Courses created in this semester: " << endl;
    int idx = 0;
    while (currCourseNode) {
        cout << "\t" << ++idx << ". " << currCourseNode->data.id << "\t" << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    int choice2;
    cout << "Choose a course or input \"0\" to cancel: ";
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice2 == 0) {
        return;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        currCourseNode = currCourseNode->next;
        idx++;
    }
    displayStudentList(currCourseNode->data.enrolled);
    int counter = getNumberOfStudents(currCourseNode->data.enrolled);
    cout << "Choose a student or input \"0\" to cancel: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > counter || choice3 < 0) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice3 == 0) 
        return;
    studentNode *currStudentNode = currCourseNode->data.enrolled;
    idx = 1;
    while (idx!=choice3) {
        currStudentNode = currStudentNode->next;
        idx++;
    }
    updateStudentResult(_schoolYear, currCourseNode->data.id, currStudentNode->data);
}

void updateStudentResultFromClass(schoolYear &_schoolYear) {
    classNode* currClassNode = _schoolYear._class;
    int idx = 1;
    while (currClassNode) {
        cout << "\t" << idx++ << ". " << currClassNode->data.name << endl;
        currClassNode = currClassNode->next;
    }
    cout << "Choose a class: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > idx || choice < 1) {
            cout << "Invalid choice" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    currClassNode = _schoolYear._class;
    while (idx != choice) {
        currClassNode = currClassNode->next;
        idx++;
    }
    //system clear here
    studentNode* currStudentNode  = currClassNode->data._student;
    cout << "Students in this class: " << endl;
    displayStudentList(currStudentNode);
    cout << "Choose a student from this class: ";
    int choice2;
    int counter = getNumberOfStudents(currStudentNode);
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 < 1 || choice2 > counter) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    while (idx != choice2) {
        currStudentNode = currStudentNode->next;
        idx++;
    }
    scoreboardNode *currScoreboardNode = currStudentNode->data._course;
    cout << "Courses of this student: " << endl;
    idx = 1;
    while (currScoreboardNode) {
        cout << "\t" << idx++ << ". " << currScoreboardNode->data.courseID << "\t" << currScoreboardNode->data.courseName << endl;
        currScoreboardNode = currScoreboardNode->next;
    }
    cout << "Choose a course to modify result: ";
    int choice3;
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 < 1 || choice3 > idx) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    currScoreboardNode = currStudentNode->data._course;
    idx = 1;
    while (idx != choice3) {
        currScoreboardNode = currScoreboardNode->next;
        idx++;
    }
    //change the result for the student object in classes
    updateStudentResult(_schoolYear, currScoreboardNode->data.courseID, currStudentNode->data);
    //update the result for the student object in course
    courseNode *currCourseNode = nullptr;
    for (int i = 0; i < 3; i++) {
        currCourseNode = findCourse(_schoolYear._semester[i]._course, currScoreboardNode->data.courseID);
        if (currCourseNode) {
            break;
        }
    }
    studentNode *courseStudent = findStudent(currCourseNode->data.enrolled, currStudentNode->data.id);
    courseStudent->data._course->data = currScoreboardNode->data;
}

bool updateCourseInfoUI(schoolYear &_schoolYear) {
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Cancel" << endl;
    int choice;
    cout << "Your choice: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) {
        return false;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        system("pause");
        system("cls");
        return false;
    }
    if (_schoolYear._semester[choice]._course == nullptr) {
        cout << "No course has been created for this semester" << endl;
        system("pause");
        system("cls");
        return false;
    }
    cout << "Current semester's courses: " << endl;
    courseNode *currCourseNode = _schoolYear._semester[choice]._course;
    int idx = 0;
    while (currCourseNode) {
        cout << "\t" << ++idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
        currCourseNode = currCourseNode->next;
    }
    cout << "Choose a course to update information: ";
    int choice2;
    while (true) {
        choice2 = getChoiceInt();
        if (choice2 > idx || choice2 < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    idx = 1;
    currCourseNode = _schoolYear._semester[choice]._course;
    while (idx != choice2) {
        idx++;
        currCourseNode = currCourseNode->next;
    }
    viewCourseInfo(currCourseNode->data);
    cout << "Choose an action: " << endl;
    cout << "\t1. Update course information" << endl;
    cout << "\t2. Add student to this course" << endl;
    cout << "\t3. Remove a student from this course" << endl;
    cout << "\t4. Import scoreboard for this course" << endl;
    cout << "\t5. Delete this course" << endl;
    cout << "\t6. Return to previous menu" << endl;
    cout << "\t7. Return to main menu" << endl;
    int choice3;
    cout << "Your choice: ";
    while (true) {
        choice3 = getChoiceInt();
        if (choice3 > 7 || choice3 < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    switch (choice3) {
        case 1:
            updateCourseInfo(_schoolYear, currCourseNode->data);
            break;
        case 2:
            addStudentToCourseManually(_schoolYear, currCourseNode->data);
            break;
        case 3: 
            removeStudentFromCourse(_schoolYear, currCourseNode->data);
            break;
        case 4:
            importStudentScore(_schoolYear, currCourseNode->data);
            break;
        case 5:
            deleteCourse(_schoolYear, currCourseNode->data);
            break;
        case 6:
            return false;
        case 7:
            return false;
    }
    autoSaveSchoolyear(_schoolYear);
    return false;
}

void createNewCourseUI(schoolYear &_schoolYear) {
    // cout << "---Create new course---" << endl;
    cout << "Choose a semester: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
    }
    cout << "\t4. Cancel" << endl;
    int choice;
    cout << "Your choice: ";
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
            continue;
        }
        break;
    }
    if (choice == 4) {
        return;
    }
    choice--;
    if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
        cout << "This semester has not been created yet!" << endl;
        system("pause");
        system("cls");
        return;
    }
    if (_schoolYear._semester[choice]._course == nullptr) {
        cout << "No course has been created for this semester" << endl;
    }
    else {
        cout << "Current semester's courses: " << endl;
        courseNode *currCourseNode = _schoolYear._semester[choice]._course;
        while (currCourseNode) {
            cout << "\t" << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
            currCourseNode = currCourseNode->next;
        }
    }
    createCourse(_schoolYear, _schoolYear._semester[choice]);
}

bool updateSemesterInfo(schoolYear &_schoolYear) {
    while (true) {
        cout << "Choose a semester: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "\t" << i+1 << ". " << _schoolYear._semester[i].name << endl;
        }    
        cout << "\t4. Cancel" << endl;
        cout << "Your choice: ";
        int choice;
        while (true) {
            choice = getChoiceInt();
            if (choice > 4 || choice < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice == 4) return false;
        choice--;
        if (_schoolYear._semester[choice].start == "NULL" || _schoolYear._semester[choice].end == "NULL") {
            cout << "This semester has not been created yet!" << endl;
            system("pause");
            system("cls");
            return false;
        }
        cout << "----------Current semester information----------" << endl;
        cout << "\tSemester: " << _schoolYear._semester[choice].name << endl;
        cout << "\tStart date: " << _schoolYear._semester[choice].start << endl;
        cout << "\tEnd date: " << _schoolYear._semester[choice].end << endl;
        courseNode* curr = _schoolYear._semester[choice]._course;
        cout << "\tCourses: " << endl;
        while (curr) {
            cout << "\t\t" << curr->data.id << " - " << curr->data.name << endl;
            curr = curr->next;
        }
        cout << "------------------------------------------------" << endl;
        cout << "\t1. View detailed information of a course" << endl;
        cout << "\t2. Change semester start date" << endl;
        cout << "\t3. Change semester end date" << endl;
        cout << "\t4. Return to previous menu" << endl;
        cout << "\t5. Return to main menu" << endl;
        cout << "\nYour choice: ";
        int choice2;
        while (true) {
            choice2 = getChoiceInt();
            if (choice2 > 5 || choice2 < 1) {
                cout << "Invalid option! Please try again!" << endl;
                continue;
            }
            break;
        }
        if (choice2 == 1) {
            cout << "----------View course detailed information----------" << endl;
            int idx = 0;
            courseNode *currCourseNode = _schoolYear._semester[choice]._course;
            while (currCourseNode) {
                cout << "\t" << ++idx << ". " << currCourseNode->data.id << " - " << currCourseNode->data.name << endl;
                currCourseNode = currCourseNode->next;
            }
            cout << "Your choice: ";
            int choice3;
            while (true) {
                choice3 = getChoiceInt();
                if (choice3 > idx || choice3 < 1) {
                    cout << "Invalid option! Please try again!" << endl;
                    continue;
                }
                break;
            }
            idx = 1;
            currCourseNode = _schoolYear._semester[choice]._course;
            while (idx != choice3) {
                idx++;
                currCourseNode = currCourseNode->next;
            }
            viewCourseInfo(currCourseNode->data);
            system("pause");
            system("cls");
            return false;
        }
        else if (choice2 == 2) {
            cout << "\nCurrent semester start date: " << _schoolYear._semester[choice].start << endl;
            string newDate;
//Added Date validation
            do {
                cout << "Enter new start date for this semester: ";
                cin >> newDate;
            //validate input
            }
            while (!checkValidDate(newDate));
            _schoolYear._semester[choice].start = newDate;
            cout << "Start date changed successfully" << endl;
            system("pause");
            system("cls");
            return false;
        }
        else if (choice2 == 3) {
            cout << "\nCurrent semester end date: " << _schoolYear._semester[choice].start << endl;
            string newDate;
            do {
                cout << "Enter new end date for this semester: ";
                cin >> newDate;
            }
            //added validate input
            while (!checkValidDate(newDate));
            _schoolYear._semester[choice].start = newDate;
            cout << "End date changed successfully" << endl;
            system("pause");
            system("cls");
            return false;
        } 
        else if (choice2 == 4) {
            return false;
        }
        else if (choice2 == 5) {
            return true;
        }
        else {
            cout << "Invalid choice! Please try again" << endl;
            continue;
        }
        system("pause");
        break;
    }
}
