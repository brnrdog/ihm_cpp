                   // Fichier genere avec ./genere Chercheur
#include "Chercheur.h"

//--
Chercheur::Chercheur( /* ### */ ) : Personne( /* ### */ )
{
}

//--
Chercheur::Chercheur(const Chercheur& aC) : Personne(aC)
{
 _copy(aC);
}

//--
Chercheur& Chercheur::operator=(const Chercheur& aC)
{
 if (this != &aC)
 {
  Personne::operator=(aC);
  _destroy();
  _copy(aC);
 }
 return *this;
}

//--
Chercheur::~Chercheur(void)
{
 _destroy();
}

//--
bool operator==(const Chercheur& aC1, const Chercheur& aC2)
{
 return aC1.isEqualTo(aC2);
}

//--
bool operator!=(const Chercheur& aC1, const Chercheur& aC2)
{
 return !(aC1==aC2);
}

//--
ostream& operator<<(ostream& os, const Chercheur& aC)
{
 aC.display(os);
 return os;
}

//--
void Chercheur::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 Personne::display(os);

 // ### : Affichage des attributs de la classe Chercheur
 // Exemple : os << _at;
}

//--
bool Chercheur::isEqualTo(const Chercheur& aC) const
{
 (void)aC; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Chercheur
 // Exemple : if (_at != aC._at) return false;

 if (!(Personne::isEqualTo(aC))) return false;
 return true;
}

//--
void Chercheur::_copy(const Chercheur& aC)
{
 (void)aC; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Chercheur
 // Exemple : _at = aC._at;
}

//--
void Chercheur::_destroy(void)
{
 // ### : Destruction des attributs de la classe Chercheur
 // Exemple : delete _at;
}

