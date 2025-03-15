#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void mainMenu() {
    system("clear");

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

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter a number between 1 and 3." << endl;
        return mainMenu();
    }

    switch (firstChoice)
    {
    case 1:
        cout << "Starting quiz..." << endl;
        question_Generator();
        break;

    case 2:
        cout << "\n==== QUIZ INSTRUCTIONS ====" << endl;
        cout << "1. You will be asked a random question." << endl;
        cout << "2. Type the correct answer (A, B, C, or D) and press Enter." << endl;
        cout << "3. You will receive feedback based on your answer." << endl;
        cout << "4. Try your best to answer and have fun while learning!" << endl;
        cout << "\nTo start the quiz, press 5: ";

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
        cout << "\nThank you for playing! Exiting the quiz... Goodbye!" << endl;
        break;

    default:
        cout << "Invalid choice! Please enter a number between 1 and 3." << endl;
        mainMenu();
    }
}
