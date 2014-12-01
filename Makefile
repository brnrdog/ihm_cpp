all: genere personne.o etudiant.o enseignant.o main.o main

CCFLAGS=-pedantic -W -Wall -Werror

clear:
	rm -f a.out *.o core *.exe *.exe.stackdump genere
clean:
	rm -f a.out *.o core *.exe *.exe.stackdump genere

genere: genere.cpp
	g++ $(CCFLAGS) genere.cpp -o genere

main.o: main.cpp personne.h
	g++ -c main.cpp

personne.o: Personne.cpp Personne.h
	g++ -c personne.cpp

main: main.cpp personne.o etudiant.o enseignant.o
	g++ main.o personne.o etudiant.o enseignant.o -o main

etudiant.o: Etudiant.h Etudiant.cpp Personne.h
	g++ -c etudiant.cpp

enseignant.o: Enseignant.h Enseignant.cpp Personne.h
	g++ -c enseignant.cpp
