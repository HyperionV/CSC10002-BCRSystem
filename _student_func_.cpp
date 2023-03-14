#include "_student_.h"
int findNthOccurrence(std::string s, char x, int count) {
	int tmp = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == x) tmp;
		if (count == tmp) return i;
	}
	return -1;
}

student getStudentData(std::string id, std::string pathStudent) {
	fstream findId;
	findId.open(pathStudent);
	if (!findID.is_open()) {
		std::cout << "Unable to locate student file\n";
		return;
	}
	student A;
	while (!findId.eof()) {
		std::string tmp;
		std::cin.getline(tmp);
		//Assuming the format is: No,First_name,Last_name,Gender,id,socialid,dob
		std::string tmpid = tmp.substr(findNthOccurrence(tmp, ',', 4) + 1,8);
		if (tmpid == id) {
			A.id = id;
			int firstLth = findNthOccurrence(tmp, ',', 2) - findNthOccurrence(tmp, ',', 1);
			A.firstName = tmp.substr(findNthOccurrence(tmp, ',', 1) + 1, firstLth);
			A.firstName[firstLth + 1] = '\0';
			int lastLth = findNthOccurrence(tmp, ',', 3) - findNthOccurrence(tmp, ',', 2);
			A.lastName = tmp.substr(findNthOccurrence(tmp, ',', 1) + 1, lastLth);
			A.lastName[lastLth + 1] = '\0'; 
			A.gender = tmp.substr(findNthOccurrence(tmp, ',', 3) + 1, 1); //M/F
			A.socialid = tmp.substr(findNthOccurrence(tmp, ',', 5) + 1, 12); //1234567890ab
			A.dob = tmp.substr(findNthOccurrence(tmp, ',', 6) + 1, 8); //dd/mm/yy
			return A;
		}
	}
	std::cout << "Couldn't find student with that ID. Please try again.\n";
	getStudentData(id, pathStudent);
}

void viewProfile(student A) {
	std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	std::cout << "PROFILE\n";
	std::cout << A.id << std::endl;
	std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	std::cout << "Full name: " << A.name << "\t" << "Gender: ";
	if (A.gender) std::cout << "male\n";
	else std::cout << "female\n";
	std::cout << "Date of Birth: " << A.dob;
	std::cout << "Social ID: " << A.socialid << std::endl;
	std::cout << "Class: " << A.classroom << std::endl;
	std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n";
	menuStudent(A);
}

void menuStudent(student A) {
	std::cout << "Please type in the number according to the menu listed below\n";
	std::cout << "This menu is for students only\n";
	std::cout << "-------------------------------------------------------------------\n";
	std::cout << std::endl << std::endl;
	std::cout << "1. View your scores throughout the year\n";
	std::cout << "2. View your current courses\n";
	std::cout << "3. Change your password\n";
	std::cout << "0. Exit to login screen\n";
	std::cout << "-------------------------------------------------------------------\n";
	std::cout << std::endl << std::endl;
	std::cout << "Input: ";
	int choice; std::cin >> choice;
	while (true) {
		switch (choice) {
		case 1:
			viewScoreboard(A);
			break;
		case 2:
			viewCourse(A);
			break;
		case 3:
			changePass(A);
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