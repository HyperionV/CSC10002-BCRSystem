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

bool menuStudent(student &A, const schoolYear &_yr, stringNode *accountSystem, const int &sem) {
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
				cout << "Invalid option! Please try again!" << endl;
				continue;
			}
			break;
		}
		system("CLS");
		switch (choice)
		{
		case 1:
			viewScoreboard(A, _yr);
			break;
		case 2:
			viewCourse(A, _yr, sem);
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

void viewScoreboard(const student &A, const schoolYear &_yr) {
	scoreboardNode* viewScore = A._course;
	bool isUploaded = false;
	while (viewScore){
		if (viewScore->data.total != 0)
		{
				isUploaded = true;
				break;
		}
		viewScore = viewScore->next;
	}

	if (!isUploaded)
	{
		cout << "\nThe staff haven't published the scoreboard yet!\n";
		system("pause");
		return;
	}

	cout << "Choose a semester to view scoreboard:\n";
	for (int i = 0; i < 3;i++)
		cout << "\t" << i + 1 << _yr._semester[i].name << endl;

	cout << "\t4. View full scoreboard\n";
	cout << "\t5. Return to menu\n";
	cout << "Your choice: ";
    int choice;
    while (true) {
        choice = getChoiceInt();
        if (choice > 5 || choice < 1) {
            cout << "Invalid option! Please try again!" << endl;
           continue;
        }
        break;
    }

	if (choice == 5)
		return;



	int no = 1;
	courseNode *tmp = _yr._semester[choice - 1]._course;
	if (choice != 4){
		cout << "Scoreboard of" << _yr._semester[choice - 1].name << ": " << endl;
		cout << setw(7) << left << "No" << setw(15) << "Course ID" << setw(30) << "Course Name" << setw(15) << "Other" << setw(15) << "Midterm" << setw(15) << "Final" << "Total\n";
		while (tmp && viewScore){
			if (tmp->data.id == viewScore->data.courseID)
			{
				cout << setw(7) << left << no++ << setw(15) << viewScore->data.courseID << setw(30) << viewScore->data.courseName;
				cout << setw(15) << viewScore->data.other << setw(15) << viewScore->data.midterm << setw(15) << viewScore->data.final << viewScore->data.total << endl;
				viewScore = viewScore->next;
			}
			else {
				tmp = tmp->next;
			}
			
		}
				system("pause");
		return;
	}
		cout << "Full scoreboard:\n";
		cout << setw(7) << left << "No" << setw(15) << "Course ID" << setw(30) << "Course Name" << setw(15) << "Other" << setw(15) << "Midterm" << setw(15) << "Final" << "Total\n";
		viewScore = A._course;
		while (viewScore){
			cout << setw(7) << left << no++ << setw(15) << viewScore->data.courseID << setw(30) << viewScore->data.courseName;
			cout << setw(15) << viewScore->data.other << setw(15) << viewScore->data.midterm << setw(15) << viewScore->data.final << viewScore->data.total << endl;
			viewScore = viewScore->next;
		}
		system("pause");

	// No, Student ID, Student Full Name, Total Mark, Final Mark, Midterm Mark, and Other Mark
}

void viewCourse(const student &A, const schoolYear &_yr, const int &sem) {

	courseNode* viewC = _yr._semester[sem - 1]._course;

	if (!viewC){
		cout << "Unable to find any courses\n";
		system("pause");
		return;
	}

	cout << "Showing courses of " << _yr._semester[sem-1].name << endl;
	cout << setw(15) << left << "Course ID" << setw(30) << "Course Name" << setw(15) <<  "Classroom" << setw(13) <<  "Day" << setw(13) << "Session" << "Teacher\n";
		viewC = _yr._semester[sem - 1]._course;
		while (viewC)
		{
			if (findStudent(viewC->data.enrolled, A.id))
			cout << setw(15) << left << viewC->data.id << setw(30) << viewC->data.name << setw(15) << viewC->data.className << setw(13) << viewC->data.day << setw(13) << viewC->data.session << "\t" << viewC->data.teacher << endl;
			viewC = viewC->next;
		}
	system("pause");
}

bool StudentMain(schoolYearNode* schoolYrHead, const string &id, stringNode* accountSystem, int currentSemesterCount)
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
			
			if (menuStudent(A, thisYr, accountSystem, currentSemesterCount))
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