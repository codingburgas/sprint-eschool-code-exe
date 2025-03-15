#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void mainMenu() {
    cout << "==============================" << endl;
    cout << "         QUIZ MENU            " << endl;
    cout << "==============================" << endl;
    cout << "1. Start Quiz" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your choice: " << endl;

    int firstChoice;
    cin >> firstChoice;

    switch (firstChoice)
    {
    case 1:
        question_Generator();
        break;

    case 2:
        cout << "==== QUIZ INSTRUCTIONS ====" << endl;
        cout << "1. You will be asked a random question." << endl;
        cout << "2. Type the correct answer (A, B, C, or D) and press Enter." << endl;
        cout << "3. You will receive feedback if your answer is correct." << endl;
        cout << "4. Have fun and learn something new!" << endl;
        cout << "Press 5 to start the quiz." << endl;
        int value1;
        cin >> value1;
        if (value1 == 5) {
          question_Generator();
        }
        break;

    case 3:
        cout << "Exiting the quiz. Goodbye!" << endl;
        return;

    default:
        cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
    }
}
