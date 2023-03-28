#include "common.h"

void clearConsole() {
	COORD c;
	c.X = 0;
	c.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); return;
}

void changeColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); return;
}

void loadingBar(int status) {
	const char loading = 219;
	for (int i{ 0 }; i <= 50; ++i) {
		clearConsole();
		changeColor(2);
		std::cout << "\n\n\n\n\n\n\n\n\n\n";
		std::cout << "\t\t\t\t\t\t      Project is loading: " << i * 2 << "%" << std::endl << std::endl;
		std::cout << "\t\t\t\t\t";
		for (int j{ 1 }; j <= i; ++j) {
			std::cout << loading;
		}
		std::cout << std::endl << std::endl;
		std::cout << "\t\t\t\t\t    ................. Waiting ................." << std::endl << std::endl;
		if (i < 10) {
			Sleep(300);
		}
		else if (i >= 10 && i < 20) {
			Sleep(250);
		}
		else if (i >= 20 && i < 30) {
			Sleep(150);
		}
		else if (i >= 30 && i < 40) {
			Sleep(100);
		}
		else {
			Sleep(50);
		}
	}
	if (status == 0) {
		changeColor(12);
		std::cout << "\t\t\t\t\t       ^_^ The Project loads Finished !!! ^_^" << std::endl << std::endl;
		changeColor(1);
		std::cout << "\t\t\t\t\t\t   ";
	}
	else {
		changeColor(12);
		std::cout << "\t\t\t\t\t       ^_^ The Project closes Finished !!! ^_^" << std::endl << std::endl;
		changeColor(1);
		std::cout << "\t\t\t\t\t\t   ";
	}
	system("pause"); return;
}

