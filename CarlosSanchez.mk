Grafica.png:Balondatos.dat plots.py 
	python plots.py

Balondatos.dat:a.out
	./a.out > Balondatos.dat

a.out:Class.cpp
	g++ Class.cpp

