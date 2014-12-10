zootester: zootester.o animal.o cat.o cow.o
	g++ -o zootester zootester.o animal.o cat.o cow.o
	
zootester.o: zootester.cpp animal.h cow.h cat.h
	g++ -c -std=c++11 -o zootester.o zootester.cpp
	
animal.o: animal.cpp animal.h
	g++ -c -std=c++11 -o animal.o animal.cpp
	
cat.o: cat.cpp cat.h animal.h
	g++ -c -std=c++11 -o cat.o cat.cpp
	
cow.o: cow.cpp cow.h animal.h
	g++ -c -std=c++11 -o cow.o cow.cpp