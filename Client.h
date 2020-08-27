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
    Compte compte;
public:
    float getSolde();
    string getNom();
    void afficherSolde();
};


#endif //TP2_CLIENT_H
