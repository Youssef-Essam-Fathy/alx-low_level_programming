#ifndef MYMAIN_H
#define MYMAIN_H

#include <stdio.h>
#include <limits.h>

/* _putchar.c prototype */
int _putchar(char c);

/* 0-binary_to_uint.c prototype */
unsigned int binary_to_uint(const char *b);

/* 1-print_binary.c prototype */
void print_binary(unsigned long int n);

/* 2-get_bit.c prototype */
int get_bit(unsigned long int n, unsigned int index);

/* 3-set_bit.c prototype */
int set_bit(unsigned long int *n, unsigned int index);

/* 4-clear_bit.c prototype */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5-flip_bits.c prototype */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* 100-get_endianness.c prototype */
int get_endianness(void);

#endif /* MYMAIN_H */

