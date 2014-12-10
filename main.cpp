#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include "TabPersonne.h"
#include "Chercheur.h"
#include "EnsChercheur.h"
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

  Personne p1("ARMSTRONG", "John", 1990);
  Personne p2("BORNWOOD", "Mary", 1990);

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

  cout << "\n-- ÉTUDIANT\n";

  Etudiant e("GURGEL", "Bernardo", 1990, 70.0, 80.0);

  cout << e;

  cout << "\n-- ENSEIGNANT\n";

  Enseignant ens("OAK", "Gary", 1975, 30, 50);

  cout << ens;

  Enseignant ens2("OAK", "GART", 1975, 30, 50);

  if(ens == ens2)
  {
    cout << "ens est égal à ens2. \n";
  } else {
    cout << "ens est égal à ens2. \n";
  }

  if(ens == p3)
  {
    cout << "ens est égal à p3.\n";
  } else {
    cout << "ens est different de p3.\n";
  }

  cout << "\n-- TAB\n";

  TabPersonne tab;

  tab.ajouterPersonne(&ens);
  tab.ajouterPersonne(&e);
  tab.ajouterPersonne(&p1);
  tab.ajouterPersonne(&p2);
  cout << tab;

  cout << "\n-- CHERCHEUR\n";

  Chercheur c1("ENGELBART", "Douglas", 1925, "IHC");
  cout << c1;

  cout << "\n-- MORE TAB\n";
  tab.ajouterPersonne(&c1);

  EnsChercheur ec1("EINSTEIN", "Albert", 1879, "Physics", 60, 30);
  tab.ajouterPersonne(&ec1);

  // cout << ec1;

  tab.trier();

  cout << tab;

  // cout << endl << "-- LECTURE" << endl;

  // Personne inputPersonne;

  // cin >> inputPersonne;

  // cout << inputPersonne;

  cout << "\nFinished.\n";
}
