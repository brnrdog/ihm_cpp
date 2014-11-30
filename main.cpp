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

  cout << "\n-- SETTERS\n";

  p.setAnneeNaissance(2000);

  cout << p;

  p.setNom("GURGEL FILHO");

  cout << p;

  p.setPrenom("José Bernardo");

  cout << p;

  cout << "\n-- GETTERS\n";

  cout << p.getNom();
  cout << "\n";

  cout << p.getPrenom();
  cout << "\n";

  cout << p.getAnneeNaissance();
  cout << "\n";

  cout << "\n-- COMPARATIONS\n";

  Personne p1("ARMSTRONG", "dsa", 1990);
  Personne p2("BORNWOOD", "dsa", 1990);

  if(p1 < p2)
  {
    cout << "ARMSTRONG est inférieur à BORNWOOD\n";
  } else {
    cout << "ARMSTRONG est supérieur à BORNWOOD\n";
  }

  Personne p3("CARLSTRONG", "dsa", 1990);

  if(p3 < p2)
  {
    cout << "CARLSTRONG est inférieur à BORNWOOD\n";
  } else {
    cout << "CARLSTRONG est supérieur à BORNWOOD\n";
  }

  cout << "\nFinished.\n";
}
