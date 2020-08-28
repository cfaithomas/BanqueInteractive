//
// Created by eric on 28/08/2020.
//

#include <iostream>
#include <iomanip>
#include "Banque.h"


Banque::Banque() {

}
void Banque::ajouterClient(string nom_du_client) {
client.push_back(Client(nom_du_client)); //à la case nbclient création et affectation d'un nouveau client
std:cout<<"le client "<<nom_du_client<<" a été ajouté"<<std::endl;
}

void Banque::bilanClient(const int numeroclient) {
    std::cout<<"******************Bilan du client "<<client[numeroclient].getNom()<<" ***********************************"<<std::endl;
    client[numeroclient].afficherSolde();
}

void Banque::bilangeneral() {
std::cout<<"****************************Bilan général***********************************"<<std::endl;
for(int i=0;i<client.size();i++)
{
    bilanClient(i);
    std::cout<<"la solde de l'ensemble des comptes est de "<<std::fixed<<std::setprecision(2)<<client[i].getSolde()<<std::endl;
}
}



void Banque::interaction() {
    int saisie=0;
    cout<<"Quel opération voulez-vous effectuer?"<<endl;
    cout<<"1-Ajouter un client"<<endl;
    cout<<"2-Effectuer une opération sur un client"<<endl;
    cout<<"3-Afficher un bilan général"<<endl;
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            ajouterClient(saisieClient());
            break;

        case 2:
            opclient(choix("client",client.size()));
            break;

        case 3:
            bilangeneral();
            break;



    }

    interaction(); //Recursivité
}

string Banque::saisieClient() {
    cin.ignore(256, '\n'); //ignore les précédents cin pour le bon fonctionnement du getline
    string saisie="";
    cout<<"Veuillez saisir un nom\n";
    getline(cin,saisie);
    return saisie;
}

void Banque::opclient(int numcli) {
    int saisie=0;
    cout<<"1-Créer un compte\n";
    cout<<"2-Créditer\n";
    cout<<"3-Débiter\n";
    cout<<"4-Virer\n";
    cout<<"5-Afficher un bilan\n";
    cout<<"6-Retour au menu principal\n";
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            client[numcli].ajoutercompte();
            break;
        case 2:
            client[numcli].getCompte()[choix("compte",client[numcli].getCompte().size())].depot(this->choixMontant());
            break;
        case 3:
            client[numcli].getCompte()[choix("compte",client[numcli].getCompte().size())].retrait(this->choixMontant());
            break;

        case 4:
            client[numcli].getCompte()[choix("compte",client[numcli].getCompte().size())].
                    virer(choixMontant(),client[choix("client",client.size())].
                    getCompte()[choix("compte",client[numcli].getCompte().size())]);
            break;

        case 5:

            bilanClient(numcli);
            break;

        case 6:
            this->interaction();
            break;



    }

    opclient(numcli);

}

int Banque::choix(string type,int limit) {
    int saisie=0;
    cout<<"****************Liste des "<<type<<"s disponibles*******************"<<endl;
    for(int i=0;i<limit;i++)
    {   if(type=="client")
        cout<<i<<")"<<client[i].getNom()<<endl;
        else
            cout<<i<<")"<<endl;
    }
    cout<<"*****************************************************************"<<endl;
    cout<<"Veuillez choisir un "<<type<<endl;
    cin>>saisie;
    return saisie;

}

float Banque::choixMontant() {
    float montant;
    cout << "Veuillez donner un montant";
    cin >> montant;
    return montant;
}

vector<Client> &Banque::getClient()  {
    return client;
}

