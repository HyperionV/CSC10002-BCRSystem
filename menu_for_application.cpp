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
	int counter{ 1 }, set_Color[7]{ 12, 5, 5, 5, 5, 5, 5 }, key_Enter;
	while (true) {
		// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
		changeColor(1);
		std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
		changeColor(set_Color[0]);
		std::cout << "\n\t\t\t\t\t\t\t1. Pointer";
		changeColor(set_Color[1]);
		std::cout << "\n\t\t\t\t\t\t\t2. Recursion";
		changeColor(set_Color[2]);
		std::cout << "\n\t\t\t\t\t\t\t3. File Handling";
		changeColor(set_Color[3]);
		std::cout << "\n\t\t\t\t\t\t\t4. Linkedlist";
		changeColor(set_Color[4]);
		std::cout << "\n\t\t\t\t\t\t\t5. Stack - Queue";
		changeColor(set_Color[5]);
		std::cout << "\n\t\t\t\t\t\t\t6. Playing music";
		changeColor(set_Color[6]);
		std::cout << "\n\t\t\t\t\t\t\t7. Exit";
		changeColor(1);
		std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
		// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

		// Checking some key board elements received from user
		key_Enter = _getch();
		if (key_Enter == 72 && (counter >= 2 && counter <= 7)) {
			counter--;
		}
		else if (key_Enter == 80 && (counter >= 1 && counter <= 6)) {
			counter++;
		}
		else if (key_Enter == 13) {
			system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0) 
			if (counter == 1) {
				int counter2{ 1 }, set_Color2[5]{ 2, 3, 3, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t1. Pointer with Numbers";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t2. Pointer with Array (One Dimensional Array)";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t3. Pointer with Matrix (Two Dimensional Array)";
					changeColor(set_Color2[3]);
					std::cout << "\n\t\t\t\t\t\t4. Pointer with Search Algorithm";
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
							int counter3{ 1 }, set_Color3[5]{ 5, 4, 4, 4, 4 }, key_Enter3;
							int* num1{ nullptr }, * num2{ nullptr }; // Declaration 2 pointer integer numbers as global pointer variables in this scope
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Input 2 integer numbers";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. Output 2 integer numbers";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t\t3. Swap 2 given integers";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t\t4. Calculate the total value of 2 integers";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t\t5. Exit";
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Input integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (num1 == nullptr && num2 == nullptr) {
														std::cout << "---> Pay Attention: The num1 and num2 is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														input_Integer_Numbers(num1, num2); // Putting data from user through the console and push it into num1 and num2 
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "---> Pay Attention: The num1 and num2 is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														input_Integer_Numbers(num1, num2); // Putting data from user through the console and push it into num1 and num2 
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Input integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (num1 == nullptr && num2 == nullptr) {
														std::cout << "---> Pay Attention: Please input all 2 integer numbers before printing/doing with them, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														output_Integer_Numbers(num1, num2); // Print out data from variable num1 and num2 to the console
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (num1 == nullptr && num2 == nullptr) {
														std::cout << "---> Pay Attention: Please input all 2 integer numbers before printing/doing with them, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output some integer numbers (before swap) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														output_Integer_Numbers(num1, num2); // Print out data from variable num1 and num2 to the console
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Swapping <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														swap_Integer_Numbers(num1, num2); // function to swap 2 integer numbers and parameters here is pointers --> need provide address of data used
														std::cout << "\t\t\t\t~~~~~~~~> Output some integer numbers (after swap) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														output_Integer_Numbers(num1, num2); // Print out data from variable num1 and num2 to the console
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Summing integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (num1 == nullptr && num2 == nullptr) {
														std::cout << "---> Pay Attention: Please input all 2 integer numbers before printing/doing with them, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Summing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int* result{ nullptr };
														result = sum_Integer_Numbers(num1, num2);
														std::cout << "\t\t\t\t~~~~~~~~> The result of summing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t========= Result of summing some integer Numbers =========" << std::endl;
														std::cout << "---> The result of summing integer numbers is: " << *num1 << " + " << *num2 << " = " << *result << std::endl;
														std::cout << std::endl << std::endl;
														delete_Pointer(result); // delete pointer when it is not used anymore in the future
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Summing integer Numbers <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
							delete_Pointer(num1); // Deleting a pointer after using it
							delete_Pointer(num2); // Deleting a pointer after using it
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[8]{ 5, 4, 4, 4, 4, 4, 4, 4 }, key_Enter3;
							int size_array{}, * array{ nullptr };
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t1. Input an array with unknown size";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t2. Print a given array";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t3. Find the largest value from a given array";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t4. Find the longest ascending subarray from a given array.";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t5. Swap 2 given arrays";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t6. Concatenate 2 given array";
								changeColor(set_Color3[6]);
								std::cout << "\n\t\t\t\t7. Generate a new ascending array with all elements from 2 given ascending arrays";
								changeColor(set_Color3[7]);
								std::cout << "\n\t\t\t\t8. Exit";
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Input an array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (array == nullptr) {
														std::cout << "---> Pay Attention: The array is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														inputArray(array, size_array);
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "---> Pay Attention: The array is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														int* temp = array;
														array = nullptr;
														deleteArray(temp);
														inputArray(array, size_array);
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Input an array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output an array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (array == nullptr) {
														std::cout << "---> Pay Attention: An Array is not initalized until now, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														printArray(array, size_array);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output an array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the largest value in Array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (array == nullptr) {
														std::cout << "---> Pay Attention: An Array is not initalized until now, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printArray(array, size_array);
														std::cout << "\t\t\t\t~~~~~~~~> Output the maximum value in an array <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int* result{ nullptr };
														result = findMax(array, size_array);
														std::cout << "---> The largest value is: " << *result << std::endl;
														std::cout << std::endl << std::endl;
														delete result;
														result = nullptr;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the largest value in Array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the longest subarray in Array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (array == nullptr) {
														std::cout << "---> Pay Attention: An Array is not initalized until now, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printArray(array, size_array);
														std::cout << "\t\t\t\t~~~~~~~~> Output an ascending subArray <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int* subarray{ nullptr }, length{};
														subarray = findLongestAscendingSubarray(array, size_array, length);
														printArray(subarray, length);
														std::cout << std::endl << std::endl;
														deleteArray(subarray);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the longest subarray in Array <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int* array1{ nullptr }, * array2{ nullptr }, length1{}, length2{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 1 (Before swap) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 2 (Before swap) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Swapping <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													swapArrays(array1, array2, length1, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 1 (After swap) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 2 (After swap) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array2, length2);
													deleteArray(array1);
													deleteArray(array2);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int* array1{ nullptr }, * array2{ nullptr }, * result{ nullptr }, length1{}, length2{}, length_result{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Concatenating <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													result = concatenate2Arrays(array1, array2, length1, length2);
													length_result = length1 + length2;
													std::cout << "\t\t\t\t~~~~~~~~> Output an concatenating Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(result, length1 + length2);
													deleteArray(array1);
													deleteArray(array2);
													deleteArray(result);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating new ascending Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int* array1{ nullptr }, * array2{ nullptr }, * result{ nullptr }, length1{}, length2{}, length_result{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 1 (with distinguish elements) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													input_AscendingArray_DistinguishElements(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 1 (with distinguish elements) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													input_AscendingArray_DistinguishElements(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 1 (with distinguish elements) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 2 (with distinguish elements) <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Generating an Ascending Arrays from 2 given Arrays above <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													result = merge2Arrays(array1, array2, length1, length2, length_result);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Ascending Arrays <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(result, length_result);
													deleteArray(array1);
													deleteArray(array2);
													deleteArray(result);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating new ascending Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
							deleteArray(array);
						}
						else if (counter2 == 3) {
							int counter3{ 1 }, set_Color3[11]{ 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 }, key_Enter3;
							int ** matrix{ nullptr }, length{}, width{};
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t1. Generate a random matrix with keyboard input size";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t2. Print a matrix";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t3. Given 2 1D arrays a and b. Generate the matrix c that c[i][j] = a[i] * b[j]";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t4. Swap 2 rows of a given matrix";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t5. Swap 2 columns of a given matrix";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t6. Generate the transpose matrix of a given matrix";
								changeColor(set_Color3[6]);
								std::cout << "\n\t\t\t\t7. Concatenate 2 given size-equal matrices by Vertically";
								changeColor(set_Color3[7]);
								std::cout << "\n\t\t\t\t8. Concatenate 2 given size-equal matrices by Horizontally";
								changeColor(set_Color3[8]);
								std::cout << "\n\t\t\t\t9. Multiple 2 given matrices";
								changeColor(set_Color3[9]);
								std::cout << "\n\t\t\t\t10. Find the submatrix of a given matrix and has the largest total value of its elements";
								changeColor(set_Color3[10]);
								std::cout << "\n\t\t\t\t11. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 11)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 10)) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating a random Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: The random matrix is not intialized until now !!!" << std::endl;
														std::cout << std::endl;
														generateMatrix1(matrix, length, width);
													}
													else {
														std::cout << "---> Pay Attention: The random matrix is intialized until now !!!" << std::endl;
														std::cout << std::endl;
														int** temp = matrix;
														matrix = nullptr;
														deleteMatrix(temp, length, width);
														generateMatrix1(matrix, length, width);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating a random Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output a Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: Please generating matrix before printing/doing something with matrix, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														printMatrix(matrix, length, width);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output a Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating a Matrix from 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int* array1{ nullptr }, * array2{ nullptr }, length1{}, length2{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													//srand((unsigned)time(0));
													inputArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array1, length1);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array2, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Generating a Matrix from Array 1 and Array 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													int** result = generateMatrix2(array1, array2, length1, length2);
													std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printMatrix(result, length2, length1);
													deleteArray(array1);
													deleteArray(array2);
													deleteMatrix(result, length2, length1);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Generating a Matrix from 2 given Arrays <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping rows in Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: Please generating matrix before printing/doing something with matrix, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (Before swapping 2 rows) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Swapping 2 rows <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														swapRows(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (After swapping 2 rows) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping rows in Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping columns in Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: Please generating matrix before printing/doing something with matrix, please try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (Before swapping 2 columns) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Swapping 2 columns <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														swapColumns(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (After swapping 2 columns) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Swapping columns in Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Transpose a given Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: Please generating matrix before printing/doing something with matrix, please try again !!!";
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (Before transposing) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Transposing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int** result = transposeMatrix(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix (After transposing) <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(result, width, length);
														deleteMatrix(result, width, length);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Transpose a given Matrix <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Matrices by Vertically <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int** matrix1{ nullptr }, ** matrix2{ nullptr }, length1{}, width1{}, length2{}, width2{};
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix1, length1, width1);
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix2, length2, width2);
													std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printMatrix(matrix1, length1, width1);
													std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printMatrix(matrix2, length2, width2);
													std::cout << "\t\t\t\t~~~~~~~~> Output a concatenating Matrix by Vertically <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													if ((length1 != length2) || (width1 != width2)) {
														std::cout << "---> Pay Attention: 2 given Matrices are not same size (means size-equal), please try again!!!";
														std::cout << std::endl << std::endl;
													}
													else {
														int length_common{ length1 }, width_common{ width1 };
														int** result = concatenate2MatricesV(matrix1, matrix2, length_common, width_common);
														printMatrix(result, length_common, width_common * 2);
														deleteMatrix(result, length_common, width_common * 2);
													}
													deleteMatrix(matrix1, length1, width1);
													deleteMatrix(matrix2, length2, width2);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Matrices by Vertically <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Matrices by horizontally <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int** matrix1{ nullptr }, ** matrix2{ nullptr }, length1{}, width1{}, length2{}, width2{};
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix1, length1, width1);
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix2, length2, width2);
													std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printMatrix(matrix1, length1, width1);
													std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printMatrix(matrix2, length2, width2);
													std::cout << "\t\t\t\t~~~~~~~~> Output a concatenating Matrix by horizontally <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													if ((length1 != length2) || (width1 != width2)) {
														std::cout << "---> Pay Attention: 2 given Matrices are not same size (means size-equal), please try again!!!";
														std::cout << std::endl << std::endl;
													}
													else {
														int length_common{ length1 }, width_common{ width1 };
														int** result = concatenate2MatricesH(matrix1, matrix2, length_common, width_common);
														printMatrix(result, length_common * 2, width_common);
														deleteMatrix(result, length_common * 2, width_common);
													}
													deleteMatrix(matrix1, length1, width1);
													deleteMatrix(matrix2, length2, width2);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Concatenating 2 given Matrices by horizontally <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 9) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Multipling 2 given Matrices <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int** matrix1{ nullptr }, ** matrix2{ nullptr }, length1{}, width1{}, length2{}, width2{};
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 1 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix1, length1, width1);
													std::cout << "\t\t\t\t~~~~~~~~> Input a Matrix 2 <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													generateMatrix1(matrix2, length2, width2);
													system("cls");
													int counter5{ 1 }, set_Color5[3]{ 2, 3, 3 }, key_Enter5;
													while (true) {
														// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
														changeColor(1);
														std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
														changeColor(set_Color5[0]);
														std::cout << "\n\t\t\t\t\t\t1. Multipling Matrix 1 to Matrix 2";
														changeColor(set_Color5[1]);
														std::cout << "\n\t\t\t\t\t\t2. Multipling Matrix 2 to Matrix 1";
														changeColor(set_Color5[2]);
														std::cout << "\n\t\t\t\t\t\t3. Don't do anything";
														changeColor(1);
														std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
														changeColor(7);
														// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------
														
														// Checking some key board elements received from user
														key_Enter5 = _getch();
														if (key_Enter5 == 72 && (counter5 >= 2 && counter5 <= 3)) {
															counter5--;
														}
														else if (key_Enter5 == 80 && (counter5 >= 1 && counter5 <= 2)) {
															counter5++;
														}
														else if (key_Enter5 == 13) {
															if (counter5 == 1) {
																changeColor(6);
																std::cout << std::endl << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 1 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printMatrix(matrix1, length1, width1);
																std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 2 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printMatrix(matrix2, length2, width2);
																std::cout << "\t\t\t\t~~~~~~~~> Multiple Matrix 1 to Matrix 2 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																int** mul_matrix{ nullptr };
																bool result = multiple2Matrices(matrix1, matrix2, mul_matrix, length1, width1, length2, width2);
																if (!result) {
																	std::cout << "---> Pay attetion: Multipling 2 Matrices only works when your length of first matrix = your width of second matrix, try again!!";
																	std::cout << std::endl << std::endl;
																}
																else {
																	printMatrix(mul_matrix, length2, width1);
																}
																deleteMatrix(mul_matrix, length2, width1);
																changeColor(7);
																system("pause");
															}
															else if (counter5 == 2) {
																changeColor(6);
																std::cout << std::endl << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 1 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printMatrix(matrix1, length1, width1);
																std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix 2 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printMatrix(matrix2, length2, width2);
																std::cout << "\t\t\t\t~~~~~~~~> Multiple Matrix 2 to Matrix 1 <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																int** mul_matrix{ nullptr };
																bool result = multiple2Matrices(matrix2, matrix1, mul_matrix, length2, width2, length1, width1);
																if (!result) {
																	std::cout << "---> Pay attetion: Multipling 2 Matrices only works when your length of first matrix = your width of second matrix, try again!!";
																	std::cout << std::endl << std::endl;
																}
																else {
																	printMatrix(mul_matrix, length1, width2);
																}
																deleteMatrix(mul_matrix, length1, width2);
																changeColor(7);
																system("pause");
															}
															else if (counter5 == 3) {
																break;
															}
															system("cls");
														}
														else if (key_Enter5 == 27) {
															break;
														}

														// Resetting all color of Menu elements at the default color
														set_Color5[0] = 3;
														set_Color5[1] = 3;
														set_Color5[2] = 3;

														// Changing color of element in Menu and making it highlight with different color immediately
														if (counter5 == 1) {
															set_Color5[0] = 2;
														}
														else if (counter5 == 2) {
															set_Color5[1] = 2;
														}
														else if (counter5 == 3) {
															set_Color5[2] = 2;
														}

														// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
														// Just using this function when the code is the same after each iteration
														clearConsole();
													}
													deleteMatrix(matrix1, length1, width1);
													deleteMatrix(matrix2, length2, width2);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Multipling 2 given Matrices <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 10) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output a Submatrix (has a largest total of elements) <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (matrix == nullptr) {
														std::cout << "---> Pay Attention: Please generating matrix before printing/doing something with matrix, please try again !!!";
														std::cout << std::endl << std::endl;
													}
													else {
														int** result{ nullptr }, length_result{}, width_result{};
														std::cout << "\t\t\t\t~~~~~~~~> Output a Matrix <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(matrix, length, width);
														std::cout << "\t\t\t\t~~~~~~~~> Finding a submatrix <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														result = findSubmatrix(matrix, length, width, length_result, width_result);
														std::cout << "\t\t\t\t~~~~~~~~> Output a Submatrix <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printMatrix(result, length_result, width_result);
														deleteMatrix(result, length_result, width_result);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Output a Submatrix (has a largest total of elements) <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 11) {
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
								set_Color3[8] = 4;
								set_Color3[9] = 4;
								set_Color3[10] = 4;

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
								else if (counter3 == 9) {
									set_Color3[8] = 5;
								}
								else if (counter3 == 10) {
									set_Color3[9] = 5;
								}
								else if (counter3 == 11) {
									set_Color3[10] = 5;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
							deleteMatrix(matrix, length, width);
						}
						else if (counter2 == 4) {
							int counter3{ 1 }, set_Color3[5]{ 5, 4, 4, 4, 4 }, key_Enter3;
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t1. Sequential Search (Linear Search)";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t2. Sequential Search (using flag) (Sentinel Linear Search)";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t3. Binary Search";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t4. Binary Search (using recursion)";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t5. Exit";
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Sequential Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int key, position_ValidValue, * array{ nullptr }, size_array{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													inputArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Finding position of valid value in an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													std::cout << "\t\t========= Input a valid value to search =========" << std::endl;
													std::cout << "\t+ Please enter a value: ";
													std::cin >> key;
													std::cout << std::endl << std::endl;
													position_ValidValue = LinearSearch(array, size_array, key);
													if (position_ValidValue == -1) {
														std::cout << "---> Pay attention: The value has been entered which does not appear in an given array, so try again with another value!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "--> The valid value has been entered is in position: " << position_ValidValue << std::endl;
														std::cout << std::endl << std::endl;
													}
													deleteArray(array);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Sequential Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Sentinel Linear Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int key, position_ValidValue, * array{ nullptr }, size_array{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													inputArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Finding position of valid value in an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													std::cout << "\t\t========= Input a valid value to search =========" << std::endl;
													std::cout << "\t+ Please enter a value: ";
													std::cin >> key;
													std::cout << std::endl << std::endl;
													position_ValidValue = SentinelLinearSearch(array, size_array, key);
													if (position_ValidValue == -1) {
														std::cout << "--> Pay attention: The value has been entered which does not appear in an given array, so try again with another value!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "--> The value has been entered is in position: " << position_ValidValue << std::endl;
														std::cout << std::endl << std::endl;
													}
													deleteArray(array);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Sentinel Linear Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Binary Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int key, position_ValidValue, * array{ nullptr }, size_array{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													inputArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Finding position of valid value in an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													std::cout << "\t\t========= Input a valid value to search =========" << std::endl;
													std::cout << "\t+ Please enter a value: ";
													std::cin >> key;
													std::cout << std::endl << std::endl;
													position_ValidValue = BinarySearch(array, size_array, key);
													if (position_ValidValue == -1) {
														std::cout << "--> Pay attention: The value has been entered which does not appear in an given array, so try again with another value!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "--> The value has been entered is in position: " << position_ValidValue << std::endl;
														std::cout << std::endl << std::endl;
													}
													deleteArray(array);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Binary Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Recursive Binary Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													int key, position_ValidValue, * array{ nullptr }, size_array{};
													std::cout << "\t\t\t\t~~~~~~~~> Input an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													inputArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Output an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													printArray(array, size_array);
													std::cout << "\t\t\t\t~~~~~~~~> Finding position of valid value in an Array <~~~~~~~~" << std::endl;
													std::cout << std::endl;
													std::cout << "\t\t========= Input a valid value to search =========" << std::endl;
													std::cout << "\t+ Please enter a value: ";
													std::cin >> key;
													std::cout << std::endl << std::endl;
													std::cout << "\t\t========= Finding =========" << std::endl;
													position_ValidValue = RecursiveBinarySearch(array, 0, size_array - 1, key);
													if (position_ValidValue == -1) {
														std::cout << "--> Pay attention: The value has been entered which does not appear in an given array, so try again with another value!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "--> The value has been entered is in position: " << position_ValidValue << std::endl;
														std::cout << std::endl << std::endl;
													}
													deleteArray(array);
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Recursive Binary Search Implementation <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
			else if (counter == 2) {
				int counter2{ 1 }, set_Color2[11]{ 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t1. Calculate the sum of S = 1 + 2 + 3 + ... + n";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t2. Calculate the factorial n! = 1 * 2 * 3 * ... * n";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t3. Calculate x^n";
					changeColor(set_Color2[3]);
					std::cout << "\n\t\t\t\t4. Count the number of digits of a given integer";
					changeColor(set_Color2[4]);
					std::cout << "\n\t\t\t\t5. Verify if every digits of given integer are even";
					changeColor(set_Color2[5]);
					std::cout << "\n\t\t\t\t6. Count the number of common divisor of 2 given integers";
					changeColor(set_Color2[6]);
					std::cout << "\n\t\t\t\t7. Calculate the Greatest common divisor and Least common multiple of 2 given integers";
					changeColor(set_Color2[7]);
					std::cout << "\n\t\t\t\t8. Calculate the reverse value of a given integer";
					changeColor(set_Color2[8]);
					std::cout << "\n\t\t\t\t9. Calculate the i^th Fibonacci number";
					changeColor(set_Color2[9]);
					std::cout << "\n\t\t\t\t10. Given 4 single distinguish characters. Print out all possible permutation";
					changeColor(set_Color2[10]);
					std::cout << "\n\t\t\t\t11. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 11)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 10)) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculate the sum of 1 to n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n, result;
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										do
										{
											std::cout << "\t+ Please enter number of elements: ";
											std::cin >> n;
											if (n <= 0) {
												std::cout << "---> Pay Attention: The number of elements is used for sum, need > 0, try again!!" << std::endl;
												std::cout << std::endl;
											}
										} while (n <= 0);
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t--------> Calculating <--------" << std::endl;
										std::cout << std::endl;
										std::cout << "---> Sum of 1 to n = ";
										result = calculate_Sum_N_Elements(cast_n);
										std::cout << " = " << result << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Calculating of summing from 1 to n is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculate the sum of 1 to n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculate the factorial of 1 to n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n, result;
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										do
										{
											std::cout << "\t+ Please enter number of elements: ";
											std::cin >> n;
											if (n <= 0) {
												std::cout << "---> Pay Attention: The number of elements is used for factorial, need > 0, try again!!" << std::endl;
												std::cout << std::endl;
											}
										} while (n <= 0);
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Calculating <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "---> Factorial of 1 to n = ";
										result = calculate_Factorial_N_Elements(cast_n);
										std::cout << " = " << result << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Calculating of factorial from 1 to n is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculate the factorial of 1 to n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating x^n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double x, n;
										int cast_n;
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter x: ";
										std::cin >> x;
										std::cout << "\t+ Please enter n: ";
										std::cin >> n;
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Calculating <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										if (x == 0 && n == 0) {
											std::cout << "---> Pay Attention: x and n elements are used for calculating, need != 0, try again!!" << std::endl;
											std::cout << std::endl;
										}
										else {
											if (n > 0) {
												std::cout << "---> x^n = (" << x << ")" << "^(" << n << ")" << " = ";
												double result = calculate_X_Pow_Positive_N(x, cast_n);
												std::cout << " = " << result << std::endl;
												std::cout << std::endl << std::endl;
												std::cout << "---> Calculating of x^n is: Working well!!" << std::endl;
												std::cout << std::endl << std::endl;
											}
											else {
												std::cout << "---> x^n = (" << x << ")" << "^(" << n << ")" << " = ";
												double result = calculate_X_Pow_Negative_N(x, cast_n);
												std::cout << " = " << result << std::endl;
												std::cout << std::endl << std::endl;
												std::cout << "---> Calculating of x^n is: Working well!!" << std::endl;
												std::cout << std::endl << std::endl;
											}
										}
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating x^n <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Count number of digits of given integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n, count{};
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter an integer number: ";
										std::cin >> n;
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "---> Digits count = ";
										count_Digits_Integer(cast_n, count);
										std::cout << count << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Calculating of counting number of digits is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Count number of digits of given integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Verify all digits of integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n;
										bool result;
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter an integer number: ";
										std::cin >> n;
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Verifying <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										result = check_Even_Integer_Numbers(cast_n);
										if (!result) {
											std::cout << "---> One of digits of this integer number is: not even!!" << std::endl;
											std::cout << std::endl << std::endl;
											std::cout << "---> Verifying all even digits is: Working well!!" << std::endl;
											std::cout << std::endl << std::endl;
										}
										else {
											std::cout << "---> All digits of this integer number is: even!!" << std::endl;
											std::cout << std::endl << std::endl;
											std::cout << "---> Verifying all even digits is: Working well!!" << std::endl;
											std::cout << std::endl << std::endl;
										}
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Verify all digits of integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 6) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Count common Divisor <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double a, b;
										int cast_a, cast_b, temp1, temp2, number{ 1 }, count{};
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter an integer number 1: ";
										std::cin >> a;
										cast_a = (int)(a); // if user is input double value --> will convert to integer value
										std::cout << "\t+ Please enter an integer number 2: ";
										std::cin >> b;
										cast_b = (int)(b); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										temp1 = abs(cast_a); // if user is input negative value --> will convert to positive value
										temp2 = abs(cast_b); // if user is input negative value --> will convert to positive value
										std::cout << "---> Common Divisor numbers : ";
										count_Common_Divisor(temp1, temp2, number, count);
										std::cout << std::endl;
										std::cout << "---> Common Divisor count = " << count << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Counting common divisor is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Count common Divisor <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 7) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the greatest common Divisor and Least common multiple <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double a, b;
										int cast_a, cast_b, temp1, temp2, max{}, number{1};
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter an integer number 1: ";
										std::cin >> a;
										cast_a = (int)(a); // if user is input double value --> will convert to integer value
										std::cout << "\t+ Please enter an integer number 2: ";
										std::cin >> b;
										cast_b = (int)(b); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										temp1 = abs(cast_a); // if user is input negative value --> will convert to positive value
										temp2 = abs(cast_b); // if user is input negative value --> will convert to positive value
										std::cout << "\t\t\t\t~~~~~~~~> Finding <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "---> Common Divisor numbers : ";
										greatest_Common_Divisor(temp1, temp2, number, max);
										std::cout << std::endl;
										if (max == 0) {
											std::cout << "---> The greatest common Divisor is = can not calculate !!!" << std::endl;
											std::cout << "---> The Least common multiple is = can not calculate !!!" << std::endl;
										}
										else {
											std::cout << "---> The greatest common Divisor is = " << max << std::endl;
											std::cout << "---> The Least common multiple is = " << ((temp1 * temp2) / max) << std::endl;
										}
										std::cout << std::endl << std::endl;
										std::cout << "---> Finding the greatest common divisor is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Finding the greatest common Divisor and Least common multiple <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 8) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating reverse integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n, result, temp{};
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t+ Please enter an integer number: ";
										std::cin >> n;
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Calculating <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										result = calculate_Reverse_Integer(cast_n, temp);
										std::cout << "---> Result is: " << result << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Calculating the reverse is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating reverse integer number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 9) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating a fibonacci number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										double n;
										int cast_n, result, temp{};
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										do
										{
											std::cout << "\t+ Please enter an integer number: ";
											std::cin >> n;
											if (n <= 0) {
												std::cout << "---> Pay Attention: An integer number is used for calculating, need > 0, try again!!" << std::endl;
												std::cout << std::endl;
											}
										} while (n <= 0);
										cast_n = (int)(n); // if user is input double value --> will convert to integer value
										std::cout << std::endl << std::endl;
										std::cout << "\t\t\t\t~~~~~~~~> Calculating <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										std::cout << "\t\t========= The sequence of fibonacci =========" << std::endl;
										std::cout << "---> The sequence is: ";
										result = calculate_Fibonacci_Number(cast_n, 0, 1);
										std::cout << std::endl << std::endl;
										std::cout << "\t\t========= Result of fibonacci =========" << std::endl;
										std::cout << "---> Result is: " << result << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Calculating fibonacci is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Calculating a fibonacci number <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 10) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Print out all possible permutation of given string <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::string temp;
										std::cout << "\t\t\t\t~~~~~~~~> Loading input data <~~~~~~~~" << std::endl;
										std::cout << std::endl;
										do
										{
											std::cout << "\t+ Please enter a string: ";
											std::cin >> temp;
											if (temp.size() < 0 || temp.size() > 4) {
												std::cout << "---> Pay attetion: The String must have a size = 4, try again!!" << std::endl << std::endl;
											}
										} while (temp.size() < 0 || temp.size() > 4);
										std::cout << std::endl << std::endl;
										std::cout << "\n\t\t\t--------> Printing <--------" << std::endl;
										int n = (int)temp.size();
										permute(temp, 0, n - 1);
										std::cout << std::endl << std::endl;
										std::cout << "---> Printing permutation is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Print out all possible permutation of given string <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
										break;
									}
									system("cls");
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
						else if (counter2 == 11) {
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
					set_Color2[5] = 3;
					set_Color2[6] = 3;
					set_Color2[7] = 3;
					set_Color2[8] = 3;
					set_Color2[9] = 3;
					set_Color2[10] = 3;

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
					else if (counter2 == 6) {
						set_Color2[5] = 2;
					}
					else if (counter2 == 7) {
						set_Color2[6] = 2;
					}
					else if (counter2 == 8) {
						set_Color2[7] = 2;
					}
					else if (counter2 == 9) {
						set_Color2[8] = 2;
					}
					else if (counter2 == 10) {
						set_Color2[9] = 2;
					}
					else if (counter2 == 11) {
						set_Color2[10] = 2;
					}

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 3) {
				int counter2{ 1 }, set_Color2[3]{ 2, 3, 3 }, key_Enter2;
				std::string file_name = "data.txt";
				std::vector<EXAMINEE*> l;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t1. Read the information of one candidate and push to a list of candidates";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t2. Write the total score of candidates to file";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t3. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 3)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 2)) {
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Reading file data.txt <--------" << std::endl;
										std::cout << std::endl << std::endl;
										l = readExamineeList(file_name);
										std::cout << std::endl << std::endl;
										std::cout << "---> Reading file is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Reading file data.txt <--------" << std::endl;
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
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Writing file data.txt to OutputData.txt <--------" << std::endl;
										std::cout << std::endl << std::endl;
										std::string out_file_name = "dataOutput.txt";
										writeTotal(l, out_file_name);
										std::cout << "---> Writing file is: Working well!!" << std::endl;
										std::cout << std::endl << std::endl;
										changeColor(7);
										system("pause");
									}
									else if (counter3 == 2) {
										changeColor(6);
										std::cout << "\n\n\n\t\t\t\t\t\t--------> Writing file data.txt to OutputData.txt <--------" << std::endl;
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

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
				l.clear();
			}
			else if (counter == 4) {
				int counter2{ 1 }, set_Color2[3]{ 2, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t\t1. Singly Linkedlist";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t\t2. Doubly Linkedlist";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t\t3. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 3)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 2)) {
						counter2++;
					}
					else if (key_Enter2 == 13) {
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0) 
						if (counter2 == 1) {
							int counter3{ 1 }, set_Color3[19]{ 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 }, key_Enter3;
							NODE* p{ nullptr }; // Using this pointer to point to somewhere needed
							LIST* l{ nullptr }; // Initializing a list of Linkedlist
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t1. Initialize a NODE from a given integer";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t2. Initialize a List from a given NODE";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t3. Print all elements of a given List";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t4. Count the number of elements List";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t5. Create a new List by reverse a given List:";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t\t6. Insert an integer to the head of a given List";
								changeColor(set_Color3[6]);
								std::cout << "\n\t\t\t\t\t7. Insert an integer to the tail of a given List";
								changeColor(set_Color3[7]);
								std::cout << "\n\t\t\t\t\t8. Insert an integer at a position of a given List";
								changeColor(set_Color3[8]);
								std::cout << "\n\t\t\t\t\t9. Insert an integer before a value of a given List";
								changeColor(set_Color3[9]);
								std::cout << "\n\t\t\t\t\t10. Insert an integer after a value of a given List";
								changeColor(set_Color3[10]);
								std::cout << "\n\t\t\t\t\t11. Remove the first NODE of a given List";
								changeColor(set_Color3[11]);
								std::cout << "\n\t\t\t\t\t12. Remove the last NODE of a given List:";
								changeColor(set_Color3[12]);
								std::cout << "\n\t\t\t\t\t13. Remove all NODE from a given List";
								changeColor(set_Color3[13]);
								std::cout << "\n\t\t\t\t\t14. Remove an integer before a value of a given List";
								changeColor(set_Color3[14]);
								std::cout << "\n\t\t\t\t\t15. Remove an integer after a value of a given List";
								changeColor(set_Color3[15]);
								std::cout << "\n\t\t\t\t\t16. Remove an integer at a position of a given List";
								changeColor(set_Color3[16]);
								std::cout << "\n\t\t\t\t\t17. Remove all duplicates from a given List";
								changeColor(set_Color3[17]);
								std::cout << "\n\t\t\t\t\t18. Remove all key value from a given List";
								changeColor(set_Color3[18]);
								std::cout << "\n\t\t\t\t\t19. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 19)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 18)) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a NODE <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (p == nullptr) {
														std::cout << "---> Pay Attention: The node is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a node for a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = createNode(cast_int_data);
													}
													else {
														std::cout << "---> Pay Attention: The node is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														if (l == nullptr) {
															NODE* temp = p;
															p = nullptr;
															delete temp;
															temp = nullptr;
															std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															double data;
															std::cout << "\t+ Please enter an integer number: ";
															std::cin >> data;
															int cast_int_data = (int)data;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Creating a node for a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															p = createNode(cast_int_data);
														}
														else {
															bool flag = false;
															for (NODE* k = l->p_head; k != nullptr; k = k->p_next) {
																if (k == p) {
																	flag = true;
																	break;
																}
															}
															if (flag) {
																p = nullptr;
																delete p;
																std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node for a list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = createNode(cast_int_data);
															}
															else {
																NODE* temp = p;
																p = nullptr;
																delete temp;
																temp = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node for a list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = createNode(cast_int_data);
															}
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a NODE <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a List <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a list of Linkedlist <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															l = createList(p);
														}
													}
													else {
														std::cout << "---> Pay Attention: The list is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a list of Linkedlist <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															if (l->p_head == p) { // check if initialize node p is in first node of list
																if (l->p_head->p_next == nullptr) { // check if this list has 1 node
																	// just unlock from head and tail, do not delete initialize node p
																	l->p_head = nullptr;
																	l->p_tail = nullptr;
																}
																else { // check if this list has more than 1 node
																	// just unlock from head and tail, do not delete initialize node p
																	LIST* temp = l;
																	l->p_head = nullptr;
																	l->p_tail = nullptr;
																	temp->p_head = nullptr;
																	temp->p_head = p->p_next;
																	p->p_next = nullptr;
																	delete_CompleteList(temp);
																}
															}
															else { // check if initialize node p is not in first node of list
																// just unlock from head and tail, do not delete initialize node p
																LIST* temp = l;
																l->p_head = nullptr;
																l->p_tail = nullptr;
																for (NODE* k = temp->p_head; k != nullptr; k = k->p_next) {
																	if (k->p_next == p) {
																		k->p_next = nullptr;
																		k->p_next = p->p_next;
																		p->p_next = nullptr;
																		break;
																	}
																}
																delete_CompleteList(temp);
															}
															l = nullptr;
															delete l;
															l = createList(p);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a List <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Printing a list of Linkedlist <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														printList(l);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Printing a list of Linkedlist <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Counting nodes in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "---> Number of nodes is: " << countElements(l) << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "---> Counting nodes is: Working well!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Counting nodes in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Creating a reverse list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Reversing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														LIST* result = reverseList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Printing a reverse list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(result);
														delete_CompleteList(result);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Creating a reverse list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the head of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Adding Head <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addHead(l, cast_int_data);
														if (result) {
															std::cout << "---> Inserting a node to the head of list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
														else {
															std::cout << "---> Inserting a node to the head of list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the head of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the tail of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Adding Tail <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addTail(l, cast_int_data);
														if (result) {
															std::cout << "---> Inserting a node to the tail of list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
														else {
															std::cout << "---> Inserting a node to the tail of list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the tail of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the given position of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, pos;
														// Counting the number of nodes in list
														int count_nodes = countElements(l);
														std::cout << "\t+ Please enter position [" << 1 << ";" << count_nodes + 1 << "]: ";
														std::cin >> pos;
														std::cout << "\t+ Please enter data: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_pos = (int)pos;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Add Position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addPos(l, cast_int_data, cast_int_pos);
														if (result) {
															std::cout << "---> Inserting a node to the position of list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
														else {
															std::cout << "---> Inserting a node to the position of list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node to the given position of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 9) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node before a value exist in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input a choosing value <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														std::cout << "\t+ Please enter data to add: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														bool result = addBefore(l, cast_int_data, cast_int_value);
														if (result) {
															std::cout << "---> Inserting a node before a value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
														else {
															std::cout << "---> Inserting a node before a value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node before a value exist in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 10) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node after a value exist in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input a choosing value <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														std::cout << "\t+ Please enter data to add: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														bool result = addAfter(l, cast_int_data, cast_int_value);
														if (result) {
															std::cout << "---> Inserting a node after a value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
														else {
															std::cout << "---> Inserting a node after a value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a node after a value exist in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 11) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node in the head of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeHead(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node in the head of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 12) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node in the last of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeTail(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node in the last of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 13) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all nodes of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeAll(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all nodes of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 14) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node before a value of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a node before <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removeBefore(l, cast_int_value);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node before a value of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 15) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node after a value of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a node after <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removeAfter(l, cast_int_value);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node after a value of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 16) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node at a position of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a node at a position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double pos;
														int count_nodes = countElements(l);
														std::cout << "\t+ Please enter position [" << 1 << ";" << count_nodes << "]" << ": ";
														std::cin >> pos;
														int cast_int_pos = (int)pos;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removePos(l, cast_int_pos);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a node at a position of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 17) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all duplicate nodes of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing all duplicate nodes <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeDuplicate(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all duplicate nodes of list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 18) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all nodes same as given key in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing all nodes <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														bool result = removeElement(l, cast_int_value);
														if (result) {
															std::cout << "---> Removing all nodes(values) same as key value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															if (l == nullptr) {
																std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
																std::cout << std::endl << std::endl;
															}
															else {
																std::cout << "\t\t\t\t~~~~~~~~> Output a list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printList(l);
															}
														}
														else {
															std::cout << "---> Removing all nodes(values) same as key value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all nodes same as given key in list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 19) {
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
								set_Color3[8] = 4;
								set_Color3[9] = 4;
								set_Color3[10] = 4;
								set_Color3[11] = 4;
								set_Color3[12] = 4;
								set_Color3[13] = 4;
								set_Color3[14] = 4;
								set_Color3[15] = 4;
								set_Color3[16] = 4;
								set_Color3[17] = 4;
								set_Color3[18] = 4;

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
								else if (counter3 == 9) {
									set_Color3[8] = 5;
								}
								else if (counter3 == 10) {
									set_Color3[9] = 5;
								}
								else if (counter3 == 11) {
									set_Color3[10] = 5;
								}
								else if (counter3 == 12) {
									set_Color3[11] = 5;
								}
								else if (counter3 == 13) {
									set_Color3[12] = 5;
								}
								else if (counter3 == 14) {
									set_Color3[13] = 5;
								}
								else if (counter3 == 15) {
									set_Color3[14] = 5;
								}
								else if (counter3 == 16) {
									set_Color3[15] = 5;
								}
								else if (counter3 == 17) {
									set_Color3[16] = 5;
								}
								else if (counter3 == 18) {
									set_Color3[17] = 5;
								}
								else if (counter3 == 19) {
									set_Color3[18] = 5;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
							delete_Complete_Node(l, p);
							delete_CompleteList(l);
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[19]{ 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 }, key_Enter3;
							D_NODE* p{ nullptr }; // Using this pointer to point to somewhere needed
							D_LIST* l{ nullptr }; // Initializing a list of doubly Linkedlist
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t1. Initialize a doubly NODE from a given integer";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t2. Initialize a doubly List from a given NODE";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t3. Print all elements of a given doubly List";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t4. Count the number of elements doubly List";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t5. Create a new doubly List by reverse a given doubly List:";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t\t6. Insert an integer to the head of a given doubly List";
								changeColor(set_Color3[6]);
								std::cout << "\n\t\t\t\t\t7. Insert an integer to the tail of a given doubly List";
								changeColor(set_Color3[7]);
								std::cout << "\n\t\t\t\t\t8. Insert an integer at a position of a given doubly List";
								changeColor(set_Color3[8]);
								std::cout << "\n\t\t\t\t\t9. Insert an integer before a value of a given doubly List";
								changeColor(set_Color3[9]);
								std::cout << "\n\t\t\t\t\t10. Insert an integer after a value of a given doubly List";
								changeColor(set_Color3[10]);
								std::cout << "\n\t\t\t\t\t11. Remove the first doubly NODE of a given doubly List";
								changeColor(set_Color3[11]);
								std::cout << "\n\t\t\t\t\t12. Remove the last doubly NODE of a given doubly List:";
								changeColor(set_Color3[12]);
								std::cout << "\n\t\t\t\t\t13. Remove all doubly NODE from a given doubly List";
								changeColor(set_Color3[13]);
								std::cout << "\n\t\t\t\t\t14. Remove an integer before a value of a given doubly List";
								changeColor(set_Color3[14]);
								std::cout << "\n\t\t\t\t\t15. Remove an integer after a value of a given doubly List";
								changeColor(set_Color3[15]);
								std::cout << "\n\t\t\t\t\t16. Remove an integer at a position of a given doubly List";
								changeColor(set_Color3[16]);
								std::cout << "\n\t\t\t\t\t17. Remove all duplicates from a given doubly List";
								changeColor(set_Color3[17]);
								std::cout << "\n\t\t\t\t\t18. Remove all key value from a given doubly List";
								changeColor(set_Color3[18]);
								std::cout << "\n\t\t\t\t\t19. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 19)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 18)) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a doubly NODE <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (p == nullptr) {
														std::cout << "---> Pay Attention: The doubly node is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly node for a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = create_DNode(cast_int_data);
													}
													else {
														std::cout << "---> Pay Attention: The doubly node is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														if (l == nullptr) {
															D_NODE* temp = p;
															p = nullptr;
															delete temp;
															temp = nullptr;
															std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															double data;
															std::cout << "\t+ Please enter an integer number: ";
															std::cin >> data;
															int cast_int_data = (int)data;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly node for a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															p = create_DNode(cast_int_data);
														}
														else {
															bool flag = false;
															for (D_NODE* k = l->pHead; k != nullptr; k = k->pNext) {
																if (k == p) {
																	flag = true;
																	break;
																}
															}
															if (flag) {
																p = nullptr;
																delete p;
																std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly node for a doubly list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = create_DNode(cast_int_data);
															}
															else {
																D_NODE* temp = p;
																p = nullptr;
																delete temp;
																temp = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly node for a doubly list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = create_DNode(cast_int_data);
															}
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a doubly NODE <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a doubly List <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly list of doubly Linkedlist <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The doubly node is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															l = create_DList(p);
														}
													}
													else {
														std::cout << "---> Pay Attention: The doubly list is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a doubly list of doubly Linkedlist <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The doubly node is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															if (l->pHead == p) { // check if initialize node p is in first node of list
																if (l->pHead->pNext == nullptr) { // check if this list has 1 node
																	// just unlock from head and tail, do not delete initialize node p
																	l->pHead = nullptr;
																	l->pTail = nullptr;
																}
																else { // check if this list has more than 1 node
																	// just unlock from head and tail, do not delete initialize node p
																	D_LIST* temp = l;
																	l->pHead = nullptr;
																	l->pTail = nullptr;
																	temp->pHead = nullptr;
																	temp->pHead = p->pNext;
																	p->pNext = nullptr;
																	delete_CompleteDList(temp);
																}
															}
															else { // check if initialize node p is not in first node of list
																// just unlock from head and tail, do not delete initialize node p
																D_LIST* temp = l;
																l->pHead = nullptr;
																l->pTail = nullptr;
																for (D_NODE* k = temp->pHead; k != nullptr; k = k->pNext) {
																	if (k->pNext == p) {
																		k->pNext = nullptr;
																		k->pNext = p->pNext;
																		p->pNext->pPrev = k;
																		p->pNext = nullptr;
																		p->pPrev = nullptr;
																		break;
																	}
																}
																delete_CompleteDList(temp);
															}
															l = nullptr;
															delete l;
															l = create_DList(p);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a doubly List <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Printing a doubly list of doubly Linkedlist <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														print_DList(l);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Printing a doubly list of doubly Linkedlist <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Counting doubly nodes in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "---> Number of doubly nodes is: " << count_DElements(l) << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "---> Counting doubly nodes is: Working well!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Counting doubly nodes in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Creating a reverse doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Reversing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														D_LIST* result = reverse_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Printing a reverse doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(result);
														delete_CompleteDList(result);
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Creating a reverse doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the head of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Adding Head <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addHead_DList(l, cast_int_data);
														if (result) {
															std::cout << "---> Inserting a doubly node to the head of doubly list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
														else {
															std::cout << "---> Inserting a doubly node to the head of doubly list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the head of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the tail of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Adding Tail <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addTail_DList(l, cast_int_data);
														if (result) {
															std::cout << "---> Inserting a doubly node to the tail of doubly list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
														else {
															std::cout << "---> Inserting a doubly node to the tail of doubly list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the tail of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the given position of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, pos;
														// Counting the number of doubly nodes in doubly list
														int count_nodes = count_DElements(l);
														std::cout << "\t+ Please enter position [" << 1 << ";" << count_nodes + 1 << "]: ";
														std::cin >> pos;
														std::cout << "\t+ Please enter data: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_pos = (int)pos;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Add Position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = addPos_DList(l, cast_int_data, cast_int_pos);
														if (result) {
															std::cout << "---> Inserting a doubly node to the position of doubly list is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
														else {
															std::cout << "---> Inserting a doubly node to the position of doubly list is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node to the given position of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 9) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node before a value exist in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input a choosing value <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														std::cout << "\t+ Please enter data to add: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														bool result = addBefore_DList(l, cast_int_data, cast_int_value);
														if (result) {
															std::cout << "---> Inserting a doubly node before a value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
														else {
															std::cout << "---> Inserting a doubly node before a value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node before a value exist in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 10) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node after a value exist in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Input a choosing value <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data, value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														std::cout << "\t+ Please enter data to add: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														bool result = addAfter_DList(l, cast_int_data, cast_int_value);
														if (result) {
															std::cout << "---> Inserting a doubly node after a value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list after adding <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
														else {
															std::cout << "---> Inserting a doubly node after a value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Inserting a doubly node after a value exist in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 11) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node in the head of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeHead_DList(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node in the head of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 12) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node in the last of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeTail_DList(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node in the last of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 13) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly nodes of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeAll_DList(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly nodes of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 14) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node before a value of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a doubly node before <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removeBefore_DList(l, cast_int_value);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node before a value of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 15) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node after a value of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a doubly node after <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a choosing value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removeAfter_DList(l, cast_int_value);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node after a value of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 16) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node at a position of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing a doubly node at a position <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double pos;
														int count_nodes = count_DElements(l);
														std::cout << "\t+ Please enter position [" << 1 << ";" << count_nodes << "]" << ": ";
														std::cin >> pos;
														int cast_int_pos = (int)pos;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														removePos_DList(l, cast_int_pos);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing a doubly node at a position of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 17) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly duplicate nodes of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing all doubly duplicate nodes <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														removeDuplicate_DList(l);
														if (l == nullptr) {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															print_DList(l);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly duplicate nodes of doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 18) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly nodes same as given key in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (l == nullptr) {
														std::cout << "---> Pay Attention: The doubly list is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														print_DList(l);
														std::cout << "\t\t\t\t~~~~~~~~> Removing all doubly nodes <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														std::cout << "\t\t======== Input a choosing value ========" << std::endl;
														double value;
														std::cout << "\t+ Please enter a value: ";
														std::cin >> value;
														int cast_int_value = (int)value;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t======== Removing ========" << std::endl;
														p = nullptr;
														bool result = removeElement_DList(l, cast_int_value);
														if (result) {
															std::cout << "---> Removing all doubly nodes(values) same as key value is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															if (l == nullptr) {
																std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																std::cout << "---> Pay Attention: The doubly list is empty until now!!!" << std::endl;
																std::cout << std::endl << std::endl;
															}
															else {
																std::cout << "\t\t\t\t~~~~~~~~> Output a doubly list <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																print_DList(l);
															}
														}
														else {
															std::cout << "---> Removing all doubly nodes(values) same as key value is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Removing all doubly nodes same as given key in doubly list <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
									else if (counter3 == 19) {
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
								set_Color3[8] = 4;
								set_Color3[9] = 4;
								set_Color3[10] = 4;
								set_Color3[11] = 4;
								set_Color3[12] = 4;
								set_Color3[13] = 4;
								set_Color3[14] = 4;
								set_Color3[15] = 4;
								set_Color3[16] = 4;
								set_Color3[17] = 4;
								set_Color3[18] = 4;

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
								else if (counter3 == 9) {
									set_Color3[8] = 5;
								}
								else if (counter3 == 10) {
									set_Color3[9] = 5;
								}
								else if (counter3 == 11) {
									set_Color3[10] = 5;
								}
								else if (counter3 == 12) {
									set_Color3[11] = 5;
								}
								else if (counter3 == 13) {
									set_Color3[12] = 5;
								}
								else if (counter3 == 14) {
									set_Color3[13] = 5;
								}
								else if (counter3 == 15) {
									set_Color3[14] = 5;
								}
								else if (counter3 == 16) {
									set_Color3[15] = 5;
								}
								else if (counter3 == 17) {
									set_Color3[16] = 5;
								}
								else if (counter3 == 18) {
									set_Color3[17] = 5;
								}
								else if (counter3 == 19) {
									set_Color3[18] = 5;
								}

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
							delete_Complete_DNode(l, p);
							delete_CompleteDList(l);
						}
						else if (counter2 == 3) {
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

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 5) {
				int counter2{ 1 }, set_Color2[3]{ 2, 3, 3 }, key_Enter2;
				while (true) {
					// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
					changeColor(set_Color2[0]);
					std::cout << "\n\t\t\t\t\t\t\t1. Stack";
					changeColor(set_Color2[1]);
					std::cout << "\n\t\t\t\t\t\t\t2. Queue";
					changeColor(set_Color2[2]);
					std::cout << "\n\t\t\t\t\t\t\t3. Exit";
					changeColor(1);
					std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
					changeColor(7);
					// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

					// Checking some key board elements received from user
					key_Enter2 = _getch();
					if (key_Enter2 == 72 && (counter2 >= 2 && counter2 <= 3)) {
						counter2--;
					}
					else if (key_Enter2 == 80 && (counter2 >= 1 && counter2 <= 2)) {
						counter2++;
					}
					else if (key_Enter2 == 13) {
						system("cls"); // Removing the code before, means removing the menu before in the code above and turn the cursor at the position (0, 0) 
						if (counter2 == 1) {
							int counter3{ 1 }, set_Color3[6]{ 5, 4, 4, 4, 4, 4 }, key_Enter3;
							NODE_STACK* p{ nullptr };
							STACK* s{ nullptr };
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Initialize a node";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. Initialize a stack from a given key";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t\t3. Push a key into a given stack";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t\t4. Pop an element out of a given stack, return the key’s value";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t\t5. Count the number of elements of a given stack";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t\t\t6. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 6)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 5)) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a node of Stack <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (p == nullptr) {
														std::cout << "---> Pay Attention: The node of stack is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = initializeNodeStack(cast_int_data);
													}
													else {
														std::cout << "---> Pay Attention: The node of stack is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														if (s == nullptr) {
															NODE_STACK* temp = p;
															p = nullptr;
															delete temp;
															temp = nullptr;
															std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															double data;
															std::cout << "\t+ Please enter an integer number: ";
															std::cin >> data;
															int cast_int_data = (int)data;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															p = initializeNodeStack(cast_int_data);
														}
														else {
															bool flag = false;
															for (NODE_STACK* k = s->pHead; k != nullptr; k = k->pNext) {
																if (k == p) {
																	flag = true;
																	break;
																}
															}
															if (flag) {
																p = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = initializeNodeStack(cast_int_data);
															}
															else {
																NODE_STACK* temp = p;
																p = nullptr;
																delete temp;
																temp = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = initializeNodeStack(cast_int_data);
															}
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a node of Stack <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a stack <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (s == nullptr) {
														std::cout << "---> Pay Attention: The stack is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node of stack is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															s = initializeStack(p);
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printStack(s);
														}
													}
													else {
														std::cout << "---> Pay Attention: The stack is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node of stack is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															if (s->pHead == p) {
																if (s->pHead->pNext == nullptr) {
																	s->pHead = nullptr;
																}
																else {
																	STACK* temp = s;
																	s->pHead = nullptr;
																	temp->pHead = nullptr;
																	temp->pHead = p->pNext;
																	p->pNext = nullptr;
																	delete_CompleteStack(temp);
																}
															}
															else {
																STACK* temp = s;
																s->pHead = nullptr;
																for (NODE_STACK* k = temp->pHead; k != nullptr; k = k->pNext) {
																	if (k->pNext == p) {
																		k->pNext = nullptr;
																		k->pNext = p->pNext;
																		break;
																	}
																}
																p->pNext = nullptr;
																delete_CompleteStack(temp);
															}
															s = nullptr;
															s = initializeStack(p);
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printStack(s);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a stack <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Push a key <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (s == nullptr) {
														std::cout << "---> Pay Attention: The stack is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printStack(s);
														std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Initializing Node Stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														NODE_STACK* q = initializeNodeStack(cast_int_data);
														std::cout << "\t\t\t\t~~~~~~~~> Pushing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = pushing_NodeStack(s, q);
														delete_Complete_NodeStack(s, q);
														if (result) {
															std::cout << "---> Pushing a key to the stack is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack after pushing <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printStack(s);
														}
														else {
															std::cout << "---> Pushing a key to the stack is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Push a key <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Pop an element <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (s == nullptr) {
														std::cout << "---> Pay Attention: The stack is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printStack(s);
														std::cout << "\t\t\t\t~~~~~~~~> Popping <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														int result = popping_NodeStack(s);
														if (result != INT16_MIN) {
															std::cout << "---> Popping a key out of the stack is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "---> The key's value after popping is: " << result << std::endl;
															std::cout << std::endl << std::endl;
															if (s == nullptr) {
																std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack after popping <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																std::cout << "---> Pay Attention: The stack is empty until now!!!" << std::endl;
																std::cout << std::endl << std::endl;
															}
															else {
																std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack after popping <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printStack(s);
															}
														}
														else {
															std::cout << "---> Popping a key out of the stack is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Pop an element <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Count the number of elements <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (s == nullptr) {
														std::cout << "---> Pay Attention: The stack is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a stack <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printStack(s);
														std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int result = countElements_Stack(s);
														std::cout << "---> Counting the number of elements is: Working well!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "---> The counting number is: " << result << std::endl;
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Count the number of elements <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
							delete_Complete_NodeStack(s, p);
							delete_CompleteStack(s);
						}
						else if (counter2 == 2) {
							int counter3{ 1 }, set_Color3[6]{ 5, 4, 4, 4, 4, 4 }, key_Enter3;
							NODE_QUEUE* p{ nullptr };
							QUEUE* q{ nullptr };
							while (true) {
								// ----------------------------------------------------- Beginning of Menu -----------------------------------------------------
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- Menu -------------------------------------" << std::endl;
								changeColor(set_Color3[0]);
								std::cout << "\n\t\t\t\t\t\t1. Initialize a node";
								changeColor(set_Color3[1]);
								std::cout << "\n\t\t\t\t\t\t2. Initialize a queue from a given key";
								changeColor(set_Color3[2]);
								std::cout << "\n\t\t\t\t\t\t3. Push a key into a given queue";
								changeColor(set_Color3[3]);
								std::cout << "\n\t\t\t\t\t\t4. Pop an element out of a given queue, return the key’s value";
								changeColor(set_Color3[4]);
								std::cout << "\n\t\t\t\t\t\t5. Count the number of elements of a given queue";
								changeColor(set_Color3[5]);
								std::cout << "\n\t\t\t\t\t\t6. Exit";
								changeColor(1);
								std::cout << "\n\t\t\t------------------------------------- End  -------------------------------------" << std::endl;
								changeColor(7);
								// ----------------------------------------------------- The Ending of Menu -----------------------------------------------------

								// Checking some key board elements received from user
								key_Enter3 = _getch();
								if (key_Enter3 == 72 && (counter3 >= 2 && counter3 <= 6)) {
									counter3--;
								}
								else if (key_Enter3 == 80 && (counter3 >= 1 && counter3 <= 5)) {
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a node of Queue <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (p == nullptr) {
														std::cout << "---> Pay Attention: The node of queue is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = initializeNodeQueue(cast_int_data);
													}
													else {
														std::cout << "---> Pay Attention: The node of queue is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														if (q == nullptr) {
															NODE_QUEUE* temp = p;
															p = nullptr;
															delete temp;
															temp = nullptr;
															std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															double data;
															std::cout << "\t+ Please enter an integer number: ";
															std::cin >> data;
															int cast_int_data = (int)data;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															p = initializeNodeQueue(cast_int_data);
														}
														else {
															bool flag = false;
															for (NODE_QUEUE* k = q->pHead; k != nullptr; k = k->pNext) {
																if (k == p) {
																	flag = true;
																	break;
																}
															}
															if (flag) {
																p = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = initializeNodeQueue(cast_int_data);
															}
															else {
																NODE_QUEUE* temp = p;
																p = nullptr;
																delete temp;
																temp = nullptr;
																std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																double data;
																std::cout << "\t+ Please enter an integer number: ";
																std::cin >> data;
																int cast_int_data = (int)data;
																std::cout << std::endl << std::endl;
																std::cout << "\t\t\t\t~~~~~~~~> Creating a node <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																p = initializeNodeQueue(cast_int_data);
															}
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a node of Queue <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a queue <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (q == nullptr) {
														std::cout << "---> Pay Attention: The queue is not intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node of queue is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															q = initializeQueue(p);
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printQueue(q);
														}
													}
													else {
														std::cout << "---> Pay Attention: The queue is intialized until now !!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Creating a queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														if (p == nullptr) {
															std::cout << "---> Pay Attention: The node of queue is not intialized until now, try again !!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
														else {
															if (q->pHead == p) {
																if (q->pHead->pNext == nullptr) {
																	q->pHead = nullptr;
																}
																else {
																	QUEUE* temp = q;
																	q->pHead = nullptr;
																	temp->pHead = nullptr;
																	temp->pHead = p->pNext;
																	p->pNext = nullptr;
																	delete_CompleteQueue(temp);
																}
															}
															else {
																QUEUE* temp = q;
																q->pHead = nullptr;
																for (NODE_QUEUE* k = temp->pHead; k != nullptr; k = k->pNext) {
																	if (k->pNext == p) {
																		k->pNext = nullptr;
																		k->pNext = p->pNext;
																		break;
																	}
																}
																p->pNext = nullptr;
																delete_CompleteQueue(temp);
															}
															q = nullptr;
															q = initializeQueue(p);
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printQueue(q);
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Initialize a queue <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Push a key <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (q == nullptr) {
														std::cout << "---> Pay Attention: The queue is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printQueue(q);
														std::cout << "\t\t\t\t~~~~~~~~> Inputting an integer Number <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														double data;
														std::cout << "\t+ Please enter an integer number: ";
														std::cin >> data;
														int cast_int_data = (int)data;
														std::cout << std::endl << std::endl;
														std::cout << "\t\t\t\t~~~~~~~~> Initializing Node Queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														NODE_QUEUE* k = initializeNodeQueue(cast_int_data);
														std::cout << "\t\t\t\t~~~~~~~~> Pushing <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														bool result = pushing_NodeQueue(q, k);
														delete_Complete_NodeQueue(q, k);
														if (result) {
															std::cout << "---> Pushing a key to the queue is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue after pushing <~~~~~~~~" << std::endl;
															std::cout << std::endl;
															printQueue(q);
														}
														else {
															std::cout << "---> Pushing a key to the queue is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Push a key <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Pop an element <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (q == nullptr) {
														std::cout << "---> Pay Attention: The queue is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printQueue(q);
														std::cout << "\t\t\t\t~~~~~~~~> Popping <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														p = nullptr;
														int result = popping_NodeQueue(q);
														if (result != INT16_MIN) {
															std::cout << "---> Popping a key out of the queue is: Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
															std::cout << "---> The key's value after popping is: " << result << std::endl;
															std::cout << std::endl << std::endl;
															if (q == nullptr) {
																std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue after popping <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																std::cout << "---> Pay Attention: The queue is empty until now!!!" << std::endl;
																std::cout << std::endl << std::endl;
															}
															else {
																std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue after popping <~~~~~~~~" << std::endl;
																std::cout << std::endl;
																printQueue(q);
															}
														}
														else {
															std::cout << "---> Popping a key out of the queue is: not Working well!!" << std::endl;
															std::cout << std::endl << std::endl;
														}
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Pop an element <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Count the number of elements <--------" << std::endl;
													std::cout << std::endl << std::endl;
													if (q == nullptr) {
														std::cout << "---> Pay Attention: The queue is not initialized until now, try again !!!" << std::endl;
														std::cout << std::endl << std::endl;
													}
													else {
														std::cout << "\t\t\t\t~~~~~~~~> Outputting a queue <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														printQueue(q);
														std::cout << "\t\t\t\t~~~~~~~~> Counting <~~~~~~~~" << std::endl;
														std::cout << std::endl;
														int result = countElements_Queue(q);
														std::cout << "---> Counting the number of elements is: Working well!!" << std::endl;
														std::cout << std::endl << std::endl;
														std::cout << "---> The counting number is: " << result << std::endl;
														std::cout << std::endl << std::endl;
													}
													changeColor(7);
													system("pause");
												}
												else if (counter4 == 2) {
													changeColor(6);
													std::cout << "\n\n\n\t\t\t\t\t\t--------> Count the number of elements <--------" << std::endl;
													std::cout << std::endl << std::endl;
													std::cout << "---> Pay Attention: The program does not do anything !!!" << std::endl;
													std::cout << std::endl << std::endl;
													changeColor(7);
													system("pause");
													break;
												}
												system("cls");
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

								// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
								// Just using this function when the code is the same after each iteration
								clearConsole();
							}
							delete_Complete_NodeQueue(q, p);
							delete_CompleteQueue(q);
						}
						else if (counter2 == 3) {
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

					// Make the cursor turn back to the position x = 0 and y = 0 --> after running this code, the next loop will overwrite the code before immediately
					// Just using this function when the code is the same after each iteration
					clearConsole();
				}
			}
			else if (counter == 6) {
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
			else if (counter == 7) {
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
		set_Color[4] = 5;
		set_Color[5] = 5;
		set_Color[6] = 5;

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
		else if (counter == 5) {
			set_Color[4] = 12;
		}
		else if (counter == 6) {
			set_Color[5] = 12;
		}
		else if (counter == 7) {
			set_Color[6] = 12;
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