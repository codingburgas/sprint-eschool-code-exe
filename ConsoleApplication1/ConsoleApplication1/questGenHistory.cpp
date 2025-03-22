#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>
#include "header.h"
#include <string>

using namespace std;

void question_GeneratorHistory()
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
            score += question1History();
            break;
        case 2:
            score += question2History();
            break;
        case 3:
            score += question3History();
            break;
        case 4:
            score += question4History();
            break;
        case 5:
            score += question5History();
            break;
        case 6:
            score += question6History();
            break;
        case 7:
            score += question7History();
            break;
        case 8:
            score += question8History();
            break;
        case 9:
            score += question9History();
            break;
        case 10:
            score += question10History();
            break;
        case 11:
            score += question11History();
            break;
        case 12:
            score += question12History();
            break;
        case 13:
            score += question13History();
            break;
        case 14:
            score += question14History();
            break;
        case 15:
            score += question15History();
            break;
        case 16:
            score += question16History();
            break;
        case 17:
            score += question17History();
            break;
        case 18:
            score += question18History();
            break;
        case 19:
            score += question19History();
            break;
        case 20:
            score += question20History();
            break;
        }
    }

    cout << "Quiz completed! Your score is: " << score << "/20" << endl;
    cout << "Press any key to return to the main menu..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    mainMenu();
}
