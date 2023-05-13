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

bool getStudentData(const string &id, string schoolYr, studentNode* head, student& result) {
	studentNode* stu = findStudent(head, id);
	if (!stu)
	{
		cout << "Couldn't find student with that ID. Please retype your id and try again.\n";
		return false;
	}
	result = stu->data;
	return true;
}

void viewProfile(const student &A) {
	system("CLS");
	cout << "---------Student profile---------\n";
	cout << "\tStudent ID: " << A.id << endl;
	cout << "\tFull name: " << A.firstName << " " << A.lastName << "\n\t" << "Gender: ";
	cout << ((A.gender == "M") ? "Male\n":"Female\n");
	cout << "\tDate of Birth: " << A.dob << endl;
	cout << "\tSocial ID: " << A.socialid << endl;
	cout << "\tClass: " << A.className << endl;

}

bool menuStudent(student &A, const schoolYear &_yr, stringNode *accountSystem) {
	int choice;
	while (true) {
		viewProfile(A);
		cout << "\n---------Main menu - Student---------" << endl;
		cout << "\t1. View your scores throughout the year\n";
		cout << "\t2. View your courses\n";
		cout << "\t3. Change your password\n";
		cout << "\t4. Logout\n";
		cout << "\t5. Close program\n";
		cout << "Your choice: ";

    while (true) {
			choice = getChoiceInt();
			if (choice > 6 || choice < 1) {
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
				return 0;
		}
	}
}

void viewScoreboard(const student &A) {
	scoreboardNode* viewScore = A._course;	
	if (!viewScore->data.isUploaded){
		cout << "\nThe staff haven't updated the scoreboard yet\n";
		system("pause");
		return;
	}
	int no = 1;
	cout << "No\tCourse ID\tCourse Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark\n";
	while (viewScore){
		cout << no << " \t" << viewScore->data.courseID << "\t" << viewScore->data.courseName << "\t";
		cout << viewScore->data.total << "\t" << viewScore->data.final << "\t" << viewScore->data.midterm << "\t" << viewScore->data.other << endl;
		no++;
	}
	system("pause");
	// No, Student ID, Student Full Name, Total Mark, Final Mark, Midterm Mark, and Other Mark
}

void viewCourse(const student &A, const schoolYear &_yr) {
	bool printAll = false;
	for (int count = 0; count < 3; count++){
		cout << count + 1 << ". " << _yr._semester[count].name << endl;
	}
	cout << "4. View all courses throughout the year\n"; 
	cout << "Your choice: ";
	int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 4 || choice < 1) {
            cout << "Invalid option" << endl;
            continue;
        }
        break;
    }
	int sem = 0;
	if (choice == 4) {
		printAll = true;
		sem = 1;
	}
	else
		sem = choice;

	courseNode* viewC = _yr._semester->_course;

	if (!viewC){
		cout << "Unable to find any courses\n";
		system("pause");
		return;
	}
	int dummy;
	if (printAll)
	{
		dummy = 3;
	}
		else
		dummy = 1;

	cout << "Course ID \tCourse Name \tClass Name \tSchedule \tSession \tTeacher\n";
	while (dummy > 0)
	{
		dummy--;
		viewC = _yr._semester[sem - 1]._course;
		while (viewC)
		{
			if (findStudent(viewC->data.enrolled, A.id))
			cout << viewC->data.id << "\t" << viewC->data.name << "\t" << viewC->data.day << viewC->data.session << "\t" << viewC->data.teacher << endl;
			viewC = viewC->next;
		}
		sem++;
	}
	system("pause");
}

bool StudentMain(schoolYearNode* schoolYrHead, const string &id, stringNode* accountSystem)
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
			
			if (menuStudent(A, thisYr, accountSystem))
				return 1;
		}
		return 0;
    }
    else {
        cout << "Unable to locate school year\n";
		system("pause");
        return 1;
    }
}