                   // Fichier genere avec ./genere EnsChercheur
#include "EnsChercheur.h"

//--
EnsChercheur::EnsChercheur( /* ### */ ) : Enseignant( /* ### */ ),
                                          Chercheur( /* ### */ )
{
}

//--
EnsChercheur::EnsChercheur(const EnsChercheur& anE) : Enseignant(anE),
                                                      Chercheur(anE)
{
 _copy(anE);
}

//--
EnsChercheur::EnsChercheur(char* nom, char* prenom, int annee, string domaine, int cm, int td)
{
  this->setNom(nom);
  this->setPrenom(prenom);
  this->setAnneeNaissance(annee);
  this->setDomaine(domaine);
  this->setTD(td);
  this->setCM(cm);
}

//--
EnsChercheur& EnsChercheur::operator=(const EnsChercheur& anE)
{
 if (this != &anE)
 {
  Enseignant::operator=(anE);
  Chercheur::operator=(anE);
  _destroy();
  _copy(anE);
 }
 return *this;
}

//--
EnsChercheur::~EnsChercheur(void)
{
 _destroy();
}

//--
bool operator==(const EnsChercheur& anE1, const EnsChercheur& anE2)
{
 return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const EnsChercheur& anE1, const EnsChercheur& anE2)
{
 return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const EnsChercheur& anE)
{
 anE.display(os);
 return os;
}

//--
void EnsChercheur::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 Enseignant::display(os);
 os << "DOMAINE: " << this->getDomaine() << endl;

 // ### : Affichage des attributs de la classe EnsChercheur
 // Exemple : os << _at;
}

//--
bool EnsChercheur::isEqualTo(const EnsChercheur& anE) const
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe EnsChercheur
 // Exemple : if (_at != anE._at) return false;

 if (!(Enseignant::isEqualTo(anE))) return false;
 if (!(Chercheur::isEqualTo(anE))) return false;
 return true;
}

//--
void EnsChercheur::_copy(const EnsChercheur& anE)
{
 (void)anE; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe EnsChercheur
 // Exemple : _at = anE._at;
}

//--
void EnsChercheur::_destroy(void)
{
 // ### : Destruction des attributs de la classe EnsChercheur
 // Exemple : delete _at;
}
