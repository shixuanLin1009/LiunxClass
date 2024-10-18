#include "../include/reverse.h"
#include <stddef.h>  // Include this for NULL

char *reverse(char *dest, const char *src) 
{
    // Check for null pointers
    if (dest == NULL || src == NULL) {
        return NULL;
    }

    // Calculate the length of the source string
    const char *ptr = src;
    int len = 0;
    while (*ptr != '\0') {
        len++;
        ptr++;  // Add missing semicolon here
    }

    // Reverse the string
    for (int i = 0; i < len; i++) {
        dest[i] = src[len - 1 - i];
    }
    
    // Null-terminate the destination string
    dest[len] = '\0';

    return dest;
}

