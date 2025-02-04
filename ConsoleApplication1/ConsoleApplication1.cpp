

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void calculerSalaire(string ficLire, string ficEcrire) {
	ifstream fichier(ficLire);
	ofstream fichierEcrire(ficEcrire);
	string nom;
        double heure, tauxHoraire, salaire;
    if (ficLire.fail()){
        cout<< "l'ouverture du fichier ne sest pas bien fait";
    else
	while(!ficLire.eof()){
		cin>>nom>>tauxHoraire>>heure;
        	if (heure > 40) {
        		salaire = (40 * tauxHoraire) + ((heure - 40) * (tauxHoraire * 1.5));
		else 
            		salaire = heure * tauxHoraire;
		ficEcrire<< nom<< " "<<salaire;
        }
            

}


