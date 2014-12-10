                   // Fichier genere avec ./genere TabPersonne
#include "TabPersonne.h"

//--
TabPersonne::TabPersonne( /* ### */ )
{
  _N = 0;
}

//--
TabPersonne::TabPersonne(const TabPersonne& aT)
{
 _copy(aT);
}

//--
TabPersonne& TabPersonne::operator=(const TabPersonne& aT)
{
 if (this != &aT)
 {
  _destroy();
  _copy(aT);
 }
 return *this;
}

//--
TabPersonne::~TabPersonne(void)
{
 _destroy();
}

//--
bool operator==(const TabPersonne& aT1, const TabPersonne& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const TabPersonne& aT1, const TabPersonne& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const TabPersonne& aT)
{
 aT.display(os);
 return os;
}

//--
void TabPersonne::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe TabPersonne
 // Exemple : os << _at;
 for (int i = 0; i < _N; ++i)
 {
   os << *(_tab[i]) << endl;
 }
}

//--
bool TabPersonne::isEqualTo(const TabPersonne& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe TabPersonne
 // Exemple : if (_at != aT._at) return false;
 return true;
}

//--
void TabPersonne::_copy(const TabPersonne& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe TabPersonne
 // Exemple : _at = aT._at;
}

//--
void TabPersonne::_destroy(void)
{
 // ### : Destruction des attributs de la classe TabPersonne
 // Exemple : delete _at;
}

void TabPersonne::ajouterPersonne(Personne *p)
{
  _tab[_N] = p;
  _N++;
}

void TabPersonne::sorter()
{
  int i, fin;
  Personne *tmp;
  bool echange;
  fin = _N -1;
  do
  {
    echange = false;
    for (int i = 0; i < fin; ++i)
    {
      if (!(*_tab[i] < *_tab[i+1]))
      {
        tmp = _tab[i];
        _tab[i] = _tab[i+1];
        _tab[i+1] = tmp;
        echange = true;
      }
    }
    fin--;
  } while (echange);
}
