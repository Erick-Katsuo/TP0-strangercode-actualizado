#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main(){
	comenzar_enfrentamiento();
	
	int animo = recibir_animo();

	printf("Animo recibido: %i", animo);

	return 0;
}


