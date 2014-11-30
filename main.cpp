#include "Personne.h"
using namespace std;

/*
* Author Bernardo Gurgel Filho
* 28/11/14 - TP1 IHM (C++)
*/

int main(){

  cout << "-- AFFICHAGE\n";

  Personne p("GURGEL", "Bernardo", 1990);

  cout << p;

  cout << "-- SETTERS";

  p.setAnneeNaissance(2000);

  cout << p;

  p.setNom("GURGEL FILHO");

  cout << p;

  p.setPrenom("José Bernardo");

  cout << p;

  cout << "-- GETTERS\n";

  cout << p.getNom();
  cout << "\n";

  cout << p.getPrenom();
  cout << "\n";

  cout << p.getAnneeNaissance();
  cout << "\n";

  cout << "-- COMPARATIONS";

  cout << "Finished.\n";
}
