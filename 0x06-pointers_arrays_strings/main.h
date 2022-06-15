#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Abinet Tesfu
 * Desc: Header file containing declarations for all functions
 *
 */
int main(void);
int _putchar(char);
int _strlen(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *x);
char *cap_string(char *x);
char *leet(char *x);
char *rot13(char *x);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif