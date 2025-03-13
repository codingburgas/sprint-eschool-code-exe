#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

void question1(string answer)
{
    cout << "What is the main reason for the beginning of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Strengthening of Ottoman rule" << endl;
    cout << "B) Revival of the economy and social life" << endl;
    cout << "C) Expansion of Greek influence" << endl;
    cout << "D) Foreign intervention from Western countries" << endl;
    getline(cin, answer);
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question2(string answer)
{
    cout << "Which of the following is not a characteristic feature of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Struggle for an independent Bulgarian church" << endl;
    cout << "B) Creation of a Bulgarian national identity" << endl;
    cout << "C) Subordination to the Greek Patriarchate" << endl;
    cout << "D) Development of literature and education" << endl;
    getline(cin, answer);
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question3(string answer)
{
    cout << "What are the main periods of the Bulgarian Revival according to the text?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Two periods – early and late Revival" << endl;
    cout << "B) Three periods – early, mature, and late Revival" << endl;
    cout << "C) Only one period, which continues until the Liberation" << endl;
    cout << "D) Four periods – medieval, early, mature, and late Revival" << endl;
    getline(cin, answer);
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question4(string answer)
{
    cout << "Which event marks the end of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) The publication of \"Slavonic-Bulgarian History\"" << endl;
    cout << "B) The Liberation of Bulgaria in 1878" << endl;
    cout << "C) The beginning of the Crimean War" << endl;
    cout << "D) The proclamation of the Bulgarian Exarchate" << endl;
    getline(cin, answer);
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question5(string answer)
{
    cout << "What is the main role of literature during the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) To maintain religious faith" << endl;
    cout << "B) To entertain readers with fictional works" << endl;
    cout << "C) To form national consciousness and fighting spirit" << endl;
    cout << "D) To spread myths and legends" << endl;
    getline(cin, answer);
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question6(string answer)
{
    cout << "What is the connection between the Bulgarian Revival and the European Enlightenment?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) The Bulgarian Revival entirely copies the ideas of the Enlightenment" << endl;
    cout << "B) The two movements are independent of each other" << endl;
    cout << "C) The ideas of the Enlightenment stimulate the development of the Revival" << endl;
    cout << "D) The Enlightenment has no influence on the Bulgarian Revival" << endl;
    getline(cin, answer);
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question7(string answer)
{
    cout << "Which of the following personalities is not associated with the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Georgi Rakovski" << endl;
    cout << "B) Paisiy Hilendarski" << endl;
    cout << "C) Elin Pelin" << endl;
    cout << "D) Lyuben Karavelov" << endl;
    getline(cin, answer);
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question8(string answer)
{
    cout << "What is the main contribution of Paisiy Hilendarski?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Organizing national liberation struggles" << endl;
    cout << "B) Creating Bulgarian schools" << endl;
    cout << "C) Writing \"Slavonic-Bulgarian History\"" << endl;
    cout << "D) Political activity in Russia" << endl;
    getline(cin, answer);
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question9(string answer)
{
    cout << "What is the main characteristic of Revival literature?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) It is completely independent of folklore" << endl;
    cout << "B) It reflects the struggle for national consciousness and freedom" << endl;
    cout << "C) It entirely follows Western European literary models" << endl;
    cout << "D) It consists only of religious texts" << endl;
    getline(cin, answer);
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question10(string answer)
{
    cout << "What is the role of \"Slavonic-Bulgarian History\" for the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) It describes the medieval wars of Bulgaria" << endl;
    cout << "B) It stimulates national consciousness and pride" << endl;
    cout << "C) It develops modern philosophical ideas" << endl;
    cout << "D) It proves the superiority of Western European culture" << endl;
    getline(cin, answer);
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question11(string answer)
{
    cout << "" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) " << endl;
    cout << "B) " << endl;
    cout << "C) " << endl;
    cout << "D) " << endl;
    getline(cin, answer);
    if (answer == "" || answer == "") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}

void question12(string answer)
{
    cout << "" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) " << endl;
    cout << "B) " << endl;
    cout << "C) " << endl;
    cout << "D) " << endl;
    getline(cin, answer);
    if (answer == "" || answer == "") {
        cout << "Correct answer :)";
    }
    else {
        cout << "Wrong answer :(";
    }
}