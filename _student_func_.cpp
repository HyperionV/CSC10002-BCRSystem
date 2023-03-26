#include "_student_h.h"


int findNthOccurrence(string s, char x, int count) {
	int tmp = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == x) tmp;
		if (count == tmp) return i;
	}
	return -1;
}

string returnPath(int schoolYear, string StudentClass, string studentID) {
	string pathStudent = "Data/" + to_string(schoolYear) + "/Classes/" + StudentClass + "/" + studentID;
	return pathStudent;
}

student getStudentData(string id, string pathStudent) {
	int schoolYear = stoi(id.substr(0, 3)) + 2000;  //assuming no students got accepted before 2000
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
			int nameLth = findNthOccurrence(tmp, ',', 4) - findNthOccurrence(tmp, ',', 2);
			A.name = tmp.substr(findNthOccurrence(tmp, ',', 2) + 1, nameLth);

			if (tmp.substr(findNthOccurrence(tmp, ',', 4) + 1, 1) == "M") A.gender = 1; else A.gender = 0; //M/F
			A.socialid = tmp.substr(findNthOccurrence(tmp, ',', 6) + 1, 12); //1234567890ab

			A.dob.day = stoi(tmp.substr(findNthOccurrence(tmp, ',', 6) + 1, 2)); //dd
			A.dob.month = stoi(tmp.substr(findNthOccurrence(tmp, ',', 6) + 4, 2));
			A.dob.year = stoi(tmp.substr(findNthOccurrence(tmp, ',', 6) + 7, 2));
			findId.close();
			return A;
		}
	}
	findId.close();
	std::cout << "Couldn't find student with that ID. Please retype your id and try again.\n";
	cin >> id;
	getStudentData(id, pathStudent);
}

void viewProfile(student A) {
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "PROFILE\n";
	cout << A.id << endl;
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "Full name: " << A.name << "\t" << "Gender: ";
	if (A.gender == 'M') cout << "male\n";
	else cout << "female\n";
	cout << "Date of Birth: " << A.dob.day <<"/"<<A.dob.month<<"/"<<A.dob.year;
	cout << "Social ID: " << A.socialid << endl;
	cout << "Class: " << A.classroom << endl;
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n";
	menuStudent(A);
}

void menuStudent(student A) {
	
	cout << "Please type in the number according to the menu listed below\n";
	cout << "This menu is for students only\n";
	cout << "-------------------------------------------------------------------\n";
	cout << endl << endl;
	cout << "1. View your scores throughout the year\n";
	cout << "2. View your current courses\n";
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
			viewCourse(A);
			break;
		case 3:
			changePassStudent(A);
			break;
		case 0:
			return;
		default:
			std::cout << "Inappropriate decision. Please input again according to the menu listed above. For more information please contact customer support.\n";
			break;
		}
	}
	menuStudent(A);
}

void viewScoreboard(student A) {
	/*classes* tmp = A.classroom; 
	if (!tmp) {
		cout<<"Student has not been assigned to any class\n";
		return;
	}
	int count = 1;
	while (tmp){
		cout<< count <<". "<<endl;
	}*/ 

	//Finding courses for students to choose to see
	string pth = returnPath(year, , A.id);
	ifstream score;
	score.open(pth);
	while (!score.eof()){
		
	}
//No, Student ID, Student Full Name, Total Mark, Final Mark, Midterm Mark, and Other Mark
}

void viewCourse(student A) {

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