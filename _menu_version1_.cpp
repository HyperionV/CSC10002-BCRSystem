#include "_menu_version1_.h"

// Clearing console after some changes in console
void clearConsole()
{
	COORD c;
	c.X = 0;
	c.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return;
}

// Changing the current color to another color
void changeColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	return;
}

// Hide/Show cursor in console
void setCursor(bool visible, DWORD size)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	if (size == 0)
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	}
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console, &lpCursor);
}

// Loading Bar
void loadingBar(int status)
{
	const char loading = 219;
	for (int i{ 0 }; i <= 50; ++i)
	{
		clearConsole();
		changeColor(2);
		cout << "\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t      Project is loading: " << i * 2 << "%" << endl << endl;
		cout << "\t\t\t\t\t";
		for (int j{ 1 }; j <= i; ++j)
		{
			std::cout << loading;
		}
		cout << endl << endl;
		cout << "\t\t\t\t\t    ................. Waiting ................." << endl << endl;
		if (i < 10)
		{
			Sleep(100);
		}
		else if (i >= 10 && i < 20)
		{
			Sleep(50);
		}
		else if (i >= 20 && i < 30)
		{
			Sleep(25);
		}
		else if (i >= 30 && i < 40)
		{
			Sleep(10);
		}
		else
		{
			Sleep(5);
		}
	}
	if (status == 0)
	{
		changeColor(12);
		cout << "\t\t\t\t\t       ^_^ The Project loads Finished !!! ^_^" << endl << endl;
		changeColor(1);
		cout << "\t\t\t\t\t\t   ";
	}
	else
	{
		changeColor(12);
		cout << "\t\t\t\t\t       ^_^ The Project closes Finished !!! ^_^" << endl << endl;
		changeColor(1);
		cout << "\t\t\t\t\t\t   ";
	}
	system("pause");
	return;
}


bool checkStudentUserExist(const string& register_student_name)
{
	ifstream file_in;
	file_in.open("student_login.txt", ios::in);
	if (!file_in.is_open())
	{
		cout << "Cannot open file, try agin!!" << endl;
		cout << endl << endl;
		return false;
	}
	while (!file_in.eof())
	{
		string temp;
		getline(file_in, temp, ' ');
		if (register_student_name == temp)
		{
			return true;
		}
		file_in >> temp;
	}
	file_in.close();
	return false;
}

bool checkStudentUserPassword(const string& register_student_password)
{
	ifstream file_in;
	file_in.open("student_login.txt", ios::in);
	if (!file_in.is_open())
	{
		cout << "Cannot open file, try agin!!" << endl;
		cout << endl << endl;
		return false;
	}
	while (!file_in.eof())
	{
		string temp;
		getline(file_in, temp, ' ');
		getline(file_in, temp, '\n');
		if (register_student_password == temp)
		{
			return true;
		}
	}
	file_in.close();
	return false;
}

bool checkStaffUserExist(const string& register_staff_name)
{
	ifstream file_in;
	file_in.open("staff_login.txt", ios::in);
	if (!file_in.is_open())
	{
		cout << "Cannot open file, try agin!!" << endl;
		cout << endl << endl;
		return false;
	}
	while (!file_in.eof())
	{
		string temp;
		getline(file_in, temp, ' ');
		if (register_staff_name == temp)
		{
			return true;
		}
		file_in >> temp;
	}
	file_in.close();
	return false;
}

bool checkStaffUserPasswordCode(const string& register_staff_password, const int value)
{
	ifstream file_in;
	file_in.open("staff_login.txt", ios::in);
	if (!file_in.is_open())
	{
		cout << "Cannot open file, try agin!!" << endl;
		cout << endl << endl;
		return false;
	}
	while (!file_in.eof())
	{
		string temp;
		string temp2;
		getline(file_in, temp, ' ');
		getline(file_in, temp, ' ');
		getline(file_in, temp2, '\n');
		int value_temp = stoi(temp2);
		if (register_staff_password == temp && value_temp == value)
		{
			return true;
		}
	}
	file_in.close();
	return false;
}

