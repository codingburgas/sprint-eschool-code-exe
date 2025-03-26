#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

int askQuestion(string question, string options[], char correctAnswer) {
    cout << question << endl;
    cout << "====================================" << endl;
    for (int i = 0; i < 4; i++) {
        cout << options[i] << endl;
    }
    char answer;
    cin >> answer;
    answer = toupper(answer);
    if (answer == correctAnswer) {
        cout << "Correct answer :)" << endl;
        return 1;
    }
    else {
        cout << "Wrong answer :(" << endl;
        return 0;
    }
}

int question1Biology() {
    string options[] = {
        "A) Atom",
        "B) Cell",
        "C) Tissue",
        "D) Organ"
    };
    return askQuestion("What is the basic unit of life?", options, 'B');
}

int question2Biology() {
    string options[] = {
        "A) Brain",
        "B) Lungs",
        "C) Heart",
        "D) Kidney"
    };
    return askQuestion("Which organ in the human body is responsible for pumping blood?", options, 'C');
}

int question3Biology() {
    string options[] = {
        "A) Oxygen",
        "B) Carbon Dioxide",
        "C) Nitrogen",
        "D) Hydrogen"
    };
    return askQuestion("Which gas do plants absorb from the atmosphere for photosynthesis?", options, 'B');
}

int question4Biology() {
    string options[] = {
        "A) Fight infections",
        "B) Carry oxygen",
        "C) Digest food",
        "D) Produce hormones"
    };
    return askQuestion("What is the function of red blood cells?", options, 'B');
}

int question5Biology() {
    string options[] = {
        "A) Earthworm",
        "B) Jellyfish",
        "C) Frog",
        "D) Spider"
    };
    return askQuestion("Which of the following is a vertebrate?", options, 'C');
}

int question6Biology() {
    string options[] = {
        "A) Leaves",
        "B) Flowers",
        "C) Stems",
        "D) Roots"
    };
    return askQuestion("What part of the plant absorbs water and nutrients from the soil?", options, 'D');
}

int question7Biology() {
    string options[] = {
        "A) Veins",
        "B) Capillaries",
        "C) Arteries",
        "D) Nerves"
    };
    return askQuestion("Which type of blood vessel carries blood away from the heart?", options, 'C');
}

int question8Biology() {
    string options[] = {
        "A) Liver",
        "B) Kidney",
        "C) Stomach",
        "D) Lungs"
    };
    return askQuestion("Which organ in the human body is responsible for filtering waste from the blood?", options, 'B');
}

int question9Biology() {
    string options[] = {
        "A) Producing hormones",
        "B) Supporting the body",
        "C) Producing oxygen",
        "D) Digesting food"
    };
    return askQuestion("What is the main function of the human skeleton?", options, 'B');
}

int question10Biology() {
    string options[] = {
        "A) Sexual reproduction",
        "B) Asexual reproduction",
        "C) Pollination",
        "D) Cloning"
    };
    return askQuestion("What type of reproduction requires only one parent?", options, 'B');
}

int question11Biology() {
    string options[] = {
        "A) Nucleus",
        "B) Ribosome",
        "C) Mitochondrion",
        "D) Golgi apparatus"
    };
    return askQuestion("Which organelle is responsible for energy production in a cell?", options, 'C');
}

int question12Biology() {
    string options[] = {
        "A) To fight infections",
        "B) To transport oxygen",
        "C) To produce enzymes",
        "D) To digest food"
    };
    return askQuestion("What is the main function of red blood cells?", options, 'B');
}

int question13Biology() {
    string options[] = {
        "A) Oxygen",
        "B) Carbon dioxide",
        "C) Nitrogen",
        "D) Hydrogen"
    };
    return askQuestion("Which gas do plants absorb from the atmosphere during photosynthesis?", options, 'B');
}

int question14Biology() {
    string options[] = {
        "A) Atom",
        "B) Molecule",
        "C) Cell",
        "D) Tissue"
    };
    return askQuestion("What is the basic unit of life?", options, 'C');
}

int question15Biology() {
    string options[] = {
        "A) Liver",
        "B) Pancreas",
        "C) Stomach",
        "D) Kidney"
    };
    return askQuestion("Which part of the human body produces insulin?", options, 'B');
}

int question16Biology() {
    string options[] = {
        "A) Sexual reproduction",
        "B) Asexual reproduction",
        "C) Pollination",
        "D) Crossbreeding"
    };
    return askQuestion("Which type of reproduction involves only one parent?", options, 'B');
}

int question17Biology() {
    string options[] = {
        "A) Digestion",
        "B) Blood circulation",
        "C) Support and protection",
        "D) Excretion"
    };
    return askQuestion("What is the function of the human skeletal system?", options, 'C');
}

int question18Biology() {
    string options[] = {
        "A) Heart",
        "B) Liver",
        "C) Skin",
        "D) Lungs"
    };
    return askQuestion("What is the largest organ in the human body?", options, 'C');
}

int question19Biology() {
    string options[] = {
        "A) Insects",
        "B) Amphibians",
        "C) Mollusks",
        "D) Arachnids"
    };
    return askQuestion("Which of the following is a type of vertebrate?", options, 'B');
}

int question20Biology() {
    string options[] = {
        "A) Respiration",
        "B) Photosynthesis",
        "C) Fermentation",
        "D) Digestion"
    };
    return askQuestion("What is the process by which green plants make their own food?", options, 'B');
}



