#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(){
	char *end;
	errno = 0;
	char input[40];
	scanf("%s" , input);
	double x = strtod(input, &end);

	if (end == input) {
	    // 沒有轉換到任何數字
	}

	if (*end != '\0') {
	    // 字串沒被完整吃完
	}

	if (errno == ERANGE) {
	    // overflow / underflow
	}
	printf("%lf" , x);
}
