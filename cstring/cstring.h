#ifndef CSTRING_H
#define CSTRING_H

char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *str1, const char *str2);
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
int strlen(const char *str);

#endif /* CSTRING_H */

