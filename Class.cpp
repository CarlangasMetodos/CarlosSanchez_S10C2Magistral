#include <iostream>
using namespace std;


class Balon {
public:
	
	float y;
	float Vy;
	float m;
	Balon(float y0, float Vy0,float m0);
	float Fy;	
	void calculaFuerza(float g);
	void muevete(float dt);
};		
	
Balon:: Balon(float y0, float Vy0,float m0){
	y=y0;
	Vy=Vy0;
	m=m0;
}

void Balon::calculaFuerza(float g){
	Fy=-m*g;
}

void Balon::muevete(float dt){
	y+=Vy*dt;
	Vy+=dt*Fy/m;
}


int main() {

float g=9.8;
Balon pelota(1.0,4.0,0.453);


int i=0;
float dt=0.01;
pelota.calculaFuerza(g);

while(pelota.y>=0){
float t=dt*i;
pelota.muevete(dt);
cout<< t<<","<<pelota.y<<"\n";
i++;
}

return 0;
}

