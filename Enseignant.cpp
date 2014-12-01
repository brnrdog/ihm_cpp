                   // Fichier genere avec ./genere Enseignant
#include "Enseignant.h"

//--
Enseignant::Enseignant( /* ### */ ) : Personne( /* ### */ )
{
}

//--
Enseignant::Enseignant(const Enseignant& anE) : Personne(anE)
{
 _copy(anE);
}

//--
Enseignant& Enseignant::operator=(const Enseignant& anE)
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
Enseignant::~Enseignant(void)
{
 _destroy();
}

//--
bool operator==(const Enseignant& anE1, const Enseignant& anE2)
{
 return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const Enseignant& anE1, const Enseignant& anE2)
{
 return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const Enseignant& anE)
{
 anE.display(os);
 return os;
}

//--
void Enseignant::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 Personne::display(os);

 // ### : Affichage des attributs de la classe Enseignant
 // Exemple : os << _at;
}

//--
bool Enseignant::isEqualTo(const Enseignant& anE) const
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Enseignant
 // Exemple : if (_at != anE._at) return false;

 if (!(Personne::isEqualTo(anE))) return false;
 return true;
}

//--
void Enseignant::_copy(const Enseignant& anE)
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Enseignant
 // Exemple : _at = anE._at;
}

//--
void Enseignant::_destroy(void)
{
 // ### : Destruction des attributs de la classe Enseignant
 // Exemple : delete _at;
}

