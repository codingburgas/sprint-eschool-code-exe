#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>
#include "header.h"
#include <string>

using namespace std;

void question_GeneratorBiology()
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
            score += question1Biology();
            break;
        case 2:
            score += question2Biology();
            break;
        case 3:
            score += question3Biology();
            break;
        case 4:
            score += question4Biology();
            break;
        case 5:
            score += question5Biology();
            break;
        case 6:
            score += question6Biology();
            break;
        case 7:
            score += question7Biology();
            break;
        case 8:
            score += question8Biology();
            break;
        case 9:
            score += question9Biology();
            break;
        case 10:
            score += question10Biology();
            break;
        case 11:
            score += question11Biology();
            break;
        case 12:
            score += question12Biology();
            break;
        case 13:
            score += question13Biology();
            break;
        case 14:
            score += question14Biology();
            break;
        case 15:
            score += question15Biology();
            break;
        case 16:
            score += question16Biology();
            break;
        case 17:
            score += question17Biology();
            break;
        case 18:
            score += question18Biology();
            break;
        case 19:
            score += question19Biology();
            break;
        case 20:
            score += question20Biology();
            break;
        }
    }

    cout << "Quiz completed! Your score is: " << score << "/20" << endl;
    cout << "Press any key to return to the main menu..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    mainMenu();
}


