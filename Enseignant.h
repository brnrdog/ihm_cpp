                   // Fichier genere avec ./genere Enseignant
#ifndef _ENSEIGNANT_H_
#define _ENSEIGNANT_H_

#include <iostream>

#include "Personne.h"

using namespace std;

class Enseignant : public Personne
{
   friend ostream& operator<<(ostream& os, const Enseignant& anE);

 public :

   // Allocateurs/Desallocateurs

            Enseignant( /* ### */ );
            Enseignant(const Enseignant& anE);
            Enseignant& operator=(const Enseignant& anE);
   virtual ~Enseignant(void);
   Enseignant(char* nom, char* prenom, int annee, int cm, int td);

   // Comparaisons

   friend  bool operator==(const Enseignant& anE1, const Enseignant& anE2);
   friend  bool operator!=(const Enseignant& anE1, const Enseignant& anE2);

   // Inspecteurs/modificateurs
   void setCM(int cm);
   void setTD(int td);

   int getCM();
   int getTD();

   int getETD();

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
   virtual bool isEqualTo(const Enseignant& anE) const;

 protected :

             // ###

 private :

             // ###

 private :
  int _cm, _td;
   // Methodes privees d'allocation/desallocation

   void _copy(const Enseignant& anE);
   void _destroy(void);
};

#endif // _ENSEIGNANT_H_
