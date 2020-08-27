//
// Created by eric on 27/08/2020.
//

#ifndef TP2_COMPTE_H
#define TP2_COMPTE_H


class Compte {

private:
    int numero;
    float solde;

public:
    Compte(const int numero);
    void depot(const float valeur);
    void retrait(const float valeur);
    float getSolde();
    void afficherSolde();
    void virer(const int montant,Compte &destinataire);

};


#endif //TP2_COMPTE_H
