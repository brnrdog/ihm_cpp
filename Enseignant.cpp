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
Enseignant::Enseignant(char* nom, char* prenom, int annee, int cm, int td) : Personne(nom, prenom, annee)
{
  _cm = cm;
  _td = td;
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
 os << (_cm*1.5 + _td);
 os << "\n";
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

void Enseignant::setCM(int cm)
{
  _cm = cm;
}

void Enseignant::setTD(int td)
{
  _td = td;
}

int Enseignant::getCM()
{
  return _cm;
}

int Enseignant::getTD()
{
  return _td;
}

int Enseignant::getETD()
{
  return (_cm*1.5 + _td);
}
