#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>
#include "header.h"
#include <string>

using namespace std;

void question_Generator()
{
    srand(time(0));
    vector<int> askedQuestions;
    int score = 0;

    while (askedQuestions.size() < 20)
    {
        int n;
        do {
            n = rand() % 20 + 1; // Generates a number between 1 and 20
        } while (find(askedQuestions.begin(), askedQuestions.end(), n) != askedQuestions.end());

        askedQuestions.push_back(n);
        cout << "Randomly picked question Good luck :) " << endl;
        cout << "Question ID = " << n << endl;
        cout << "====================================" << endl;
        string answer;

        switch (n)
        {
        case 1:
            score += question1();
            break;
        case 2:
            score += question2();
            break;
        case 3:
            score += question3();
            break;
        case 4:
            score += question4();
            break;
        case 5:
            score += question5();
            break;
        case 6:
            score += question6();
            break;
        case 7:
            score += question7();
            break;
        case 8:
            score += question8();
            break;
        case 9:
            score += question9();
            break;
        case 10:
            score += question10();
            break;
        case 11:
            score += question11();
            break;
        case 12:
            score += question12();
            break;
        case 13:
            score += question13();
            break;
        case 14:
            score += question14();
            break;
        case 15:
            score += question15();
            break;
        case 16:
            score += question16();
            break;
        case 17:
            score += question17();
            break;
        case 18:
            score += question18();
            break;
        case 19:
            score += question19();
            break;
        case 20:
            score += question20();
            break;
        }
    }

    cout << "Quiz completed! Your score is: " << score << "/20" << endl;
    cout << "Press any key to return to the main menu..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    mainMenu();
}

