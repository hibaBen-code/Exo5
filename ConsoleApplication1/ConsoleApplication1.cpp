

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void calculerSalaire(string ficLire, string ficEcrire) {
	ifstream fichier(ficLire);
	ofstream fichierEcrire(ficEcrire);
    if (ficLire.fail()){
        cout<< "l'ouverture du fichier ne sest pas bien fait";
    else
        string nom;
        double heure, tauxHoraire, salaire;
        while(!ficLire.eof()){
            if (heure > 40) {
            salaire = (40 * tauxHoraire) + ((heure - 40) * (tauxHoraire * 1.5));
        } else {
            salaire = heure * tauxHoraire;
        }
            

}


