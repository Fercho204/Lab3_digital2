/*
 * UART.h
 *
 *  Víctor Vanegas - 22839 y Fernando Palomo - 22357
 */ 
#ifndef UART_H
#define UART_H

#include <avr/io.h>
#include <stdint.h>

// Variable global del contador
extern int16_t contador;

// Prototipos de funciones UART
void UART_Init(uint32_t baudrate);
void UART_Write(char data);
char UART_Read();
void UART_Write_Text(char *text);

#endif /* UART_H */
