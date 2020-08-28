//
// Created by eric on 27/08/2020.
//

#ifndef TP2_CLIENT_H
#define TP2_CLIENT_H

#include <string>
#include "Compte.h"

using namespace std;
class Client {
private:
    string nom;
    Compte compte[100];
    int nbcomptes;
    public:
    Client();
    Client(string nom_du_client);
    float getSolde();
    string getNom();
    void afficherSolde();
    void ajoutercompte();

    Compte *getCompte();
};


#endif //TP2_CLIENT_H
