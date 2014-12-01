                   // Fichier genere avec ./genere Etudiant
#include "Etudiant.h"

//--
Etudiant::Etudiant( /* ### */ ) : Personne( /* ### */ )
{
}

//--
Etudiant::Etudiant(const Etudiant& anE) : Personne(anE)
{
 _copy(anE);
}

//--
Etudiant::Etudiant(char* nom, char* prenom, int annee, float n1, float n2) : Personne(nom, prenom, annee)
{
  _note1 = n1;
  _note2 = n2;
}

//--
Etudiant& Etudiant::operator=(const Etudiant& anE)
{
 if (this != &anE)
 {
  Personne::operator=(anE);
  _destroy();
  _copy(anE);
 }
 return *this;
}

//--
Etudiant::~Etudiant(void)
{
 _destroy();
}

//--
bool operator==(const Etudiant& anE1, const Etudiant& anE2)
{
 return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const Etudiant& anE1, const Etudiant& anE2)
{
 return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const Etudiant& anE)
{
 anE.display(os);
 return os;
}

//--
void Etudiant::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 Personne::display(os);

 // ### : Affichage des attributs de la classe Etudiant
 // Exemple : os << _at;
}

//--
bool Etudiant::isEqualTo(const Etudiant& anE) const
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Etudiant
 // Exemple : if (_at != anE._at) return false;

 if (!(Personne::isEqualTo(anE))) return false;
 return true;
}

//--
void Etudiant::_copy(const Etudiant& anE)
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Etudiant
 // Exemple : _at = anE._at;
}

//--
void Etudiant::_destroy(void)
{
 // ### : Destruction des attributs de la classe Etudiant
 // Exemple : delete _at;
}
