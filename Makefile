all: genere personne.o main.o personne

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

personne: main.cpp personne.o
	g++ main.o personne.o -o personne
