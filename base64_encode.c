#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){const unsigned char s[]="Hello, base64!";static const char table[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";size_t n=strlen((const char*)s);for(size_t i=0;i<n;i+=3){uint32_t v=((uint32_t)s[i]<<16)|((i+1<n?s[i+1]:0)<<8)|(i+2<n?s[i+2]:0);putchar(table[(v>>18)&63]);putchar(table[(v>>12)&63]);putchar(i+1<n?table[(v>>6)&63]:'=');putchar(i+2<n?table[v&63]:'=');}putchar('\n');return 0;}
