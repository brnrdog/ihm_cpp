                   // Fichier genere avec ./genere Personne
#include "Personne.h"

//--
Personne::Personne(char* nom, char* prenom, int annee) {
  _nom = nom;
  _prenom = prenom;
  _anneeNaissance = annee;
}

//--
Personne::Personne( /* ### */ )
{
}

//--
Personne::Personne(const Personne& aP)
{
 _copy(aP);
}

//--
Personne& Personne::operator=(const Personne& aP)
{
 if (this != &aP)
 {
  _destroy();
  _copy(aP);
 }
 return *this;
}

//--
Personne::~Personne(void)
{
 _destroy();
}

//--
bool operator==(const Personne& aP1, const Personne& aP2)
{
 return aP1.isEqualTo(aP2);
}

//--
bool operator!=(const Personne& aP1, const Personne& aP2)
{
 return !(aP1==aP2);
}

bool operator<(Personne& p1, Personne& p2) {
  if(strcmp(p1.getNom(), p2.getNom()) < 0)
  {
    return true;
  } else {
    return false;
  }
}

//--
ostream& operator<<(ostream& os, const Personne& aP)
{
 aP.display(os);
 return os;
}

//--
istream& operator>>(istream& is, Personne& aP)
{
  aP.input(is);
  return is;
}

void Personne::input(istream& is)
{
  char ch[20];
  cout << "Please, enter the name:" << endl;
  is >> ch;
  if (_prenom != NULL) delete _prenom;
  _prenom = new char[strlen(ch)+1];
  strcpy(_prenom, ch);
  cout << "Please, enter the lastname:" << endl;
  is >> ch;
  if (_nom != NULL) delete _nom;
  _nom = new char[strlen(ch)+1];
  strcpy(_nom, ch);
  cout << "Please, enter the birthday:" << endl;
  is >> _anneeNaissance;
}

//--
void Personne::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe Personne
 // Exemple : os << _at;
 os << _nom << " " << _prenom << endl;
 os << "NAISSANCE: " << _anneeNaissance << endl;
}

//--
bool Personne::isEqualTo(const Personne& aP) const
{
 (void)aP; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Personne
 // Exemple : if (_at != aP._at) return false;
 if((_nom == aP._nom) && (_prenom == aP._prenom))
 {
   return true;
 }
 else
 {
   return false;
 }
}

//--
void Personne::_copy(const Personne& aP)
{
 (void)aP; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Personne
 // Exemple : _at = aP._at;
}

//--
void Personne::_destroy(void)
{
 // ### : Destruction des attributs de la classe Personne
 // Exemple : delete _at;
}

void Personne::setNom(char* nom) {
  _nom = nom;
}

void Personne::setPrenom(char* prenom) {
  _prenom = prenom;
}

void Personne::setAnneeNaissance(int annee) {
  _anneeNaissance = annee;
}

char* Personne::getNom() {
  return _nom;
}

char* Personne::getPrenom() {
  return _prenom;
}

int Personne::getAnneeNaissance() {
  return _anneeNaissance;
}
