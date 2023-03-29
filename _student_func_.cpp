#include "_student_h.h"
//main function file 

int findNthOccurrence(string s, char x, int count) {
	int tmp = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == x) tmp;
		if (count == tmp) return i;
	}
	return -1;
}

string returnPath(string schoolYear, string StudentClass, string studentID) {
	string pathStudent = "Data/" + schoolYear + "/Classes/" + StudentClass + "/" + studentID;
	return pathStudent;
}

student getStudentData(string id, string pathStudent, string schoolYear) {
	pathStudent = returnPath(schoolYear , ,id); //how to define which class
	ifstream findId;
	findId.open(pathStudent);
	if (!findId.is_open()) {
		std::cout << "Unable to locate student file\n";
		return;
	}
	student A;
	while (!findId.eof()) {
		string tmp;
		getline(findId, tmp);
		//Assuming the format is:  No, Student ID, First name, Last name, Gender, Date of Birth, and Social ID.

		string tmpid = tmp.substr(findNthOccurrence(tmp, ',', 1) + 1,8); //8 can be changed to an appropriate id length
		if (tmpid == id) {
			A.id = id;
			int FnameLth = findNthOccurrence(tmp, ',', 3) - findNthOccurrence(tmp, ',', 2);
			A.firstName = tmp.substr(findNthOccurrence(tmp, ',', 2) + 1, FnameLth);
			int LnameLth = findNthOccurrence(tmp, ',', 4) - findNthOccurrence(tmp, ',', 3);
			A.firstName = tmp.substr(findNthOccurrence(tmp, ',', 3) + 1, LnameLth);

			if (tmp.substr(findNthOccurrence(tmp, ',', 4) + 1, 1) == "M") A.gender = "M"; else A.gender = "F"; //M/F
			A.socialid = tmp.substr(findNthOccurrence(tmp, ',', 6) + 1, 12); //1234567890ab

			A.dob = tmp.substr(findNthOccurrence(tmp,',',5)+1,10);// dd/mm/yyyy
			findId.close();
			return A;
		}
	}
	findId.close();
	cout << "Couldn't find student with that ID. Please retype your id and try again.\n";
	cin >> id;
	getStudentData(id, pathStudent);
}

void viewProfile(student A, schoolYear *_yr) {
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
	menuStudent(A, _yr);
}

void menuStudent(student A, schoolYear *_yr) {
	
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
	while (true) {
		switch (choice) {
		case 1:
			viewScoreboard(A);
			break;
		case 2:
			viewCourse(A, viewC);
			break;
		case 3:
			changePassStudent(A);
			break;
		case 0:
			return;
		default:
			cout << "Inappropriate decision. Please input again according to the menu listed above. For more information please contact customer support.\n";
			break;
		}
	}
	menuStudent(A);
}

void viewScoreboard(student A, scoreboardNode* viewScore) {
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

void viewCourse(student A, courseNode *viewC) {
	if (!viewC){
		cout << "Unable to find any courses\n";
		return;
	}
	cout<<"No\tCourse ID\tCourse Name\tClass Name\tSchedule\tSession\tTeacher\n";
	int no = 1;
	while(!viewC){
		cout<< no << " \t"<< viewC->data.id << " \t" << viewC->data.name << viewC->data.className;
		cout<< " \t" << viewC->data.day << " \t" << viewC->data.session << " \t" << viewC->data.teacher << endl;
		no++;
		viewC = viewC->next;
	}
}

void changePassStudent(student& A) {
	std::cout << std::endl << "Input previous password (default is 123456): ";
	std::string temp; std::cin >> temp;
	if (temp == A.password) {
		std::string newPass;
		do {
			std::cout << "Password cannot contain spaces!\n";
			std::cout << "Input new password: ";
			std::cin >> temp;
			std::cout << "Confirm your new password: ";
			std::cin >> newPass;
			if (newPass != temp) std::cout << "Password confirmation incorrect, please retype a new password\n";
		} while (temp != newPass);
		A.password = newPass;
		return;
	}
	else {
		std::cout << "Wrong password. Would you like to continue changing password?\n";
		std::cout << "1. Yes\t\t2. Cancel\n";
		int choice;
		do {
			std::cin >> choice;
			if (choice < 1 || choice > 2) std::cout << "Invalid option, please input again\n";
		} while (choice < 1 || choice > 2);
		switch (choice) {
		case 1:
			changePassStudent(A);
			break;
		case 2:
			return;
		}
	}
	return;
}