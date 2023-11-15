#ifndef HEADER_H
/**"#ifndef MAIN_H"*/
#define HEADER_H
/**"#define MAIN_H"*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
/**"#define BUFF_SIZE 1024"*/
#define TOTAL_SIZE 1024

/* flagged */
/**"#define F_MINUS 1"*/
#define F_NEGATIVE 1

/**"#define F_PLUS 2"*/
#define F_POSITIVE 2

/**"#define F_ZERO 4"*/
#define F_ZEROT 4

/*"#define F_HASH 8"*/
#define F_HASHES 8

/*"#define F_SPACE 16"*/
#define F_ACE_B 16

/* sizes */
/**"#define S_LONG 2"*/
#define S_LONG 2

/**"#define S_SHORT 1"*/
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

#endif
