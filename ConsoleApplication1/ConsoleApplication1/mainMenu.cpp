#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void mainMenu() {
    system("cls");

    cout << "==============================" << endl;
    cout << "         WELCOME TO THE QUIZ  " << endl;
    cout << "==============================" << endl;
    cout << "Please choose one of the following options:" << endl;
    cout << "1. Start Quiz" << endl;
    cout << "2. View Instructions" << endl;
    cout << "3. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your choice (1, 2, or 3): ";

    int firstChoice;
    cin >> firstChoice;

    switch (firstChoice)
    {
    case 1:
        int quizChoice;
        cout << "Pick a quiz subject." << endl;
		cout << "1. Bulgarian and Literature" << endl;
        cout << "2. Biology" << endl;
        cout << "3. History" << endl;
		cin >> quizChoice;
        if (quizChoice == 1) {
            question_Generator();
        }
        
		else if (quizChoice == 2) {
			question_Generator(); // biology questions when made
		}
		else if (quizChoice == 3) {
			question_Generator(); // history questions when made
		}
		else {
			cout << "Invalid option. Returning to the main menu..." << endl;
			mainMenu();
		}
        break;

    case 2:
        cout << "==== QUIZ INSTRUCTIONS ====" << endl;
        cout << "1. You will be asked a random question." << endl;
        cout << "2. Type the correct answer (A, B, C, or D) and press Enter." << endl;
        cout << "3. You will receive feedback based on your answer." << endl;
        cout << "4. Try your best to answer and have fun while learning!" << endl;
        cout << "To start the quiz, press 5: ";

        int startQuizChoice;
        cin >> startQuizChoice;

        if (startQuizChoice == 5) {
            cout << "Starting quiz..." << endl;
            question_Generator();
        }
        else {
            cout << "Invalid option. Returning to the main menu..." << endl;
            mainMenu();
        }
        break;

    case 3:
        cout << "Thank you for playing! Exiting the quiz... Goodbye!" << endl;
        break;

    default:
        cout << "Invalid choice! Please enter a number between 1 and 3." << endl;
        mainMenu();
    }
}
