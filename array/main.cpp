#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
/*
    // Static array

// wrong way

    string nomMeilleurjoueur1("totor");
    string nomMeilleurjoueur2("totorpal");
    string nomMeilleurjoueur3("totorhunt");
    string nomMeilleurjoueur4("Gromar");
    string nomMeilleurjoueur5("Gromph");

    int MeilleurScore1(1000000);
    int MeilleurScore2(100000);
    int MeilleurScore3(10000);
    int MeilleurScore4(1000);
    int MeilleurScore5(100);

    cout << "1) " << nomMeilleurjoueur1 << " " << MeilleurScore1 << endl;
    cout << "2) " << nomMeilleurjoueur2 << " " << MeilleurScore2 << endl;
    cout << "3) " << nomMeilleurjoueur3 << " " << MeilleurScore3 << endl;
    cout << "4) " << nomMeilleurjoueur4 << " " << MeilleurScore4 << endl;
    cout << "5) " << nomMeilleurjoueur5 << " " << MeilleurScore5 << endl;

// good way

    int const nombreMeilleursScores(5);

    int meilleurScore[nombreMeilleursScores];

    meilleurScore[0] = 1000000;
    meilleurScore[1] = 100000;
    meilleurScore[2] = 10000;
    meilleurScore[3] = 1000;
    meilleurScore[4] = 100;

    for(int i =0 ; i < nombreMeilleursScores;i++){
        cout << meilleurScore[i] << endl;
    }

// calculate the average of something

    int const nombresNotes(6);
    double notes[nombresNotes];

    notes[0] = 15.5;
    notes[1] = 12.1;
    notes[2] = 6;
    notes[3] = 1;
    notes[4] = 20;
    notes[5] = 18.2;

    double average(0);

    for(int i = 0; i < nombresNotes; i++){
        average += notes[i];
    }

    double result(average /= nombresNotes);

    cout << "La moyenne est de " << result << endl;

// Dynamic array

    vector<string> listeName(10,"No name");

    cout << listeName[9] << endl;



    int const nombreMeilleursScores(5);

    vector<int> meilleurScore(nombreMeilleursScores);

    meilleurScore[0] = 1000000;
    meilleurScore[1] = 100000;
    meilleurScore[2] = 10000;
    meilleurScore[3] = 1000;
    meilleurScore[4] = 100;

// push back

    vector<int> num(3,2);

    cout << num[2] << endl;

    num.push_back(7);

    cout << num[3] << endl;

// pop back && size()

    vector<int> deleteLastIndex(3,3);

    cout << deleteLastIndex[2] << endl;

    deleteLastIndex.pop_back();
    deleteLastIndex.pop_back();


    cout << deleteLastIndex[2] << endl;

    int const taille(deleteLastIndex.size());

    cout << taille << endl;

*/
// calculate the average of something 2.0

    vector<double> notes;

    notes.push_back(15.5);
    notes.push_back(12.1);
    notes.push_back(6);
    notes.push_back(1);
    notes.push_back(20);
    notes.push_back(18.2);

    cout << notes[2] << endl;
    double average(0);

    for(int i = 0; i < notes.size(); i++){
        average += notes[i];
    }

    average /= notes.size();

    cout << "La moyenne est de : " << average << endl;


    return 0;
}