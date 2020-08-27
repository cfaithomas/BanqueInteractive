//
// Created by eric on 27/08/2020.
//

#include <iostream>
#include <iomanip>
#include "Compte.h"
using namespace std;
Compte::Compte(const int numero):numero(numero) {
solde=0;
}

void Compte::depot(const float valeur) {
solde+=valeur;
}

void Compte::retrait(const float valeur) {
solde-=valeur;
}

float Compte::getSolde() {
    return solde;
}

void Compte::afficherSolde() {
    cout<<"Le solde du compte "<<numero<<" est de "<<fixed<<setprecision(2)<<solde<<endl;
}
