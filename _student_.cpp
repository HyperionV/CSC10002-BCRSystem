#include "_student_.h"
//main function file 

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr){
	string yr = id.substr(0,2);
    yr = to_string(stoi(yr) + 2000) + "-" + to_string(stoi(yr) + 2001);
    schoolYear thisYr;
    bool check = false;
    while (schoolYrHead)
    {
        if (schoolYrHead->data._schoolYear == yr) {
            thisYr = schoolYrHead->data;
            return true;
            break;
        }
        schoolYrHead = schoolYrHead->next;
    }
	return false;
}

student getStudentData(string id, string schoolYr, studentNode* head) {
	studentNode* stu = findStudent(head, id);
	if (!stu)
	{
		cout << "Couldn't find student with that ID. Please retype your id and try again.\n";
		cin >> id;
		getStudentData(id, schoolYr, head);
	}
	return stu->data;
}

void viewProfile(student A, schoolYear _yr, credential &accountSystem) {
	system("CLS");
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "PROFILE\n";
	cout << A.id << endl;
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "Full name: " << A.firstName << A.lastName << "\t" << "Gender: ";
	if (A.gender == "M") cout << "male\n";
	else cout << "female\n";
	cout << "Date of Birth: " << A.dob << endl;
	cout << "Social ID: " << A.socialid << endl;
	cout << "Class: " << A.className << endl;
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n";
	menuStudent(A, _yr, accountSystem);
}

void menuStudent(student &A, const schoolYear &_yr, credential &accountSystem) {
	string newPass;
	cout << "Please type in the number according to the menu listed below\n";
	cout << "This menu is for students only\n";
	cout << "-------------------------------------------------------------------\n";
	cout << endl << endl;
	cout << "1. View your scores throughout the year\n";
	cout << "2. View your courses\n";
	cout << "3. Change your password\n";
	cout << "0. Exit to login screen\n";
	cout << "-------------------------------------------------------------------\n";
	cout << endl << endl;
	cout << "Input: ";
	int choice; cin >> choice;
	
		system("CLS");
		switch (choice) {
		case 1:
			viewScoreboard(A);
			break;
		case 2:
			viewCourse(A, _yr);
			break;
		case 3:
			cout << "Please input your new password (No spacing): ";
			cin >> newPass;
			changeAccountPassword(accountSystem, A.id, 0, newPass);
			break;
		case 0:
			//menu_version1(); Accessing login menu
			return;
		default:
			cout << "Inappropriate decision. Please input again according to the menu listed above. For more information please contact customer support.\n";
			break;
		}
	
	viewProfile(A, _yr);
}

void viewScoreboard(student A) {
	scoreboardNode* viewScore = A._course;	
	if (!viewScore){
		cout << "The staff haven't updated the scoreboard yet\n";
		return;
	}
	int no = 1;
	cout << "No\tCourse ID\tCourse Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark\n";
	while (!viewScore){
		cout<<no<<" \t" << viewScore->data.courseID<<"\t"<<viewScore->data.courseName<<"\t";
		cout<<viewScore->data.total<<"\t"<<viewScore->data.final<<"\t"<<viewScore->data.midterm<<"\t"<<viewScore->data.other<<endl;
		no++;
	}
	// No, Student ID, Student Full Name, Total Mark, Final Mark, Midterm Mark, and Other Mark
}

void viewCourse(student A, schoolYear _yr) {
	semester* tmp = _yr._semester;
	bool printAll = false;
	for (int count = 0; count < 3; count++){
		cout << count + 1 << ". " << tmp->name << endl;
	}
	int choice;
	do {
		cout<<"4. View all courses throughout the year\n"; 
		cout<<"Choose which semester to view\n";
		cin>>choice;
	}  while (choice > 0 && choice < 5);
	if (choice == 4) {
		printAll = true;
	}
	else for (int i = 0; i < choice - 1; i++){
		_yr._semester++;
	}

	courseNode* viewC = _yr._semester->_course;

	if (!viewC){
		cout << "Unable to find any courses\n";
		return;
	}

	int trash = 0;

	if (printAll) trash = 3;
	else trash = 1;

	cout << "No \tCourse ID \tCourse Name \tClass Name \tSchedule \tSession \tTeacher\n";
	int no = 1;
	for (int k = 0; k < trash; k++)
	{
		while(!viewC)
		{
			cout << no << " \t"<< viewC->data.id << " \t" << viewC->data.name << viewC->data.className;
			cout << " \t" << viewC->data.day << " \t" << viewC->data.session << " \t" << viewC->data.teacher << endl;
			no++;
			viewC = viewC->next;
		}
		_yr._semester++;
		viewC = _yr._semester->_course;
	}
}

void changePassStudent(string* password, student A) {
	system("CLS");
	cout << endl << "Input previous password (default is 123456): ";
	string temp;
	cin.ignore();
	cin >> temp;
	if (temp == *password)
	{
		string newPass;
		do {
			cout << "Password cannot contain spaces!\n";
			cout << "Input new password: ";
			cin >> temp;
			cout << "Confirm your new password: ";
			cin >> newPass;
			if (newPass != temp) cout << "Password confirmation incorrect, please retype a new password\n";
		} while (temp != newPass);
		*password = newPass;
	}
	else {
		cout << "Wrong password. Would you like to continue changing password?\n";
		cout << "1. Yes\t\t2. Cancel\n";
		int choice;
		do {
			cin >> choice;
			if (choice < 1 || choice > 2) cout << "Invalid option, please input again\n";
		} while (choice < 1 || choice > 2);
		switch (choice) {
		case 1:
			// changePassStudent(&A.password, A);
			break;
		case 2:
			return;
		}
	}
	return;
}

void StudentMain(schoolYearNode* schoolYrHead, string id, studentNode* stuNode, credential &accountSystem)
{
    string yr = id.substr(0,2);
    yr = to_string(stoi(yr) + 2000) + "-" + to_string(stoi(yr) + 2001);
    schoolYear thisYr;
    if (getSchoolYear(id,schoolYrHead,thisYr))
    {
        classNode* tmp =thisYr._class;
        studentNode* tmpStu;
        while (tmp || !stuNode)
        {
            while (tmp->data._student)
            {
                tmpStu = tmp->data._student;
                if (tmpStu->data.id == id)
                {
                    stuNode = tmpStu;
                    break;
                }
                tmp->data._student = tmp->data._student->next;
            }
            if (!tmp && !stuNode) 
            {
                cout << "No student exists with such student id\n";
                break;
            } 
            tmp = tmp->next;
        }
        if (stuNode){
            student A = getStudentData(id, thisYr._schoolYear, stuNode);
			viewProfile(A, thisYr, accountSystem);
		}
    }
    else {
        cout << "Unable to locate school year\n";
        return;
    }
}