//
// Created by eric on 27/08/2020.
//

#include <iostream>
#include "Client.h"

float Client::getSolde() {
    float total=0;
    for(int i=0;i<nbcomptes;i++)
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
compte[nbcomptes]=Compte(nbcomptes); //à la case nbcomptes j'affecte un nouveau compte dont le numéro est nbcomptes
nbcomptes++;
std:cout<<"le compte "<<nbcomptes<<" a été ajouté"<<std::endl;
}

Client::Client() {

}

Compte *Client::getCompte() {
    return compte;
}

int Client::getNbcomptes() const {
    return nbcomptes;
}
