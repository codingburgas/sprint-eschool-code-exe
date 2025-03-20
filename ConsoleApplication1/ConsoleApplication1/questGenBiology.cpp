#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void question_GeneratorBiology()
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
        question1Biology();
        break;

    case 2:
        question2Biology();
        break;

    case 3:
        question3Biology();
        break;

    case 4:
        question4Biology();
        break;

    case 5:
        question5Biology();
        break;

    case 6:
        question6Biology();
        break;

    case 7:
        question7Biology();
        break;

    case 8:
        question8Biology();
        break;

    case 9:
        question9Biology();
        break;

    case 10:
        question10Biology();
        break;
    case 11:
        question11Biology();
        break;
    case 12:
        question12Biology();
        break;
    case 13:
        question13Biology();
        break;
    case 14:
        question14Biology();
        break;
    case 15:
        question15Biology();
        break;
    case 16:
        question16Biology();
        break;
    case 17:
        question17Biology();
        break;
    case 18:
        question18Biology();
        break;
    case 19:
        question19Biology();
        break;
    case 20:
        question20Biology();
        break;
    }
}