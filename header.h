#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define SIZE_BUF 1024

/** flags **/
/** define F_MINUS 1 **/
#define F_NEGATIVE 1

/** define F_PLUS 2 **/
#define F_POSITIVE 2

/** define F_ZERO **/
#define F_ZEROT 4

/** define F_HASH **/
#define F_HASHES 8

/** define F_SPACE **/
#define FLAG_SPACE_B 16

/** sizes **/
/** define S_LONG **/
#define SIZES_LONG 2

/** define S_SHORT **/
#define SIZES_SHORT 1

/**
 * struct smet - The program that shows Struct op
 * @smet: The format.
 * @fn: The function associated.
 */

struct smet
{
	char smet;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct smet fmt_t - Struct op
 * @smet: The format.
 * @fm_t: The function associated.
 */

typedef struct smet fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *smet, int *i,
va_list list_it, char buffering[], int flagged, int gt_width, int gt_precision, int gt_size);

/*** FUNCTION ***/

/* Funtions to print chars and strings */
int prnt_cha(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_strn(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_percnt(va_list types, char buffering[],
	int flagged, int gt_width, int gt_precision, int gt_size);

#endif
