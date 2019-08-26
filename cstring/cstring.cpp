#include "cstring.h"

char *strcpy(char *dest, const char *src){
    char *start = dest;
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

unsigned int strlen(char *p){
    unsigned int count =0;
    while (*p!='\0'){
        count ++;
        p++;
    }
    return count;
}

int strcmp(char *str1, char *str2){
    while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2){
        str1 ++;
        str2 ++;
    }
    if(*str1 == *str2){
        return 0;
    }
    else if (*str1 - *str2>0){
        return 1;
    }
    else if (*str1 - *str2<0){
        return -1;
    }
    
}

char *strcat(char *dest, const char *src){
    char *start = dest;
    while(*dest !='\0'){
        dest++;
    }
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

char *strchr(char *str, int ch){
    while(*str != '\0'){
        if (*str==ch){
            return str;
        }
        str++;
    }
    char *null=0;
    return null; 
}

char *strrchr(char *str, int ch){
    char *last =str;
    while (*str != '\0'){
        if(*str==ch){
            last=str;
        }
        str++;
    }
    if(*last==ch){
        return last;
    }
    char *null=0;
    return null; 
}