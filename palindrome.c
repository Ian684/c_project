#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){const char*s="racecar";size_t lo=0,hi=strlen(s)-1;while(lo<hi&&s[lo]==s[hi]){++lo;--hi;}printf("%s is %s\n",s,lo>=hi?"a palindrome":"not a palindrome");return 0;}
