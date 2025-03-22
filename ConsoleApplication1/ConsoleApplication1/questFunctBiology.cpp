#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

int question1Biology()
{
    cout << "What is the basic unit of life?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Atom" << endl;
    cout << "B) Cell" << endl;
    cout << "C) Tissue" << endl;
    cout << "D) Organ" << endl;
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

int question2Biology()
{
    cout << "Which organ in the human body is responsible for pumping blood?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Brain" << endl;
    cout << "B) Lungs" << endl;
    cout << "C) Heart" << endl;
    cout << "D) Kidney" << endl;
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

int question3Biology()
{
    cout << "Which gas do plants absorb from the atmosphere for photosynthesis?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Oxygen" << endl;
    cout << "B) Carbon Dioxide" << endl;
    cout << "C) Nitrogen" << endl;
    cout << "D) Hydrogen" << endl;
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

int question4Biology()
{
    cout << "What is the function of red blood cells?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Fight infections" << endl;
    cout << "B) Carry oxygen" << endl;
    cout << "C) Digest food" << endl;
    cout << "D) Produce hormones" << endl;
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

int question5Biology()
{
    cout << "Which of the following is a vertebrate?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Earthworm" << endl;
    cout << "B) Jellyfish" << endl;
    cout << "C) Frog" << endl;
    cout << "D) Spider" << endl;
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

int question6Biology()
{
    cout << "What part of the plant absorbs water and nutrients from the soil?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Leaves" << endl;
    cout << "B) Flowers" << endl;
    cout << "C) Stems" << endl;
    cout << "D) Roots" << endl;
    string answer;
    cin >> answer;
    if (answer == "D" || answer == "d") {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question7Biology()
{
    cout << "Which type of blood vessel carries blood away from the heart?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Veins" << endl;
    cout << "B) Capillaries" << endl;
    cout << "C) Arteries" << endl;
    cout << "D) Nerves" << endl;
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

int question8Biology()
{
    cout << "Which organ in the human body is responsible for filtering waste from the blood?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Liver" << endl;
    cout << "B) Kidney" << endl;
    cout << "C) Stomach" << endl;
    cout << "D) Lungs" << endl;
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

int question9Biology()
{
    cout << "What is the main function of the human skeleton?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Producing hormones" << endl;
    cout << "B) Supporting the body" << endl;
    cout << "C) Producing oxygen" << endl;
    cout << "D) Digesting food" << endl;
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

int question10Biology()
{
    cout << "What type of reproduction requires only one parent?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Sexual reproduction" << endl;
    cout << "B) Asexual reproduction" << endl;
    cout << "C) Pollination" << endl;
    cout << "D) Cloning" << endl;
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

int question11Biology()
{
    cout << "Which organelle is responsible for energy production in a cell?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Nucleus" << endl;
    cout << "B) Ribosome" << endl;
    cout << "C) Mitochondrion" << endl;
    cout << "D) Golgi apparatus" << endl;
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

int question12Biology()
{
    cout << "What is the main function of red blood cells?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) To fight infections" << endl;
    cout << "B) To transport oxygen" << endl;
    cout << "C) To produce enzymes" << endl;
    cout << "D) To digest food" << endl;
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

int question13Biology()
{
    cout << "Which gas do plants absorb from the atmosphere during photosynthesis?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Oxygen" << endl;
    cout << "B) Carbon dioxide" << endl;
    cout << "C) Nitrogen" << endl;
    cout << "D) Hydrogen" << endl;
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

int question14Biology()
{
    cout << "What is the basic unit of life?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Atom" << endl;
    cout << "B) Molecule" << endl;
    cout << "C) Cell" << endl;
    cout << "D) Tissue" << endl;
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

int question15Biology()
{
    cout << "Which part of the human body produces insulin?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Liver" << endl;
    cout << "B) Pancreas" << endl;
    cout << "C) Stomach" << endl;
    cout << "D) Kidney" << endl;
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

int question16Biology()
{
    cout << "Which type of reproduction involves only one parent?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Sexual reproduction" << endl;
    cout << "B) Asexual reproduction" << endl;
    cout << "C) Pollination" << endl;
    cout << "D) Crossbreeding" << endl;
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

int question17Biology()
{
    cout << "What is the function of the human skeletal system?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Digestion" << endl;
    cout << "B) Blood circulation" << endl;
    cout << "C) Support and protection" << endl;
    cout << "D) Excretion" << endl;
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

int question18Biology()
{
    cout << "What is the largest organ in the human body?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Heart" << endl;
    cout << "B) Liver" << endl;
    cout << "C) Skin" << endl;
    cout << "D) Lungs" << endl;
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

int question19Biology()
{
    cout << "Which of the following is a type of vertebrate?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Insects" << endl;
    cout << "B) Amphibians" << endl;
    cout << "C) Mollusks" << endl;
    cout << "D) Arachnids" << endl;
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

int question20Biology()
{
    cout << "What is the process by which green plants make their own food?" << endl;
    cout << "====================================" << endl;
    cout << "Choose an answer: " << endl;
    cout << "A) Respiration" << endl;
    cout << "B) Photosynthesis" << endl;
    cout << "C) Fermentation" << endl;
    cout << "D) Digestion" << endl;
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

