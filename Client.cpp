//
// Created by eric on 27/08/2020.
//

#include <iostream>
#include "Client.h"

float Client::getSolde() {
    float total=0;
    for(int i=0;i<compte.size();i++)
    {
        total+=compte[i].getSolde();
    }
    return total;
}

string Client::getNom() {
    return nom;
}

void Client::afficherSolde() {
    for(int i=0;i<compte.size();i++)
    {
        compte[i].afficherSolde();
    }

}

Client::Client(string nom_du_client): nom(nom_du_client) {

}

void Client::ajoutercompte() {
compte.push_back(Compte(compte.size())); //à la case nbcomptes j'affecte un nouveau compte dont le numéro est nbcomptes

std:cout<<"le compte "<<compte.size()<<" a été ajouté"<<std::endl;
}

Client::Client() {

}

 vector<Compte> &Client::getCompte()  {
    return compte;
}




