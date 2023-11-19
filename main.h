#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stdio.h>
#include <stdarg.h>
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
 * struct smat - The program that shows Struct operations
 * @smat: The format.
 * @fn: The function associated.
 */

struct smat
{
        char smat;
        int (*fn)(va_list, char[], int, int, int, int);
}

/**
 * typedef struct smat fmat_t - Struct op
 * @smat: The format.
 * @fmat_t: The function associated.
 */

typedef struct smat fmat_t;

int _strlen(char *s);
int _printf(const char *format, ...);
int handle_print(const char *smat, int *i,
va_list list_it, char buffering[], int flagged, int gt_width, int gt_precision, int gt_size);

/*** FUNCTION ***/

/* Funtions to print chars and strings */
int prnt_cha(va_list types, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_strn(va_list types, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
int prnt_percnt(va_list types, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
/*Function to print string in reverse*/
int prnt_rev(va_list types, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);

/*Function to print a string in rot 13*/
int prnt_rot13strn(va_list types, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);

/* width handler */
int handle_rght_cha(char c, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
int rght_num(int isit_positive, int index, char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
int write_number(int index, char bff[], int flagged, int gt_width, int gt_precision,
        int gt_length, char padd, char extra_c);
int write_pointer(char buffering[], int index, int gt_length,
        int gt_width, int flagged, char padd, char extra_c, int padd_start);

int write_unsgnd(int isit_negative, int index,
char buffering[],
        int flagged, int gt_width, int gt_precision, int gt_size);
/*** UTILS ***/
int chk_if_prntable(char);
int appnd_hex_kode(char, char[], int);
int isit_digit(char);

long int cnvrt_siz_num(long int numb, int size);
long int cnvrt_siz_unsgnd(unsigned long int numb, int size);

#endif /** MAIN_HEADER_FILE **/
