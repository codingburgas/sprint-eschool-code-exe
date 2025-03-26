#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include "header.h"
#include <string>

using namespace std;

int question1History() {
    string options[] = {
        "A) The establishment of the First Bulgarian Empire",
        "B) The writing of 'Slavonic-Bulgarian History' by Paisii Hilendarski",
        "C) The adoption of Christianity in Bulgaria",
        "D) The Liberation of Bulgaria from Ottoman rule"
    };
    return askQuestion("Which event marked the beginning of the Bulgarian Revival?", options, 'B');
}

int question2History() {
    string options[] = {
        "A) Tsar Ferdinand I",
        "B) Tsar Boris III",
        "C) Alexander Battenberg",
        "D) Tsar Simeon II"
    };
    return askQuestion("Who was the ruler of Bulgaria when it became a kingdom again in 1908?", options, 'A');
}

int question3History() {
    string options[] = {
        "A) To overthrow the Ottoman Empire",
        "B) To achieve independence for Bulgaria",
        "C) To create a new Bulgarian constitution",
        "D) To unify all Slavic nations"
    };
    return askQuestion("What was the main goal of the April Uprising of 1876?", options, 'B');
}

int question4History() {
    string options[] = {
        "A) Treaty of Berlin",
        "B) Treaty of San Stefano",
        "C) Treaty of Versailles",
        "D) Treaty of Bucharest"
    };
    return askQuestion("Which treaty officially ended the Russo-Turkish War of 1877-1878 and led to Bulgaria's liberation?", options, 'B');
}

int question5History() {
    string options[] = {
        "A) Vasil Levski",
        "B) Hristo Botev",
        "C) Radko Dimitriev",
        "D) General Stoletov"
    };
    return askQuestion("Who was the leader of the Bulgarian volunteers (Opalchentsi) during the Russo-Turkish War?", options, 'D');
}

int question6History() {
    string options[] = {
        "A) First Balkan War",
        "B) Second Balkan War",
        "C) World War I",
        "D) World War II"
    };
    return askQuestion("Which war led to Bulgaria losing most of its territory gained in the Balkan Wars?", options, 'B');
}

int question7History() {
    string options[] = {
        "A) 2004",
        "B) 2007",
        "C) 2010",
        "D) 2013"
    };
    return askQuestion("When did Bulgaria officially join the European Union?", options, 'B');
}

int question8History() {
    string options[] = {
        "A) The assassination of Archduke Franz Ferdinand",
        "B) The signing of the Treaty of Versailles",
        "C) The Russian Revolution",
        "D) The bombing of Pearl Harbor"
    };
    return askQuestion("Which event triggered the start of World War I?", options, 'A');
}

int question9History() {
    string options[] = {
        "A) Tsar Simeon I",
        "B) Alexander Battenberg",
        "C) Tsar Ferdinand I",
        "D) Boris III"
    };
    return askQuestion("Who was the first Bulgarian ruler after the country's liberation in 1878?", options, 'B');
}

int question10History() {
    string options[] = {
        "A) To modernize agriculture",
        "B) To establish a national identity and regain independence",
        "C) To introduce socialism",
        "D) To expand Bulgarian territory into Greece"
    };
    return askQuestion("What was the main goal of the Bulgarian National Revival?", options, 'B');
}

int question11History() {
    string options[] = {
        "A) Hristo Botev",
        "B) Vasil Levski",
        "C) Georgi Rakovski",
        "D) Ivan Vazov"
    };
    return askQuestion("Which Bulgarian revolutionary is known as 'The Apostle of Freedom'?", options, 'B');
}

int question12History() {
    string options[] = {
        "A) Sofia",
        "B) Tarnovo",
        "C) Pliska",
        "D) Preslav"
    };
    return askQuestion("What was the capital of Bulgaria during the First Bulgarian Empire?", options, 'C');
}

int question13History() {
    string options[] = {
        "A) Boris III",
        "B) Simeon II",
        "C) Ferdinand I",
        "D) Alexander Battenberg"
    };
    return askQuestion("Who was the first Bulgarian king (Tsar) after independence in 1908?", options, 'C');
}

int question14History() {
    string options[] = {
        "A) Tsar Ferdinand I",
        "B) Aleksandar Stamboliyski",
        "C) Vasil Levski",
        "D) Hristo Botev"
    };
    return askQuestion("Which Bulgarian leader negotiated the Treaty of Neuilly after World War I?", options, 'B');
}

int question15History() {
    string options[] = {
        "A) Battle of Pliska",
        "B) Battle of Belasitsa (Kleidion)",
        "C) Battle of Adrianople",
        "D) Battle of Varna"
    };
    return askQuestion("Which battle in 1014 resulted in the defeat of the Bulgarian army by the Byzantines?", options, 'B');
}

int question16History() {
    string options[] = {
        "A) The first Bulgarian Constitution",
        "B) A peace treaty with the Ottoman Empire",
        "C) A military agreement with Russia",
        "D) The legal code of the Second Bulgarian Empire"
    };
    return askQuestion("What was the Tarnovo Constitution?", options, 'A');
}

int question17History() {
    string options[] = {
        "A) World War I",
        "B) World War II",
        "C) The Second Balkan War",
        "D) The First Balkan War"
    };
    return askQuestion("Which war led to Bulgaria regaining Southern Dobrudzha in 1940?", options, 'B');
}

int question18History() {
    string options[] = {
        "A) Tsar Boris III",
        "B) Tsar Simeon II",
        "C) Aleksandar Stamboliyski",
        "D) Vasil Levski"
    };
    return askQuestion("Who was the leader of Bulgaria during World War II?", options, 'A');
}

int question19History() {
    string options[] = {
        "A) Tsar Boris I",
        "B) Tsar Simeon I",
        "C) Tsar Kaloyan",
        "D) Tsar Ivan Asen II"
    };
    return askQuestion("Which Bulgarian ruler led the country to its greatest territorial expansion in the Middle Ages?", options, 'B');
}

int question20History() {
    string options[] = {
        "A) 1876",
        "B) 1877",
        "C) 1878",
        "D) 1885"
    };
    return askQuestion("When was Bulgaria officially liberated from Ottoman rule?", options, 'C');
}