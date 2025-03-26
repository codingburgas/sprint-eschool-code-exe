#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;



int question1() {
    string options[] = {
        "A) Strengthening of Ottoman rule",
        "B) Revival of the economy and social life",
        "C) Expansion of Greek influence",
        "D) Foreign intervention from Western countries"
    };
    return askQuestion("What is the main reason for the beginning of the Bulgarian Revival?", options, 'B');
}

int question2() {
    string options[] = {
        "A) Struggle for an independent Bulgarian church",
        "B) Creation of a Bulgarian national identity",
        "C) Subordination to the Greek Patriarchate",
        "D) Development of literature and education"
    };
    return askQuestion("Which of the following is not a characteristic feature of the Bulgarian Revival?", options, 'C');
}

int question3() {
    string options[] = {
        "A) Two periods - early and late Revival",
        "B) Three periods - early, mature, and late Revival",
        "C) Only one period, which continues until the Liberation",
        "D) Four periods - medieval, early, mature, and late Revival"
    };
    return askQuestion("What are the main periods of the Bulgarian Revival according to the text?", options, 'B');
}

int question4() {
    string options[] = {
        "A) The publication of \"Slavonic-Bulgarian History\"",
        "B) The Liberation of Bulgaria in 1878",
        "C) The beginning of the Crimean War",
        "D) The proclamation of the Bulgarian Exarchate"
    };
    return askQuestion("Which event marks the end of the Bulgarian Revival?", options, 'B');
}

int question5() {
    string options[] = {
        "A) To maintain religious faith",
        "B) To entertain readers with fictional works",
        "C) To form national consciousness and fighting spirit",
        "D) To spread myths and legends"
    };
    return askQuestion("What is the main role of literature during the Bulgarian Revival?", options, 'C');
}

int question6() {
    string options[] = {
        "A) The Bulgarian Revival entirely copies the ideas of the Enlightenment",
        "B) The two movements are independent of each other",
        "C) The ideas of the Enlightenment stimulate the development of the Revival",
        "D) The Enlightenment has no influence on the Bulgarian Revival"
    };
    return askQuestion("What is the connection between the Bulgarian Revival and the European Enlightenment?", options, 'C');
}

int question7() {
    string options[] = {
        "A) Georgi Rakovski",
        "B) Paisiy Hilendarski",
        "C) Elin Pelin",
        "D) Lyuben Karavelov"
    };
    return askQuestion("Which of the following personalities is not associated with the Bulgarian Revival?", options, 'C');
}

int question8() {
    string options[] = {
        "A) Organizing national liberation struggles",
        "B) Creating Bulgarian schools",
        "C) Writing \"Slavonic-Bulgarian History\"",
        "D) Political activity in Russia"
    };
    return askQuestion("What is the main contribution of Paisiy Hilendarski?", options, 'C');
}

int question9() {
    string options[] = {
        "A) It is completely independent of folklore",
        "B) It reflects the struggle for national consciousness and freedom",
        "C) It entirely follows Western European literary models",
        "D) It consists only of religious texts"
    };
    return askQuestion("What is the main characteristic of Revival literature?", options, 'B');
}

int question10() {
    string options[] = {
        "A) It describes the medieval wars of Bulgaria",
        "B) It stimulates national consciousness and pride",
        "C) It develops modern philosophical ideas",
        "D) It proves the superiority of Western European culture"
    };
    return askQuestion("What is the role of \"Slavonic-Bulgarian History\" for the Bulgarian Revival?", options, 'B');
}

int question11() {
    string options[] = {
        "A) Ivan Vazov",
        "B) Hristo Botev",
        "C) Aleko Konstantinov",
        "D) Elin Pelin"
    };
    return askQuestion("Who is the author of the novel \"Under the Yoke\"?", options, 'A');
}

int question12() {
    string options[] = {
        "A) \"Bay Ganyo\"",
        "B) \"Under the Yoke\"",
        "C) \"To Chicago and Back\"",
        "D) \"Nemili-Nedragi\""
    };
    return askQuestion("Which literary work is considered the first Bulgarian novel?", options, 'B');
}

int question13() {
    string options[] = {
        "A) Ivan Vazov",
        "B) Hristo Botev",
        "C) Peyo Yavorov",
        "D) Dimcho Debelyanov"
    };
    return askQuestion("Which Bulgarian poet wrote \"My Prayer\"?", options, 'B');
}

int question14() {
    string options[] = {
        "A) Ivan Vazov",
        "B) Hristo Botev",
        "C) Aleko Konstantinov",
        "D) Peyo Yavorov"
    };
    return askQuestion("Who wrote the satirical book \"Bay Ganyo\"?", options, 'C');
}

int question15() {
    string options[] = {
        "A) \"Night\"",
        "B) \"Two Beautiful Eyes\"",
        "C) \"Armenians\"",
        "D) \"To My Brother\""
    };
    return askQuestion("Which work by Peyo Yavorov is dedicated to his beloved Lora Karavelova?", options, 'B');
}

int question16() {
    string options[] = {
        "A) Novel",
        "B) Short story",
        "C) Play",
        "D) Poem"
    };
    return askQuestion("What is the genre of \"Nemili-Nedragi\" by Ivan Vazov?", options, 'C');
}

int question17() {
    string options[] = {
        "A) Love and personal experiences",
        "B) The struggle for freedom and national identity",
        "C) The beauty of Bulgarian nature",
        "D) Everyday life of common people"
    };
    return askQuestion("What is the main theme of Hristo Botev's poetry?", options, 'B');
}

int question18() {
    string options[] = {
        "A) Use of Church Slavonic forms",
        "B) Introduction of many foreign words",
        "C) Simplification and modernization of grammar",
        "D) Writing only in dialects"
    };
    return askQuestion("Which of the following is a characteristic of the Bulgarian Revival language?", options, 'C');
}

int question19() {
    string options[] = {
        "A) Elin Pelin",
        "B) Yordan Yovkov",
        "C) Ivan Vazov",
        "D) Aleko Konstantinov"
    };
    return askQuestion("Who wrote the short story collection \"Pizho and Penda\"?", options, 'A');
}

int question20() {
    string options[] = {
        "A) It describes events during the Russo-Turkish War",
        "B) It is a memoir of Ivan Vazov's personal experiences",
        "C) It depicts the April Uprising of 1876",
        "D) It is written entirely in verse"
    };
    return askQuestion("Which of the following statements about \"Under the Yoke\" is true?", options, 'C');
}

