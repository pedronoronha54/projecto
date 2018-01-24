#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	printf("               Programação               \n\n               Trabalho prático nº2               \n\n Lucro Monetário obtido com o transporte de mercadorias");
	printf("A aplicação irá gerar as coordenadas das várias localizações, retribuindo as distâncias a percorrer \n");
	printf("A aplicação irá gerar, ainda, a carga a transportar em casa etapa da viagem");
	
	int correraplicacao=1;
	while (correraplicacao==1) {
		
		
		
		
}

}
int gerardados(){
	int distancia=0;
	while (distancia<=0 || distancia>3400){
		x=rand()%3401;
		y=rand()%3401;
		distancia=sqrt((x)^2+(y)^2);
	}
	carga=rand()&1600;
}
int calculartempo(int distancia){
	int tempo=0;
	switch (distancia){
		case distancia<1000:
		tempo=15;
		break;
		case distancia<2000:
		tempo=25;
		break;
		case distancia<3000:
		tempo=35;
		break;
		case distancia<4000:
		tempo=45;
		break;
		default:
			break;
	}
}
int calcularvelocidademedia(int tempo, int distancia){
	int velocidade=distancia/tempo;
}
int calcularconsumo(int velocidade, int carga){
	int consumo=velocidade*0.5+carga*0.4;
}
int calculargastos(int consumo){
	int gastos=0;
	switch (consumo){
		case consumo<200:
		gastos=7500;
		break;
		case consumo<400:
		gastos=11500;
		break;
		case consumo<600:
		gastos=13500;
		break;
		case consumo<800:
		gastos=15500;
		break;
		default:
			break;
	}
}
int calcularganho(int carga){
	int ganho=0;
	switch (carga){
		case carga<500:
		ganho=55;
		break;
		case carga<700:
		ganho=65;
		break;
		case carga<900:
		ganho=75;
		break;
		case carga<1200:
		ganho=80;
		break;
		case carga<1600:
		ganho=85;
		break;
		default:
			break;
	}
}
int lucro(int gastos, int ganho){
	int lucro=ganho-gastos;
}
