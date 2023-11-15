#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
/**"#define BUFF_SIZE 1024"*/
#define TOTAL_SIZE 1024

/* flagged */
/**"#define F_MINUS 1"*/
#define FLAG_NEGATIVE 1

/**"#define F_PLUS 2"*/
#define FLAG_POSITIVE 2

/**"#define F_ZERO 4"*/
#define FLAG_ZEROT 4

/*"#define F_HASH 8"*/
#define FLAG_HASHES 8

/*"#define F_SPACE 16"*/
#define FLAG_ACE_B 16

/* sizes */
/**"#define S_LONG 2"*/
#define SIZES_LONG 2

/**"#define S_SHORT 1"*/
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
