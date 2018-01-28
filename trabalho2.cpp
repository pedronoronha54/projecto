#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

void gerardados(int* dados){
  // primeiro 4 valores - carga, ultimos 4 - distancia
    for (int i=0;i<8;i++){
    if (i<4){
      dados[i]=(rand()%1600)+1;
    } 
  else {
      dados[i]=(rand()%3400)+1;
    }
  }  
}

int calculartempo(int distancia){
  if (distancia < 1000){
    return 15;
  } 
  else if (distancia < 2000){
    return 25;
  } 
  else if (distancia < 3000){
    return 35;
  } 
  else if (distancia < 4000){
    return 45;
  }
}

int calcularvelocidademedia(int tempo, int distancia){
  int velocidade=distancia/tempo;
  return velocidade;
}

int calcularconsumo(int velocidade, int carga){
  int consumo=velocidade*0.5+carga*0.4;
  return consumo;
}

int calculargastos(int consumo){
  if (consumo<200){
    return 7500;
  } 
  else if (consumo<400){
    return 11500;
  } 
  else if (consumo<600){
    return 13500;
  } 
  else if (consumo<800){
    return 15500;
  }
}

int calcularganho(int carga){
  if (carga<500){
    return (55*carga);
  } 
  else if (carga<700){
    return (65*carga);
  } 
  else if (carga<900){
    return (75*carga);
  } 
  else if (carga<1200){
    return (80*carga);
  } 
  else if (carga<1500) {
    return (85*carga);
  }
  else if (carga<1600) {
    return (90*carga);
  }
}

int calcularlucro(int gastos, int ganho){
  int lucro=ganho-gastos;
  return lucro;
}


int main() {
  
  setlocale(LC_ALL, "Portuguese");
  
  printf("                                                                                                Programação\n\n                                                                                            Trabalho prático nº2 \n\n                                                                           Lucro Monetário obtido com o transporte de mercadorias \n\n");
  printf("A aplicação irá gerar as coordenadas das várias localizações, retribuindo as distâncias a percorrer. \n\n");
  printf("A aplicaçãoo irá gerar, ainda, a carga a transportar em casa etapa da viagem. \n\n");
  printf("Apartir dos valores gerados, a aplicação calcula os valores pretendidos. \n\nOs valores referentes às etapas da viagem são apresentadas sob a forma de matriz, com 4 linhas, onde a primeira linha corresponde à primeira etapa, e por ai adiante. \n\n ");
  
  int correraplicacao=1;
  
  while (correraplicacao==1) {
    
  int dados[8]; gerardados(dados);
    int velocidademedia=0;
    
    int cargas[4];
    int distancias[4];
    int tempos[4];
    int velocidades[4];
    int consumos[4];
    int gastos[4];
    int ganhos[4];
    int lucros[4];
    int visualizar=0;
    
    int cargatotal=0, distanciatotal=0, tempototal=0, velocidadetotal=0, consumototal=0, gastototal=0, ganhototal=0, lucrototal=0;
  
    for (int i=0;i<4;i++) {
        cargas[i]=dados[i];
        cargatotal+=cargas[i];
        distancias[i]=dados[i+4];
        distanciatotal+=distancias[i];
        tempos[i]=calculartempo(distancias[i]);
        tempototal+=tempos[i];
        velocidades[i]=calcularvelocidademedia(tempos[i], distancias[i]);
        velocidadetotal+=velocidades[i];
        velocidademedia=(distanciatotal/tempototal);
        consumos[i]=calcularconsumo(velocidades[i], cargas[i]);
        consumototal+=consumos[i];
        gastos[i]=calculargastos(consumos[i]);
        gastototal+=gastos[i];
        ganhos[i]=calcularganho(cargas[i]);
        ganhototal+=ganhos[i];
        lucros[i]=calcularlucro(gastos[i], ganhos[i]);
        lucrototal+=lucros[i];
    }
    
  int lerdados=1;
  while (lerdados==1){
    printf("Deve pressionar um dos números de seguida indicados, de maneira a prosseguir: \n\n 1 - Cargas a transportar em cada etapa \n\n 2 - Distancias de cada etapa da viagem \n\n 3 - Tempo de cada etapa da viagem \n\n 4 - Velocidade media em cada etapa da viagem \n\n 5 - Consumo de combustivel em cada etapa da viagem \n\n\ 6 - Gastos em cada etapa da viagem \n\n 7 - Ganhos em cada etapa da viagem \n\n 8 - Lucro em cada etapa da viagem \n\n 9 - Carga total transportada \n\n 10 - Distancia total percorrida \n\n 11 - Tempo total da viagem \n\n 12 - Velocidade media da viagem \n\n 13 - Consumo total de combustivel \n\n 14 - Gasto total da viagem \n\n 15 - Ganho total da viagem \n\n 16 - Lucro total da viagem \n\n 17 - Caso pretenda reiniciar a aplicação \n\n 18 - Caso pretenda fechar a aplicação \n\n");
    scanf("%d",&visualizar);
    if (visualizar==16){
        printf(" O lucro total da viagem é: %d \n\n",lucrototal );
    }
    else if (visualizar==15){
        printf(" O ganho total na viagem é: %d \n\n",ganhototal );
    }
    else if (visualizar==14){
        printf(" O gasto total na viagem é: %d \n\n",gastototal );
	}
	else if (visualizar==13){
        printf(" O consumo de combustivel total na viagem é: %d \n\n",consumototal );
	}
    else if (visualizar==12){
        velocidademedia=(distanciatotal/tempototal);
        printf(" A velocidade média atingida na viagem é: %d \n\n",velocidademedia );
    }
    else if (visualizar==11){
        printf(" O tempo decorrido na viagem é: %d \n\n",tempototal );
    }
    else if (visualizar==10){
        printf(" A distancia total percorrida é: %d \n\n",distanciatotal );
    }
    else if (visualizar==9){
        printf(" A carga total transportada é: %d \n\n",cargatotal );
    }
    for (int i=0;i<4;i++) {
        if (visualizar==1){
          printf(" A carga transportada nesta etapa é: %d \n\n",cargas[i] );
        }
        else if (visualizar==2){
          printf(" A distancia percorrida nesta etapa é: %d \n\n",distancias[i] );
        }
        else if (visualizar==3){
          printf(" O tempo decorrido nesta etapa é: %d \n\n",tempos[i] );
        }
        else if (visualizar==4){
          printf(" A velocidade média atingida nesta etapa é: %d \n\n",velocidades[i] );
        }
        else if (visualizar==5){
          consumos[i]=calcularconsumo(velocidades[i], cargas[i]);
        }
        else if (visualizar==6){
          gastos[i]=calculargastos(consumos[i]);
        }
        else if (visualizar==7){
          ganhos[i]=calcularganho(cargas[i]);
        }
        else if (visualizar==8){
          lucros[i]=calcularlucro(gastos[i], ganhos[i]);
        }
        else if (visualizar==17){
		  lerdados=0;
          correraplicacao=1;
    	}
    	else if (visualizar==18){
          lerdados=0;
          correraplicacao=0;
    	}
      }
  }
  }
}