void menu(void) {
	// Calling Loading Bar Function --> Started
	PlaySound(TEXT("NoiNayCoAnh.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // Playing this music as waiting music
	loadingBar(0);
	PlaySound(0, 0, 0); // Stop the playing music immediately
	// Doing some Menu components of Menu Function
	system("cls"); // Removing the Loading Bar Function out of the output screen
	PlaySound(TEXT("TeThatAnhNhoEm.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // Playing this music as the default music of Menu Function
	int counter{ 1 }, set_Color[4]{ 12, 5, 5, 5 }, key_Enter;
	while (true) {
		// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
		changeColor(1);
		std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
		changeColor(set_Color[0]);
		std::cout << "\n\t\t\t\t\t1. Operation counting: Assignments and Comparisons";
		changeColor(set_Color[1]);
		std::cout << "\n\t\t\t\t\t2. Algorithm Design";
		changeColor(set_Color[2]);
		std::cout << "\n\t\t\t\t\t3. Playing music";
		changeColor(set_Color[3]);
		std::cout << "\n\t\t\t\t\t4. Exit";
		changeColor(1);
		std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
		changeColor(7);
		// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

		// Checking some key board elements received from user
		key_Enter = _getch();
		if (key_Enter == 72 && (counter >= 2 && counter <= 4)) {
			counter--;
		}
		else if (key_Enter == 80 && (counter >= 1 && counter <= 3)) {
			counter++;
		}
		else if (key_Enter == 13) {
			system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
			if (counter == 1) {
				int counter2{ 1 }, set_Color2[4]{ 2, 3, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t1. Calculate the sum of squares of integers from 1 to n";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t2. Problem Set A: SomeSum";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t3. Problem Set B: SquareSum Recursion";
					changeColor(set_Color2[3]);
					std::cout << "\n\t\t\t\t\t\t4. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 4)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 3)) {
						counter2++;
					}
					else if (key_Enter2 == 13) {
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
						if (counter2 == 1) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating the sum <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										int count_assignments{}, count_comparasions{};
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(16) << "number" << std::setw(16) << "|" << std::setw(16) << "assignments" << std::setw(16) << "|" << std::setw(16) << "comparasions" << std::setw(16) << "|" << std::setw(16) << "sum" << std::setw(16) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{}; i <= 500; i += 25) {
											if (i == 500) {
												int result = squareSum(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
											}
											else {
												int result = squareSum(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
												std::cout << "|-------------------------------|-------------------------------|-------------------------------|-------------------------------|" << std::endl;
											}
										}
										std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating the sum <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set A <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										int count_assignments{}, count_comparasions{};
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(16) << "number" << std::setw(16) << "|" << std::setw(16) << "assignments" << std::setw(16) << "|" << std::setw(16) << "comparasions" << std::setw(16) << "|" << std::setw(16) << "sum" << std::setw(16) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{}; i <= 500; i += 25) {
											if (i == 500) {
												long long result = someSum(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
											}
											else {
												long long result = someSum(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
												std::cout << "|-------------------------------|-------------------------------|-------------------------------|-------------------------------|" << std::endl;
											}
										}
										std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set A <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 3) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set B <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										int count_assignments{}, count_comparasions{};
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(16) << "number" << std::setw(16) << "|" << std::setw(16) << "assignments" << std::setw(16) << "|" << std::setw(16) << "comparasions" << std::setw(16) << "|" << std::setw(16) << "sum" << std::setw(16) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{}; i <= 500; i += 25) {
											count_assignments = 0;
											count_comparasions = 0;
											if (i == 500) {
												long long result = squareSum_Recursion(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
											}
											else {
												long long result = squareSum_Recursion(i, count_assignments, count_comparasions);
												std::cout << "|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << count_assignments << std::setw(16) << "|" << std::setw(16) << count_comparasions << std::setw(16) << "|" << std::setw(16) << result << std::setw(16) << "|" << std::endl;
												std::cout << "|-------------------------------|-------------------------------|-------------------------------|-------------------------------|" << std::endl;
											}
										}
										std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set B <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 4) {
							break;
						}
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
					}
					else if (key_Enter2 == 27) {
						break;
					}

					// Resetting all color of Menu elements at the default color
					set_Color2[0] = 3;
					set_Color2[1] = 3;
					set_Color2[2] = 3;
					set_Color2[3] = 3;

					// Changing color of element in Menu and making it highlight with different color immediately
					if (counter2 == 1) {
						set_Color2[0] = 2;
					}
					else if (counter2 == 2) {
						set_Color2[1] = 2;
					}
					else if (counter2 == 3) {
						set_Color2[2] = 2;
					}
					else if (counter2 == 4) {
						set_Color2[3] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 2) {
				int counter2{ 1 }, set_Color2[5]{ 2, 3, 3, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t1. Problem Set A: Majority Element";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t2. Problem Set B: Greatest common divisor";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t3. Problem Set C: Word Cloud Problem";
					changeColor(set_Color2[3]);
					std::cout << "\n\t\t\t\t\t\t4. Problem Set D: See Saw Problem";
					changeColor(set_Color2[4]);
					std::cout << "\n\t\t\t\t\t\t5. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 5)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 4)) {
						counter2++;
					}
					else if (key_Enter2 == 13) {
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
						if (counter2 == 1) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set A <--------" << std::endl;
										std::cout << std::endl << std::endl;
										int n, * a{ nullptr };
										std::cout << "\t\t\t\t  ~~~~~~~~> Loading size of array and loading array  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										inputArray(a, n);
										std::cout << "\t\t\t\t  ~~~~~~~~> Outputting an array  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										outputArray(a, n);
										std::cout << "\t\t\t\t  ~~~~~~~~> Loading integer number  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										double val;
										std::cout << "\t+ Please enter a value to check: ";
										std::cin >> val;
										int cast_int_val = (int)val;
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										int count_assignments1, count_comparasions1, count_assignments2, count_comparasions2;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(10) << "algorithm" << std::setw(10) << "|" << std::setw(9) << "time(ns)" << std::setw(9) << "|" << std::setw(9) << "number" << std::setw(9) << "|" << std::setw(13) << "assignments" << std::setw(13) << "|" << std::setw(13) << "comparasions" << std::setw(13) << "|" << std::setw(10) << "result" << std::setw(10) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										auto start1 = std::chrono::high_resolution_clock::now();
										int result1 = majorityElement1(a, n, cast_int_val, count_assignments1, count_comparasions1);
										auto end1 = std::chrono::high_resolution_clock::now();
										auto start2 = std::chrono::high_resolution_clock::now();
										int result2 = majorityElement2(a, n, cast_int_val, count_assignments2, count_comparasions2);
										auto end2 = std::chrono::high_resolution_clock::now();
										auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1);
										auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
										for (int i{ 1 }; i <= 2; ++i) {
											if (i == 2) {
												if (result2 == INT16_MIN) {
													std::cout << "|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration2.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments2 << std::setw(13) << "|" << std::setw(13) << count_comparasions2 << std::setw(13) << "|" << std::setw(10) << "No" << std::setw(10) << "|" << std::endl;
													std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
													std::cout << std::endl << std::endl;
												}
												else {
													std::cout << "|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration2.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments2 << std::setw(13) << "|" << std::setw(13) << count_comparasions2 << std::setw(13) << "|" << std::setw(10) << result2 << std::setw(10) << "|" << std::endl;
													std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
													std::cout << std::endl << std::endl;
												}
											}
											else {
												if (result1 == INT16_MIN) {
													std::cout << "|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration1.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments1 << std::setw(13) << "|" << std::setw(13) << count_comparasions1 << std::setw(13) << "|" << std::setw(10) << "No" << std::setw(10) << "|" << std::endl;
													std::cout << "|-------------------|-----------------|-----------------|-------------------------|-------------------------|-------------------|" << std::endl;
												}
												else {
													std::cout << "|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration1.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments1 << std::setw(13) << "|" << std::setw(13) << count_comparasions1 << std::setw(13) << "|" << std::setw(10) << result1 << std::setw(10) << "|" << std::endl;
													std::cout << "|-------------------|-----------------|-----------------|-------------------------|-------------------------|-------------------|" << std::endl;
												}
											}
										}
										deleteArray(a);
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set A <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set B <--------" << std::endl;
										std::cout << std::endl << std::endl;
										int a, b;
										std::cout << "\t\t\t\t  ~~~~~~~~> Loading integer Numbers  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										inputNumbers(a, b);
										std::cout << "\t\t\t\t  ~~~~~~~~> Outputting integer Numbers  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										outputNumbers(a, b);
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										int count_assignments1{}, count_comparasions1{}, count_assignments2{}, count_comparasions2{};
										std::cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "\t|" << std::setw(10) << "algorithm" << std::setw(10) << "|" << std::setw(9) << "time(ns)" << std::setw(9) << "|" << std::setw(13) << "assignments" << std::setw(13) << "|" << std::setw(13) << "comparasions" << std::setw(13) << "|" << std::setw(10) << "result" << std::setw(10) << "|" << std::endl;
										std::cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										auto start1 = std::chrono::high_resolution_clock::now();
										int result1 = greatest_Common_Divisor1(a, b, count_assignments1, count_comparasions1);
										auto end1 = std::chrono::high_resolution_clock::now();
										auto start2 = std::chrono::high_resolution_clock::now();
										int result2 = greatest_Common_Divisor2(a, b, count_assignments2, count_comparasions2);
										auto end2 = std::chrono::high_resolution_clock::now();
										auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1);
										auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
										for (int i{ 1 }; i <= 2; ++i) {
											if (i == 2) {
												std::cout << "\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration2.count() << std::setw(9) << "|" << std::setw(13) << count_assignments2 << std::setw(13) << "|" << std::setw(13) << count_comparasions2 << std::setw(13) << "|" << std::setw(10) << result2 << std::setw(10) << "|" << std::endl;
												std::cout << "\t*-------------------------------------------------------------------------------------------------------------*" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration1.count() << std::setw(9) << "|" << std::setw(13) << count_assignments1 << std::setw(13) << "|" << std::setw(13) << count_comparasions1 << std::setw(13) << "|" << std::setw(10) << result1 << std::setw(10) << "|" << std::endl;
												std::cout << "\t|-------------------|-----------------|-------------------------|-------------------------|-------------------|" << std::endl;
											}
										}
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set B <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 3) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set C <--------" << std::endl;
										std::cout << std::endl << std::endl;
										int n;
										std::string* l{ nullptr };
										std::cout << "\t\t\t\t  ~~~~~~~~> Loading size of list and loading list of words  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										inputWordList(l, n);
										std::cout << "\t\t\t\t  ~~~~~~~~> Outputting a list of words  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										outputWordList(l, n);
										int count_assignments1, count_comparasions1, size1, count_assignments2, count_comparasions2, size2;
										auto start1 = std::chrono::high_resolution_clock::now();
										std::string* result1 = word_Cloud1(l, n, size1, count_assignments1, count_comparasions1);
										auto end1 = std::chrono::high_resolution_clock::now();
										std::cout << "\t\t\t\t  ~~~~~~~~> Algorithm 1: Outputting a counting list of words  <~~~~~~~~" << std::endl;
										std::cout << "---> The counting list of words is: " << std::endl << std::endl << std::endl;
										std::cout << "\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "\t\t\t\t|" << std::setw(16) << "I" << std::setw(16) << "|" << std::setw(16) << "Counting Words" << std::setw(16) << "|" << std::endl;
										std::cout << "\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{}; i < size1; ++i) {
											if (i == size1 - 1) {
												std::cout << "\t\t\t\t|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << *(result1 + i) << std::setw(16) << "|" << std::endl;
												std::cout << "\t\t\t\t*---------------------------------------------------------------*" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "\t\t\t\t|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << *(result1 + i) << std::setw(16) << "|" << std::endl;
												std::cout << "\t\t\t\t|-------------------------------|-------------------------------|" << std::endl;
											}
										}
										std::cout << "---> Algorithm 1 is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										auto start2 = std::chrono::high_resolution_clock::now();
										std::string* result2 = word_Cloud2(l, n, size2, count_assignments2, count_comparasions2);
										auto end2 = std::chrono::high_resolution_clock::now();
										std::cout << "\t\t\t\t  ~~~~~~~~> Algorithm 2: Outputting a counting list of words  <~~~~~~~~" << std::endl;
										std::cout << "---> The counting list of words is: " << std::endl << std::endl << std::endl;
										std::cout << "\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "\t\t\t\t|" << std::setw(16) << "I" << std::setw(16) << "|" << std::setw(16) << "Counting Words" << std::setw(16) << "|" << std::endl;
										std::cout << "\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{}; i < size2; ++i) {
											if (i == size1 - 1) {
												std::cout << "\t\t\t\t|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << *(result2 + i) << std::setw(16) << "|" << std::endl;
												std::cout << "\t\t\t\t*---------------------------------------------------------------*" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "\t\t\t\t|" << std::setw(16) << i << std::setw(16) << "|" << std::setw(16) << *(result2 + i) << std::setw(16) << "|" << std::endl;
												std::cout << "\t\t\t\t|-------------------------------|-------------------------------|" << std::endl;
											}
										}
										std::cout << "---> Algorithm 1 is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1);
										auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "\t|" << std::setw(10) << "algorithm" << std::setw(10) << "|" << std::setw(9) << "time(ns)" << std::setw(9) << "|" << std::setw(9) << "number" << std::setw(9) << "|" << std::setw(13) << "assignments" << std::setw(13) << "|" << std::setw(13) << "comparasions" << std::setw(13) << "|" << std::endl;
										std::cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{ 1 }; i <= 2; ++i) {
											if (i == 2) {
												std::cout << "\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration2.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments2 << std::setw(13) << "|" << std::setw(13) << count_comparasions2 << std::setw(13) << "|" << std::endl;
												std::cout << "\t*-----------------------------------------------------------------------------------------------------------*" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration1.count() << std::setw(9) << "|" << std::setw(9) << n << std::setw(9) << "|" << std::setw(13) << count_assignments1 << std::setw(13) << "|" << std::setw(13) << count_comparasions1 << std::setw(13) << "|" << std::endl;
												std::cout << "\t|-------------------|-----------------|-----------------|-------------------------|-------------------------|" << std::endl;
											}
										}
										deleteList(l);
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set C <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 4) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set D <--------" << std::endl;
										std::cout << std::endl << std::endl;
										int numbers_left_children, numbers_right_children, length_n, * list_Hat_Weights{ nullptr }, * left_Children_Weights{ nullptr }, * right_Children_Weights{ nullptr };
										LISTSEESAWS* result1{ nullptr };
										LISTSEESAWS* result2{ nullptr };
										std::cout << "\t\t\t\t  ~~~~~~~~> Loading an information of See Saw  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										inputSeeSaw(left_Children_Weights, numbers_left_children, right_Children_Weights, numbers_right_children, list_Hat_Weights, length_n);
										std::cout << "\t\t\t\t  ~~~~~~~~> Outputting an information of See Saw input  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										outputSeeSaw(left_Children_Weights, numbers_left_children, right_Children_Weights, numbers_right_children, list_Hat_Weights, length_n);
										int count_assignments1, count_comparasions1, count_assignments2, count_comparasions2;
										std::cout << "\t\t\t\t  ~~~~~~~~> Algorithm 1: Outputting a counting list of words  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										auto start1 = std::chrono::high_resolution_clock::now();
										result1 = see_Saw1(left_Children_Weights, numbers_left_children, right_Children_Weights, numbers_right_children, list_Hat_Weights, length_n, count_assignments1, count_comparasions1);
										auto end1 = std::chrono::high_resolution_clock::now();
										std::cout << "\t\t========= The outputting list of See Saws =========" << std::endl << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(10) << "pos_Hat_i" << std::setw(10) << "|" << std::setw(10) << "pos_Hat_j" << std::setw(10) << "|" << std::setw(16) << "LeftTotal_Hat" << std::setw(16) << "|" << std::setw(16) << "RightTotal_Hat" << std::setw(16) << "|" << std::setw(12) << "Status" << std::setw(12) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (SEESAW* k = result1->p_head; k != nullptr; k = k->p_next) {
											if (k == result1->p_tail) {
												std::cout << "|" << std::setw(10) << k->pos_Hat_i << std::setw(10) << "|" << std::setw(10) << k->pos_Hat_j << std::setw(10) << "|" << std::setw(16) << k->left_Total_With_HatWeights << std::setw(16) << "|" << std::setw(16) << k->right_Total_With_HatWeights << std::setw(16) << "|" << std::setw(12) << k->status << std::setw(12) << "|" << std::endl;
											}
											else {
												std::cout << "|" << std::setw(10) << k->pos_Hat_i << std::setw(10) << "|" << std::setw(10) << k->pos_Hat_j << std::setw(10) << "|" << std::setw(16) << k->left_Total_With_HatWeights << std::setw(16) << "|" << std::setw(16) << k->right_Total_With_HatWeights << std::setw(16) << "|" << std::setw(12) << k->status << std::setw(12) << "|" << std::endl;
												std::cout << "|-------------------|-------------------|-------------------------------|-------------------------------|-----------------------|" << std::endl;
											}
										}
										std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Algorithm 1 is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t  ~~~~~~~~> Algorithm 2: Outputting a counting list of words  <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										auto start2 = std::chrono::high_resolution_clock::now();
										result2 = see_Saw2(left_Children_Weights, numbers_left_children, right_Children_Weights, numbers_right_children, list_Hat_Weights, length_n, count_assignments2, count_comparasions2);
										auto end2 = std::chrono::high_resolution_clock::now();
										std::cout << "\t\t========= The outputting list of See Saws =========" << std::endl << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "|" << std::setw(10) << "pos_Hat_i" << std::setw(10) << "|" << std::setw(10) << "pos_Hat_j" << std::setw(10) << "|" << std::setw(16) << "LeftTotal_Hat" << std::setw(16) << "|" << std::setw(16) << "RightTotal_Hat" << std::setw(16) << "|" << std::setw(12) << "Status" << std::setw(12) << "|" << std::endl;
										std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (SEESAW* k = result2->p_head; k != nullptr; k = k->p_next) {
											if (k == result2->p_tail) {
												std::cout << "|" << std::setw(10) << k->pos_Hat_i << std::setw(10) << "|" << std::setw(10) << k->pos_Hat_j << std::setw(10) << "|" << std::setw(16) << k->left_Total_With_HatWeights << std::setw(16) << "|" << std::setw(16) << k->right_Total_With_HatWeights << std::setw(16) << "|" << std::setw(12) << k->status << std::setw(12) << "|" << std::endl;
											}
											else {
												std::cout << "|" << std::setw(10) << k->pos_Hat_i << std::setw(10) << "|" << std::setw(10) << k->pos_Hat_j << std::setw(10) << "|" << std::setw(16) << k->left_Total_With_HatWeights << std::setw(16) << "|" << std::setw(16) << k->right_Total_With_HatWeights << std::setw(16) << "|" << std::setw(12) << k->status << std::setw(12) << "|" << std::endl;
												std::cout << "|-------------------|-------------------|-------------------------------|-------------------------------|-----------------------|" << std::endl;
											}
										}
										std::cout << "*-------------------------------------------------------------------------------------------------------------------------------*" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Algorithm 2 is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - start1);
										auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
										std::cout << "\t\t\t\t  ~~~~~~~~> Counting the numbers of assignment and comparison operations <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										std::cout << "\t\t|" << std::setw(10) << "algorithm" << std::setw(10) << "|" << std::setw(9) << "time(ns)" << std::setw(9) << "|" << std::setw(13) << "assignments" << std::setw(13) << "|" << std::setw(13) << "comparasions" << std::setw(13) << "|" << std::endl;
										std::cout << "\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
										for (int i{ 1 }; i <= 2; ++i) {
											if (i == 2) {
												std::cout << "\t\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration2.count() << std::setw(9) << "|" << std::setw(13) << count_assignments2 << std::setw(13) << "|" << std::setw(13) << count_comparasions2 << std::setw(13) << "|" << std::endl;
												std::cout << "\t\t*-----------------------------------------------------------------------------------------*" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "\t\t|" << std::setw(10) << i << std::setw(10) << "|" << std::setw(9) << duration1.count() << std::setw(9) << "|" << std::setw(13) << count_assignments1 << std::setw(13) << "|" << std::setw(13) << count_comparasions1 << std::setw(13) << "|" << std::endl;
												std::cout << "\t\t|-------------------|-----------------|-------------------------|-------------------------|" << std::endl;
											}
										}
										delete_ListHatWeights(list_Hat_Weights);
										delete_ListSeeSaw(result1);
										delete_ListSeeSaw(result2);
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Problem Set D <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 5) {
							break;
						}
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
					}
					else if (key_Enter2 == 27) {
						break;
					}

					// Resetting all color of Menu elements at the default color
					set_Color2[0] = 3;
					set_Color2[1] = 3;
					set_Color2[2] = 3;
					set_Color2[3] = 3;
					set_Color2[4] = 3;

					// Changing color of element in Menu and making it highlight with different color immediately
					if (counter2 == 1) {
						set_Color2[0] = 2;
					}
					else if (counter2 == 2) {
						set_Color2[1] = 2;
					}
					else if (counter2 == 3) {
						set_Color2[2] = 2;
					}
					else if (counter2 == 4) {
						set_Color2[3] = 2;
					}
					else if (counter2 == 5) {
						set_Color2[4] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 3) {
				int counter2{ 1 }, set_Color2[4]{ 2, 3, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t\t1. Vietnamese music";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t\t2. Chinese music";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t\t3. No playing any music";
					changeColor(set_Color2[3]);
					std::cout << "\n\t\t\t\t\t\t\t4. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 4)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 3)) {
						counter2++;
					}
					else if (key_Enter2 == 13) {
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
						if (counter2 == 1) {
							int counter3{ 1 }, set_Color3[8]{ 5, 4, 4, 4, 4, 4, 4, 4 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t\t1. Loi Duong Mat";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t\t2. Co Hen Voi Thanh Xuan";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t\t\t3. Hay Trao Cho Anh";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t\t\t4. Freaky Squad";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t\t\t5. Yeu Em Hon Moi Ngay";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t\t\t\t6. The Gioi Ao Tinh Yeu That";
								changeColor(set_Color3[6]);
								std::cout << "\n\t\t\t\t\t\t\t7. Te That Anh Nho Em";
								changeColor(set_Color3[7]);
								std::cout << "\n\t\t\t\t\t\t\t8. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 8)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 7)) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
									if (counter3 == 1) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Loi Duong Mat' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("LoiDuongMat.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 2) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Co Hen Voi Thanh Xuan' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("cohenvoithanhxuan.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 3) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Hay Trao Cho Anh' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("HayTraoChoAnh.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 4) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Freaky Squad' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("FreakySquad.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 5) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Yeu Em Hon Moi Ngay' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("YeuEmHonMoiNgay.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 6) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'The Gioi Ao Tinh Yeu That' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("TheGioiAoTinhYeuThat.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 7) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Te That Anh Nho Em' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("TeThatAnhNhoEm.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 8) {
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 4;
								set_Color3[1] = 4;
								set_Color3[2] = 4;
								set_Color3[3] = 4;
								set_Color3[4] = 4;
								set_Color3[5] = 4;
								set_Color3[6] = 4;
								set_Color3[7] = 4;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 5;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 5;
								}
								else if (counter3 == 3) {
									set_Color3[2] = 5;
								}
								else if (counter3 == 4) {
									set_Color3[3] = 5;
								}
								else if (counter3 == 5) {
									set_Color3[4] = 5;
								}
								else if (counter3 == 6) {
									set_Color3[5] = 5;
								}
								else if (counter3 == 7) {
									set_Color3[6] = 5;
								}
								else if (counter3 == 8) {
									set_Color3[7] = 5;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[5]{ 5, 4, 4, 4, 4 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t\t1. Chuyen Bay Thao Thuc";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t\t2. Tam Lang Nhu Nuoc";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t\t\t3. Nguoi Se Yeu Em Den Khi Nao";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t\t\t4. Than Van He";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t\t\t5. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 5)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 4)) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
									if (counter3 == 1) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Chuyen Bay Thao Thuc' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("ChuyenBayThaoThuc.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 2) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Tam Lang Nhu Nuoc' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("TamLangNhuNuoc.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 3) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Nguoi Se Yeu Em Den Khi Nao' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("NguoiSeYeuEmDenKhiNao.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 4) {
										int counter4{ 1 }, set_Color4[2]{ 7, 5 }, key_Enter4;
										while (true) {
											// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
											changeColor(set_Color4[0]);
											std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
											changeColor(set_Color4[1]);
											std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
											changeColor(1);
											std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
											changeColor(7);
											// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

											// Checking some key board elements received from user
											key_Enter4 = _getch();
											if (key_Enter4 == 72 && counter4 == 2) {
												counter4--;
											}
											else if (key_Enter4 == 80 && counter4 == 1) {
												counter4++;
											}
											else if (key_Enter4 == 13) {
												if (counter4 == 1) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The music is played with name 'Than Van He' !!!" << std::endl;
													std::cout << std::endl << std::endl;
													PlaySound(TEXT("ThanVanHe.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
													std::cout << "---> Playing a music is: Working well!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
											}
											else if (key_Enter4 == 27) {
												break;
											}

											// Resetting all color of Menu elements at the default color
											set_Color4[0] = 5;
											set_Color4[1] = 5;

											// Changing color of element in Menu and making it highlight with different color immediately
											if (counter4 == 1) {
												set_Color4[0] = 7;
											}
											else if (counter4 == 2) {
												set_Color4[1] = 7;
											}

											// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
											// Just using this function when the code is the same after each iteration
											clearConsole();
										}
									}
									else if (counter3 == 5) {
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 4;
								set_Color3[1] = 4;
								set_Color3[2] = 4;
								set_Color3[3] = 4;
								set_Color3[4] = 4;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 5;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 5;
								}
								else if (counter3 == 3) {
									set_Color3[2] = 5;
								}
								else if (counter3 == 4) {
									set_Color3[3] = 5;
								}
								else if (counter3 == 5) {
									set_Color3[4] = 5;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 3) {
							int counter3{ 1 }, set_Color3[2]{ 7, 5 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Yes, do it!";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. No, don't do it";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && counter3 == 2) {
									counter3--;
								}
								else if (key_Enter3 == 80 && counter3 == 1) {
									counter3++;
								}
								else if (key_Enter3 == 13) {
									if (counter3 == 1) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The music has stop !!!" << std::endl;
										std::cout << std::endl << std::endl;
										PlaySound(0, 0, 0);
										std::cout << "---> Playing a music is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Playing music for this project <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
								}
								else if (key_Enter3 == 27) {
									break;
								}

								// Resetting all color of Menu elements at the default color
								set_Color3[0] = 5;
								set_Color3[1] = 5;

								// Changing color of element in Menu and making it highlight with different color immediately
								if (counter3 == 1) {
									set_Color3[0] = 7;
								}
								else if (counter3 == 2) {
									set_Color3[1] = 7;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
						}
						else if (counter2 == 4) {
							break;
						}
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
					}
					else if (key_Enter2 == 27) {
						break;
					}

					// Resetting all color of Menu elements at the default color
					set_Color2[0] = 3;
					set_Color2[1] = 3;
					set_Color2[2] = 3;
					set_Color2[3] = 3;

					// Changing color of element in Menu and making it highlight with different color immediately
					if (counter2 == 1) {
						set_Color2[0] = 2;
					}
					else if (counter2 == 2) {
						set_Color2[1] = 2;
					}
					else if (counter2 == 3) {
						set_Color2[2] = 2;
					}
					else if (counter2 == 4) {
						set_Color2[3] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 4) {
				break;
			}
			system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0)
		}
		else if (key_Enter == 27) {
			break;
		}

		// Resetting all color of Menu elements at the default color
		set_Color[0] = 5;
		set_Color[1] = 5;
		set_Color[2] = 5;
		set_Color[3] = 5;

		// Changing color of element in Menu and making it highlight with different color immediately
		if (counter == 1) {
			set_Color[0] = 12;
		}
		else if (counter == 2) {
			set_Color[1] = 12;
		}
		else if (counter == 3) {
			set_Color[2] = 12;
		}
		else if (counter == 4) {
			set_Color[3] = 12;
		}

		// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
		// Just using this function when the code is the same after each iteration
		clearConsole();
	}
	PlaySound(0, 0, 0); // Stop the playing music immediately
	// Calling Loading Bar Function --> Finished
	system("cls");
	PlaySound(TEXT("FreakySquad.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	loadingBar(1);
	PlaySound(0, 0, 0); // Stop the playing music immediately
	return;
}