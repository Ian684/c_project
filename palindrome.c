#include <stdio.h>
#include <string.h>
int main(void){char s[128];if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\n")]=0;size_t n=strlen(s);for(size_t i=0;i<n/2;i++)if(s[i]!=s[n-1-i]){puts("no");return 0;}puts("yes");return 0;}
