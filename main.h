#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
/** define BUFF_SIZE 1024 **/
#define TOTAL_SIZE 1024

/* flags */
/** define F_MINUS 1**/
#define F_NEGATIVE 1

/** define F_PLUS 2 **/
#define F_POSITIVE 2

/** define F_ZERO **/
#define F_ZEROT 4

/* define F_HASH **/
#define FLAG_HASHES 8

/** define F_SPACE **/
#define FLAG_SPACE_B 16

/** sizes **/
/** define S_LONG **/
#define SIZES_LONG 2

/** define S_SHORT **/
#define SIZES_SHORT 1

int _printf(const char *format, ...);
int putts(char *s);
int _putchar(char c);

#endif /** MAIN_HEADER_FILE **/
