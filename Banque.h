//
// Created by eric on 28/08/2020.
//

#ifndef TP2_BANQUE_H
#define TP2_BANQUE_H


#include "Client.h"

class Banque {
private:
    Client client[100];
    int nbclients;
public:
    Banque();
    void ajouterClient(const string nom_du_client);
    void bilanClient(const int numeroclient);
    void bilangeneral();

    Client *getClient();


};


#endif //TP2_BANQUE_H
