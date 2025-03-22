#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

int question1()
{
    cout << "What is the main reason for the beginning of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Strengthening of Ottoman rule" << endl;
    cout << "B) Revival of the economy and social life" << endl;
    cout << "C) Expansion of Greek influence" << endl;
    cout << "D) Foreign intervention from Western countries" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question2()
{
    cout << "Which of the following is not a characteristic feature of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Struggle for an independent Bulgarian church" << endl;
    cout << "B) Creation of a Bulgarian national identity" << endl;
    cout << "C) Subordination to the Greek Patriarchate" << endl;
    cout << "D) Development of literature and education" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question3()
{
    cout << "What are the main periods of the Bulgarian Revival according to the text?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Two periods – early and late Revival" << endl;
    cout << "B) Three periods – early, mature, and late Revival" << endl;
    cout << "C) Only one period, which continues until the Liberation" << endl;
    cout << "D) Four periods – medieval, early, mature, and late Revival" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question4()
{
    cout << "Which event marks the end of the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) The publication of \"Slavonic-Bulgarian History\"" << endl;
    cout << "B) The Liberation of Bulgaria in 1878" << endl;
    cout << "C) The beginning of the Crimean War" << endl;
    cout << "D) The proclamation of the Bulgarian Exarchate" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question5()
{
    cout << "What is the main role of literature during the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) To maintain religious faith" << endl;
    cout << "B) To entertain readers with fictional works" << endl;
    cout << "C) To form national consciousness and fighting spirit" << endl;
    cout << "D) To spread myths and legends" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question6()
{
    cout << "What is the connection between the Bulgarian Revival and the European Enlightenment?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) The Bulgarian Revival entirely copies the ideas of the Enlightenment" << endl;
    cout << "B) The two movements are independent of each other" << endl;
    cout << "C) The ideas of the Enlightenment stimulate the development of the Revival" << endl;
    cout << "D) The Enlightenment has no influence on the Bulgarian Revival" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question7()
{
    cout << "Which of the following personalities is not associated with the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Georgi Rakovski" << endl;
    cout << "B) Paisiy Hilendarski" << endl;
    cout << "C) Elin Pelin" << endl;
    cout << "D) Lyuben Karavelov" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question8()
{
    cout << "What is the main contribution of Paisiy Hilendarski?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Organizing national liberation struggles" << endl;
    cout << "B) Creating Bulgarian schools" << endl;
    cout << "C) Writing \"Slavonic-Bulgarian History\"" << endl;
    cout << "D) Political activity in Russia" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question9()
{
    cout << "What is the main characteristic of Revival literature?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) It is completely independent of folklore" << endl;
    cout << "B) It reflects the struggle for national consciousness and freedom" << endl;
    cout << "C) It entirely follows Western European literary models" << endl;
    cout << "D) It consists only of religious texts" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question10()
{
    cout << "What is the role of \"Slavonic-Bulgarian History\" for the Bulgarian Revival?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) It describes the medieval wars of Bulgaria" << endl;
    cout << "B) It stimulates national consciousness and pride" << endl;
    cout << "C) It develops modern philosophical ideas" << endl;
    cout << "D) It proves the superiority of Western European culture" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question11()
{
    cout << "Who is the author of the novel \"Under the Yoke\"?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Ivan Vazov" << endl;
    cout << "B) Hristo Botev" << endl;
    cout << "C) Aleko Konstantinov" << endl;
    cout << "D) Elin Pelin" << endl;
    string answer;
    cin >> answer;
    if (answer == "A" || answer == "a") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question12()
{
    cout << "Which literary work is considered the first Bulgarian novel?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) \"Bay Ganyo\"" << endl;
    cout << "B) \"Under the Yoke\"" << endl;
    cout << "C) \"To Chicago and Back\"" << endl;
    cout << "D) \"Nemili-Nedragi\"" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question13()
{
    cout << "Which Bulgarian poet wrote \"My Prayer\"?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Ivan Vazov" << endl;
    cout << "B) Hristo Botev" << endl;
    cout << "C) Peyo Yavorov" << endl;
    cout << "D) Dimcho Debelyanov" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question14()
{
    cout << "Who wrote the satirical book \"Bay Ganyo\"?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Ivan Vazov" << endl;
    cout << "B) Hristo Botev" << endl;
    cout << "C) Aleko Konstantinov" << endl;
    cout << "D) Peyo Yavorov" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question15()
{
    cout << "Which work by Peyo Yavorov is dedicated to his beloved Lora Karavelova?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) \"Night\" " << endl;
    cout << "B) \"Two Beautiful Eyes\" " << endl;
    cout << "C) \"Armenians\" " << endl;
    cout << "D) \"To My Brother\" " << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question16()
{
    cout << "What is the genre of \"Nemili-Nedragi\" by Ivan Vazov?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Novel" << endl;
    cout << "B) Short story" << endl;
    cout << "C) Play" << endl;
    cout << "D) Poem" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question17()
{
    cout << "What is the main theme of Hristo Botev's poetry?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Love and personal experiences" << endl;
    cout << "B) The struggle for freedom and national identity" << endl;
    cout << "C) The beauty of Bulgarian nature" << endl;
    cout << "D) Everyday life of common people" << endl;
    string answer;
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question18()
{
    cout << "Which of the following is a characteristic of the Bulgarian Revival language?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Use of Church Slavonic forms" << endl;
    cout << "B) Introduction of many foreign words" << endl;
    cout << "C) Simplification and modernization of grammar" << endl;
    cout << "D) Writing only in dialects" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question19()
{
    cout << "Who wrote the short story collection \"Pizho and Penda\"?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Elin Pelin" << endl;
    cout << "B) Yordan Yovkov" << endl;
    cout << "C) Ivan Vazov" << endl;
    cout << "D) Aleko Konstantinov" << endl;
    string answer;
    cin >> answer;
    if (answer == "A" || answer == "a") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question20()
{
    cout << "Which of the following statements about \"Under the Yoke\" is true?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) It describes events during the Russo-Turkish War" << endl;
    cout << "B) It is a memoir of Ivan Vazov's personal experiences" << endl;
    cout << "C) It depicts the April Uprising of 1876" << endl;
    cout << "D) It is written entirely in verse" << endl;
    string answer;
    cin >> answer;
    if (answer == "C" || answer == "c") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}


