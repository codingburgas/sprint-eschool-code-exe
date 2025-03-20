#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void question_Generator()
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
        question1();
        break;

    case 2:
        question2();
        break;

    case 3:
        question3();
        break;

    case 4:
        question4();
        break;

    case 5:
        question5();
        break;

    case 6:
        question6();
        break;

    case 7:
        question7();
        break;

    case 8:
        question8();
        break;

    case 9:
        question9();
        break;

    case 10:
        question10();
        break;
    case 11:
        question11();
        break;
    case 12:
        question12();
        break;
    case 13:
        question13();
        break;
    case 14:
        question14();
        break;
    case 15:
        question15();
        break;
    case 16:
        question16();
        break;
    case 17:
        question17();
        break;
    case 18:
        question18();
        break;
    case 19:
        question19();
        break;
    case 20:
        question20();
        break;
    }
}