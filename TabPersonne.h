                   // Fichier genere avec ./genere TabPersonne
#ifndef _TABPERSONNE_H_
#define _TABPERSONNE_H_

#include <iostream>
#include "Personne.h"

using namespace std;

class TabPersonne
{
   friend ostream& operator<<(ostream& os, const TabPersonne& aT);

 public :

   // Allocateurs/Desallocateurs

            TabPersonne( /* ### */ );
            TabPersonne(const TabPersonne& aT);
            TabPersonne& operator=(const TabPersonne& aT);
   virtual ~TabPersonne(void);

   TabPersonne(Personne *tab[]);

   // Comparaisons

   friend  bool operator==(const TabPersonne& aT1, const TabPersonne& aT2);
   friend  bool operator!=(const TabPersonne& aT1, const TabPersonne& aT2);

   // Inspecteurs/modificateurs
   void ajouterPersonne(Personne *p);

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
   virtual bool isEqualTo(const TabPersonne& aT) const;

 protected :

             // ###

 private :

             // ###

 private :

  // Attributes
  Personne *_tab[20];

   // Methodes privees d'allocation/desallocation

   void _copy(const TabPersonne& aT);
   void _destroy(void);
};

#endif // _TABPERSONNE_H_
