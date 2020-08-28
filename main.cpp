#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Banque.h"

int main() {
Banque b1;
b1.ajouterClient("Didier");
b1.ajouterClient("Simone");
b1.getClient()[0].ajoutercompte();
b1.getClient()[0].ajoutercompte();

b1.getClient()[1].ajoutercompte();
b1.getClient()[1].ajoutercompte();

b1.getClient()[0].getCompte()[0].depot(100);
b1.getClient()[0].getCompte()[1].depot(50);

b1.getClient()[1].getCompte()[0].depot(1000);
b1.getClient()[1].getCompte()[1].depot(1000);

b1.bilanClient(0);
b1.bilanClient(1);

b1.bilangeneral();










}
