/*
 * File:   Programa_principal.c
 * Author: Wels
 *
 * Created on 22 de diciembre de 2020, 08:17 PM
 */

#include <xc.h>
#include "Configuracion.h"
#include "Int_Libreria.h"

void main(void) {
    TRISD = 0x00;
    INT_Init();
    while(1){
        LATDbits.LATD2 = ~LATDbits.LATD2;
        __delay_ms(500);
    }
    return;
}
