#include "_student_.h"
//main function file 

bool getSchoolYear(string id, schoolYearNode* schoolYrHead, schoolYear& thisYr){
	string yr = id.substr(0,2);
    yr = to_string(stoi(yr) + 2000) + "-" + to_string(stoi(yr) + 2001);
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

bool getStudentData(string id, string schoolYr, studentNode* head, student& result) {
	studentNode* stu = findStudent(head, id);
	if (!stu)
	{
		cout << "Couldn't find student with that ID. Please retype your id and try again.\n";
		return false;
	}
	result = stu->data;
	return true;
}

bool viewProfile(student A, schoolYear _yr, stringNode *&accountSystem) {
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
	if(menuStudent(A, _yr, accountSystem)) {
		return true;
	}
	else {
		return false;
	}
}

bool menuStudent(student &A, const schoolYear &_yr, stringNode *accountSystem) {
	string newPass;
	system("cls");
	cout << "\n---------Main menu - Student---------" << endl;
	cout << "\t1. View your scores throughout the year\n";
	cout << "\t2. View your courses\n";
	cout << "\t3. Change your password\n";
	cout << "\t4. Logout\n";
	cout << "\t5. Close program\n";
	cout << "Your choice: ";
	int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 5 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
	switch (choice) {
		case 1:
			viewScoreboard(A);
			break;
		case 2:
			viewCourse(A, _yr);
			break;
		case 3:
			changeAccountPassword(accountSystem, A.id);
			break;
		case 4:
			return 1;
		case 5: 
			autoSaveCredential(accountSystem);
	}
	return 0;
}

void viewScoreboard(student A) {
	scoreboardNode* viewScore = A._course;	
	if (!viewScore){
		cout << "\nThe staff haven't updated the scoreboard yet\n";
		system("pause");
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
	cout<<"4. View all courses throughout the year\n"; 
	cout << "Your choice: ";
	int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 10 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
	if (choice == 4) {
		printAll = true;
	}
	else for (int i = 0; i < choice - 1; i++){
		_yr._semester++;
	}

	courseNode* viewC = _yr._semester->_course;

	if (!viewC){
		cout << "Unable to find any courses\n";
		system("pause");
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

bool StudentMain(schoolYearNode* schoolYrHead, string id, stringNode* accountSystem)
{
	studentNode *stuNode = nullptr;
    schoolYear thisYr;
    if (getSchoolYear(id, schoolYrHead, thisYr))
    {
        classNode* tmp = thisYr._class;
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
				system("pause");
                break;
            } 
            tmp = tmp->next;
        }
        if (stuNode){
			student A;
			if (!getStudentData(id, thisYr._schoolYear, stuNode, A))
			{
				return 0;
			}
			
			while (viewProfile(A, thisYr, accountSystem))
			{
				cout << endl;
			}
		}
		return 0;
    }
    else {
        cout << "Unable to locate school year\n";
		system("pause");
        return 1;
    }
}