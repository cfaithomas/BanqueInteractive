//
// Created by eric on 28/08/2020.
//

#ifndef TP2_BANQUE_H
#define TP2_BANQUE_H


#include "Client.h"

class Banque {
private:
    vector<Client> client;

public:
    Banque();
    void ajouterClient(const string nom_du_client);
    void bilanClient(const int numeroclient);
    void bilangeneral();

     vector<Client> &getClient() ;

    float choixMontant(); //saisie de tous les montants renvoi du montant saisi

    void interaction(); //lance toutes les interactions et le menu principal

    string saisieClient(); //saisie des informations client renvoi des informations saisies

    void opclient(int numcli); //sous menu des opérations client

    int choix(string type, int limit); //permet de choisir un compte ou un client en fonction du type retoune le numero de client ou de compte
};


#endif //TP2_BANQUE_H
