#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int main(void){int a[]={3,7,8,12,19,25},lo=0,hi=5,target=19,r=-1;while(lo<=hi){int m=(lo+hi)/2;if(a[m]==target){r=m;break;}if(a[m]<target)lo=m+1;else hi=m-1;}printf("index=%d\n",r);return 0;}
