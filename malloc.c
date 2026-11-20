#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(){
	int *a = malloc(sizeof(int) * 0x10);
	if (a == NULL) {
		return 1;
	}
	memset(a, 0, sizeof(int) * 0x10);
	*(a) = 0;
	*(a+1) = 1;
	*(a+2) = 2;
	//printf("%ls\n" , a);
	for(int i = 0;i < 3;i++){
		printf("%d\n" , *(a+i));
	}
	free(a);



	return 0;
}
