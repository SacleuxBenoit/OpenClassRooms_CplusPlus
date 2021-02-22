#include <iostream>
#include <string>

using namespace std;

int main(){

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

    return 0;
}