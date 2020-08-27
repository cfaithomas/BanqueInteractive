//
// Created by eric on 27/08/2020.
//

#include "Client.h"

float Client::getSolde() {
    return compte.getSolde();
}

string Client::getNom() {
    return nom;
}

void Client::afficherSolde() {
compte.afficherSolde();
}
