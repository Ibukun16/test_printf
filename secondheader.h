#ifndef HEADER_H
#define HEADER_H
#include "header.h"
#include <stdarg.h>

/* Functions to print numbers */
int prnt_integer(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_bnry(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_unsigned(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int print_octal(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_hexdecml(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_hex_upp(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

int prnt_hex(va_list types, char mapped_to[],
char buffering[], int flagged, char flagged_ch, int gt_width, int gt_precision, int gt_size);

/* Function to print non printable characters */
int prnt_none_prntble(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

/* Funcion to print memory address */
int prnt_ptr(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

/* Funciotns to handle other specifiers */
int get_flagged(const char *format, int *i);
int get_widths(const char *format, int *i, va_list list);
int get_precisions(const char *format, int *i, va_list list);
int get_sizes(const char *format, int *i);

/*Function to print string in reverse*/
int prnt_rev(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

/*Function to print a string in rot 13*/
int prnt_rot13strn(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

/* width handler */
int handle_rite_cha(char c, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int rite_num(int isit_positive, int index, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int write_number(int index, char bff[], int flagged, int gt_width, int gt_precision,
	int gt_length, char padd, char extra_c);
int write_pointer(char buffering[], int index, int gt_length,
	int gt_width, int flagged, char padd, char extra_c, int padd_start);

int write_unsgnd(int isit_negative, int index,
char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

/*** UTILS ***/
int isit_prntable(char);
int appnd_hex_kode(char, char[], int);
int isit_digit(char);

long int cnvrt_siz_num(long int numb, int size);
long int cnvrt_siz_unsgnd(unsigned long int numb, int size);

#endif /** HEADER_H */
