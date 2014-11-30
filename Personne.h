                   // Fichier genere avec ./genere Personne
#ifndef _PERSONNE_H_
#define _PERSONNE_H_

#include <iostream>

using namespace std;

class Personne
{
   friend ostream& operator<<(ostream& os, const Personne& aP);

 public :

   // Allocateurs/Desallocateurs

            Personne( /* ### */ );
            Personne(const Personne& aP);
            Personne& operator=(const Personne& aP);
   virtual ~Personne(void);

   // Comparaisons

   friend  bool operator==(const Personne& aP1, const Personne& aP2);
   friend  bool operator!=(const Personne& aP1, const Personne& aP2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
   virtual bool isEqualTo(const Personne& aP) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Personne& aP);
   void _destroy(void);

   // Attributes
   char* nom, prenom;
   int anneNaissance;
};

#endif // _PERSONNE_H_
