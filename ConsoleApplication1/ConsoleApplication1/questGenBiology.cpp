#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>
#include "header.h"
#include <string>
#include <iomanip>

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
            cout << endl;
            break;
        case 2:
            score += question2Biology();
            cout << endl;
           
            break;
        case 3:
            score += question3Biology();
            cout << endl;
            
            break;
        case 4:
            score += question4Biology();
            cout << endl;
            
            break;
        case 5:
            score += question5Biology();
            cout << endl;
            
            break;
        case 6:
            score += question6Biology();
            cout << endl;
            
            break;
        case 7:
            score += question7Biology();
            cout << endl;
            
            break;
        case 8:
            score += question8Biology();
            cout << endl;
            
            break;
        case 9:
            score += question9Biology();
            cout << endl;
            
            break;
        case 10:
            score += question10Biology();
            cout << endl;
            
            break;
        case 11:
            score += question11Biology();
            cout << endl;
            break;
        case 12:
            score += question12Biology();
            cout << endl;
            break;
        case 13:
            score += question13Biology();
            cout << endl;
            break;
        case 14:
            score += question14Biology();
            cout << endl;
            break;
        case 15:
            score += question15Biology();
            cout << endl;
            break;
        case 16:
            score += question16Biology();
            cout << endl;
            break;
        case 17:
            score += question17Biology();
            cout << endl;
            break;
        case 18:
            score += question18Biology();
            cout << endl;
            break;
        case 19:
            score += question19Biology();
            cout << endl;
            break;
        case 20:
            score += question20Biology();
            cout << endl;
            break;
        }
    }

    cout << "Quiz completed! Your score is: " << score << "/20" << endl;
    cout << "Press any key to return to the main menu..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    mainMenu();
}


