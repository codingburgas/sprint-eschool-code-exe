#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void question_GeneratorHistory()
{
    srand(time(0));
    int n = rand() % 19 + 1; // Generates a number between 1 and 10
    // from 0 to 20 right now change the last number to
    // change up to which number it randomly generates
    cout << "Randomly picked question Good luck :) " << endl;
    cout << "Question ID = " << n << endl;
    cout << "====================================" << endl;
    string answer;

    switch (n)
    {
    case 1:
        question1History();
        break;

    case 2:
        question2History();
        break;

    case 3:
        question3History();
        break;

    case 4:
        question4History();
        break;

    case 5:
        question5History();
        break;

    case 6:
        question6History();
        break;

    case 7:
        question7History();
        break;

    case 8:
        question8History();
        break;

    case 9:
        question9History();
        break;

    case 10:
        question10History();
        break;
    case 11:
        question11History();
        break;
    case 12:
        question12History();
        break;
    case 13:
        question13History();
        break;
    case 14:
        question14History();
        break;
    case 15:
        question15History();
        break;
    case 16:
        question16History();
        break;
    case 17:
        question17History();
        break;
    case 18:
        question18History();
        break;
    case 19:
        question19History();
        break;
    case 20:
        question20History();
        break;
    }
}