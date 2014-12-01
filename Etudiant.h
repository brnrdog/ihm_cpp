                   // Fichier genere avec ./genere Etudiant
#ifndef _ETUDIANT_H_
#define _ETUDIANT_H_

#include <iostream>

#include "Personne.h"

using namespace std;

class Etudiant : public Personne
{
   friend ostream& operator<<(ostream& os, const Etudiant& anE);

 public :

   // Allocateurs/Desallocateurs
            Etudiant( /* ### */ );
            Etudiant(const Etudiant& anE);
            Etudiant& operator=(const Etudiant& anE);
   virtual ~Etudiant(void);
   Etudiant(char* nom, char* prenom, int annee, float n1, float n2);

   // Comparaisons

   friend  bool operator==(const Etudiant& anE1, const Etudiant& anE2);
   friend  bool operator!=(const Etudiant& anE1, const Etudiant& anE2);

   // Inspecteurs/modificateurs
   void setNote1(float n1);
   void setNote2(float n2);

   float getNote1();
   float getNote2();

   float moyenne();

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
   virtual bool isEqualTo(const Etudiant& anE) const;

 protected :

             // ###

 private :

             // ###

 private :

  // Attributes
  float _note1, _note2;

   // Methodes privees d'allocation/desallocation

   void _copy(const Etudiant& anE);
   void _destroy(void);
};

#endif // _ETUDIANT_H_
