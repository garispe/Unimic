/* 
 * File:   unmc_keypad_01.h
 * Author: Martín Rodríguez
 *
 * Created on September 15, 2015, 8:42 PM
 */

#define ROW_1    LATAbits.LATA0	// rosa
#define ROW_2    LATAbits.LATA1	// azul
#define ROW_3    LATAbits.LATA2	// rojo
#define ROW_4    LATAbits.LATA3	// marron

#define COL_1    PORTAbits.RA5	// violeta
#define COL_2    PORTAbits.RA7	// negro
#define COL_3    PORTAbits.RA6	// blanco
#define COL_4    PORTCbits.RC2	// verde

char getPressed() {

    char key = ' ';

    ROW_1 = 1;
    if (COL_1 == 1) key = '1';
    if (COL_2 == 1) key = '2';
    if (COL_3 == 1) key = '3';
    if (COL_4 == 1) key = 'A';
    ROW_1 = 0;

    ROW_2 = 1;
    if (COL_1 == 1) key = '4';
    if (COL_2 == 1) key = '5';
    if (COL_3 == 1) key = '6';
    if (COL_4 == 1) key = 'B';
    ROW_2 = 0;

    ROW_3 = 1;
    if (COL_1 == 1) key = '7';
    if (COL_2 == 1) key = '8';
    if (COL_3 == 1) key = '9';
    if (COL_4 == 1) key = 'C';
    ROW_3 = 0;

    ROW_4 = 1;
    if (COL_1 == 1) key = '*';
    if (COL_2 == 1) key = '0';
    if (COL_3 == 1) key = '#';
    if (COL_4 == 1) key = 'D';
    ROW_4 = 0;

    return key;
}
