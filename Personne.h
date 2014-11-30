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
            Personne(char* nom, char* prenom, int annee);
   virtual ~Personne(void);

   // Comparaisons

   friend  bool operator==(const Personne& aP1, const Personne& aP2);
   friend  bool operator!=(const Personne& aP1, const Personne& aP2);
   friend  bool operator>(Personne& aP1, Personne& aP2);
   friend  bool operator<(Personne& aP1, Personne& aP2);

   // Inspecteurs/modificateurs
   void setNom(char* nom);
   void setPrenom(char* prenom);
   void setAnneeNaissance(int annee);

   char* getNom();
   char* getPrenom();
   int getAnneeNaissance();

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
   char* _nom;
   char* _prenom;
   int _anneeNaissance;
};

#endif // _PERSONNE_H_
