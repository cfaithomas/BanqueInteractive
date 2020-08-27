#include <iostream>
#include "Compte.h"

int main() {
Compte compte1(13243);
compte1.afficherSolde();
compte1.depot(150.40);
compte1.afficherSolde();
compte1.retrait(90);
compte1.afficherSolde();
}
