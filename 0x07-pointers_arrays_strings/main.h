#ifndef MAIN_H 
#define MAIN_H 

/** 
 * file - main.h 
 * header - this is the header file containing the prototypes
 */ 

int_putchar(char c); 
char *_memset(char *s, char b, unsigned int n); 
char *_strchr(char *s, char c); 
unsigned int _strspn(char *s, char *accept); 
char *_strpbrk(char *s, char *accept); 
char *_strstr(char *haystack, char *needle); 
void print_chessboard(char (*a)[8]); 
void print_diagsums(int *a, int size); 
void *_memset(void *s, int c, size_t n); 

#endif