void menuVersion1()
{
	setCursor(0, 0); // Hide Cursor in console

	PlaySound(TEXT("NgauHung.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // Playing this music as waiting music

	// ----------------------------------------------------- Loading Bar Function ----------------------------------------------------- //
	loadingBar(0);
	system("cls"); // Removing the Loading Bar Function out of the output screen
	// ----------------------------------------------------- Loading Bar Function ----------------------------------------------------- //

	PlaySound(0, 0, 0); // Stop the playing music immediately

	PlaySound(TEXT("AVeilOfMist.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // Playing this music as menu music

	int counter{ 1 }, set_Color[7]{ 12, 5, 5, 5, 5, 5, 5 }, key_Enter;
	while (true)
	{
		// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //
		cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
		cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t          \xB2\xB2\xB2\xB2  \xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
		cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
		cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t     \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
		cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2  \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
		cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2    \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
		cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t  \xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t      \xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
		cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
		// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //
		
		// ----------------------------------------------------- Beginning of Menu ------------------------------------------------------ //
		changeColor(1);
		cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << endl;
		changeColor(set_Color[0]);
		cout << "\n\t\t\t\t\t\t\t1. Login";
		changeColor(set_Color[1]);
		cout << "\n\t\t\t\t\t\t\t2. Register";
		changeColor(set_Color[2]);
		cout << "\n\t\t\t\t\t\t\t3. Forgot UserName or PassWord ?"; // Another situation
		changeColor(set_Color[3]);
		cout << "\n\t\t\t\t\t\t\t4. Exit";
		changeColor(1);
		cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << endl;
		// ----------------------------------------------------- The Ending of Menu ----------------------------------------------------- //

		// Checking some key board elements received from user
		key_Enter = _getch();
		if (key_Enter == 72 && (counter > 1 && counter <= 4))
		{
			counter--;
		}
		else if (key_Enter == 80 && (counter >= 1 && counter < 4))
		{
			counter++;
		}
		else if (key_Enter == 13)
		{
			system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
			if (counter == 1)
			{
				int counter2{ 1 }, set_Color2[3]{ 2, 3, 3 }, key_Enter2;
				while (true)
				{
					// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //
					cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t          \xB2\xB2\xB2\xB2  \xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t     \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2  \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2    \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t  \xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t      \xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
					// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //

					// ----------------------------------------------------- Beginning of Menu ------------------------------------------------------ //
					changeColor(1);
					cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << endl;
					changeColor(set_Color2[0]);
					cout << "\n\t\t\t\t\t\t\t1. Student";
					changeColor(set_Color2[1]);
					cout << "\n\t\t\t\t\t\t\t2. Staff Member";
					changeColor(set_Color2[2]);
					cout << "\n\t\t\t\t\t\t\t3. Exit";
					changeColor(1);
					cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << endl;
					// ----------------------------------------------------- The Ending of Menu ----------------------------------------------------- //

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 > 1 && counter2 <= 3))
					{
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 < 3))
					{
						counter2++;
					}
					else if (key_Enter2 == 13)
					{
						if (counter2 == 1)
						{
							changeColor(6);
							setCursor(1, 10);
							string login_student_name, login_student_password;
							cout << "Please enter student user name: ";
							cin >> login_student_name;
							cout << "Please enter student user password: ";
							cin >> login_student_password;
							if (checkStudentUserExist(login_student_name) && checkStudentUserPassword(login_student_password))
							{
								// Do something here ---> Student
								cout << "Login Student success !!" << endl;
							}
							else
							{
								cout << "Invalid Student User, try again!!" << endl;
							}
							// changeColor(7);
							system("pause");
							setCursor(0, 0);
						}
						else if (counter2 == 2)
						{
							changeColor(6);
							setCursor(1, 10);
							string login_staff_name, login_staff_password;
							int login_staff_code;
							cout << "Please enter student user name: ";
							cin >> login_staff_name;
							cout << "Please enter student user password: ";
							cin >> login_staff_password;
							cout << "Please enter staff user code: ";
							cin >> login_staff_code;
							if (checkStaffUserExist(login_staff_name) && checkStaffUserPasswordCode(login_staff_password, login_staff_code))
							{
								// Do something here ---> Staff
								cout << "Login Staff sucess !!" << endl;
							}
							else
							{
								cout << "Invalid Staff Member, try again!!" << endl;
							}
							// changeColor(7);
							system("pause");
							// setCursor(0, 0);
						}
						else
						{
							break;
						}
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
					}
					else if (key_Enter2 == 27)
					{
						break;
					}

					// Resetting all color of Menu elements at the default color
					set_Color2[0] = 3;
					set_Color2[1] = 3;
					set_Color2[2] = 3;

					// Changing color of element in Menu and making it highlight with different color immediately
					if (counter2 == 1)
					{
						set_Color2[0] = 2;
					}
					else if (counter2 == 2)
					{
						set_Color2[1] = 2;
					}
					else if (counter2 == 3)
					{
						set_Color2[2] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 2)
			{
				int counter2{ 1 }, set_Color2[3]{ 2, 3, 3 }, key_Enter2;
				while (true)
				{
					// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //
					cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t          \xB2\xB2\xB2\xB2  \xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\t   \xB2\xB2\t \xB2\xB2\t           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t\t\t\t |" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\xB2\xB2\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t     \xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2  \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
					cout << "|\t\t \xB2\xB2\t    \xB2\xB2\t\xB2\xB2\t\t \xB2\xB2    \xB2\xB2\xB2\t\t   \xB2\xB2\t      \xB2\xB2\t\t   \xB2\xB2\t                 |" << endl;
					cout << "|\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t \xB2\xB2\t  \xB2\xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t      \xB2\xB2\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t|" << endl;
					cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;
					// ----------------------------------------------------- Beginning of BCRSystem ------------------------------------------------------ //

					// ----------------------------------------------------- Beginning of Menu ------------------------------------------------------ //
					changeColor(1);
					cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << endl;
					changeColor(set_Color2[0]);
					cout << "\n\t\t\t\t\t\t\t1. Student";
					changeColor(set_Color2[1]);
					cout << "\n\t\t\t\t\t\t\t2. Staff Member";
					changeColor(set_Color2[2]);
					cout << "\n\t\t\t\t\t\t\t3. Exit";
					changeColor(1);
					cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << endl;
					// ----------------------------------------------------- The Ending of Menu ----------------------------------------------------- //

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 > 1 && counter2 <= 3))
					{
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 < 3))
					{
						counter2++;
					}
					else if (key_Enter2 == 13)
					{
						if (counter2 == 1)
						{
							changeColor(6);
							setCursor(1, 10);
							string register_student_name, register_student_password;
							ofstream file_out;
							file_out.open("student_login.txt", ios::out);
							cout << "Enter student user name (no white space): ";
							cin >> register_student_name;
							cout << "Enter student user password: ";
							cin >> register_student_password;
							if (checkStudentUserExist(register_student_name) == false)
							{
								file_out << register_student_name << " " << register_student_password << endl;
							}
							else
							{
								cout << "Student is existed, try again!!" << endl;
							}
							file_out.close();
							cout << "-------> Registration is success !!" << endl;
							changeColor(7);
							system("pause");
							setCursor(0, 0);
						}
						else if (counter2 == 2)
						{
							changeColor(6);
							setCursor(1, 10);
							string register_staff_name, register_staff_password, regiser_staff_code;
							ofstream file_out;
							file_out.open("staff_login.txt", ios::out);
							cout << "Enter staff user name (no white space): ";
							cin >> register_staff_name;
							cout << "Enter staff user password: ";
							cin >> register_staff_password;
							cout << "Enter staff user code: ";
							cin >> regiser_staff_code;
							if (checkStaffUserExist(register_staff_name) == false)
							{
								file_out << register_staff_name << " " << register_staff_password << " " << regiser_staff_code << endl;
							}
							else
							{
								cout << "Staff is existed, try again!!" << endl;
							}
							file_out.close();
							cout << "-------> Registration of staff is success !!" << endl;
							changeColor(7);
							system("pause");
							setCursor(0, 0);
						}
						else
						{
							break;
						}
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
					}
					else if (key_Enter2 == 27)
					{
						break;
					}

					// Resetting all color of Menu elements at the default color
					set_Color2[0] = 3;
					set_Color2[1] = 3;
					set_Color2[2] = 3;

					// Changing color of element in Menu and making it highlight with different color immediately
					if (counter2 == 1)
					{
						set_Color2[0] = 2;
					}
					else if (counter2 == 2)
					{
						set_Color2[1] = 2;
					}
					else if (counter2 == 3)
					{
						set_Color2[2] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 3)
			{

			}
			else
			{
				break;
			}
			system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0) 
		}
		else if (key_Enter == 27)
		{
			break;
		}

		// Resetting all color of Menu elements at the default color
		set_Color[0] = 5;
		set_Color[1] = 5;
		set_Color[2] = 5;
		set_Color[3] = 5;

		// Changing color of element in Menu and making it highlight with different color immediately
		if (counter == 1)
		{
			set_Color[0] = 12;
		}
		else if (counter == 2)
		{
			set_Color[1] = 12;
		}
		else if (counter == 3)
		{
			set_Color[2] = 12;
		}
		else if (counter == 4)
		{
			set_Color[3] = 12;
		}

		// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
		// Just using this function when the code is the same after each iteration
		clearConsole();
	}

	PlaySound(0, 0, 0); // Stop the playing music immediately

	system("cls"); // Removing the Menu code out of the output screen

	PlaySound(TEXT("NgauHung.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // Playing this music as finishing music

	// ----------------------------------------------------- Loading Bar Function ----------------------------------------------------- //
	loadingBar(1);
	// ----------------------------------------------------- Loading Bar Function ----------------------------------------------------- //

	PlaySound(0, 0, 0); // Stop the playing music immediately

	return;
}
