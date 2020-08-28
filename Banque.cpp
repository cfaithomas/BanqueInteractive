//
// Created by eric on 28/08/2020.
//

#include <iostream>
#include <iomanip>
#include "Banque.h"


Banque::Banque() {
nbclients=0;
}
void Banque::ajouterClient(string nom_du_client) {
client[nbclients]=Client(nom_du_client); //à la case nbclient création et affectation d'un nouveau client
nbclients++;
}

void Banque::bilanClient(const int numeroclient) {
    std::cout<<"******************Bilan du client "<<client[numeroclient].getNom()<<" ***********************************"<<std::endl;
    client[numeroclient].afficherSolde();
}

void Banque::bilangeneral() {
std::cout<<"****************************Bilan général***********************************"<<std::endl;
for(int i=0;i<nbclients;i++)
{
    bilanClient(i);
    std::cout<<"la solde de l'ensemble des comptes est de "<<std::fixed<<std::setprecision(2)<<client[i].getSolde()<<std::endl;
}
}

Client *Banque::getClient()  {
    return client;
}


