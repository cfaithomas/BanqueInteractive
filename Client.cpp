//
// Created by eric on 27/08/2020.
//

#include "Client.h"

float Client::getSolde() {
    float total;
    for(int i;i<nbcomptes;i++)
    {
        total+=compte[i].getSolde();
    }
    return total;
}

string Client::getNom() {
    return nom;
}

void Client::afficherSolde() {
    for(int i=0;i<nbcomptes;i++)
    {
        compte[i].afficherSolde();
    }

}

Client::Client(string nom_du_client): nom(nom_du_client) {
nbcomptes=0;
}

void Client::ajoutercompte() {
compte[nbcomptes]=Compte(nbcomptes); //à la case nbcomptes j'affecte un nouveau dont le numéro est nbcomptes
nbcomptes++;
}
