//
// Created by eric on 27/08/2020.
//

#ifndef TP2_CLIENT_H
#define TP2_CLIENT_H

#include <string>
#include <vector>
#include "Compte.h"

using namespace std;
class Client {
private:
    string nom;
    vector<Compte> compte;

    public:
    Client();
    Client(string nom_du_client);
    float getSolde();
    string getNom();
    void afficherSolde();
    void ajoutercompte();



    vector<Compte> &getCompte();

};


#endif //TP2_CLIENT_H
