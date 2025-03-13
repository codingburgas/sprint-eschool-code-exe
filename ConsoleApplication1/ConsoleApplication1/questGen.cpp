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
    int n = rand() % 19 + 1; // from 0 to 20 right now change the last number to
    // change up to which number it randomly generates
    cout << "Randomly picked question Good luck :) " << endl;
    cout << "Question ID = " << n << endl;
    cout << "====================================" << endl;
    string answer;

    switch (n)
    {
    case 1:
        question1(answer);
        break;

    case 2:
        question2(answer);
        break;

    case 3:
        question3(answer);
        break;

    case 4:
        question4(answer);
        break;

    case 5:
        question5(answer);
        break;

    case 6:
        question6(answer);
        break;

    case 7:
        question7(answer);
        break;

    case 8:
        question8(answer);
        break;

    case 9:
        question9(answer);
        break;

    case 10:
        question10(answer);
        break;
    }
}