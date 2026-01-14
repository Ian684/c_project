#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double a , c;
	char b;
	scanf("%lf %c %lf" , &a , &b , &c);
	if(b == '+'){
		printf("%f" , a + c);
	
	}
	else if(b == '-'){
		printf("%f" , a - c);
	
	}
	else if(b == '*'){
		printf("%f" , a * c);
	
	}
	else if(b == '/'){
		printf("%f" , a / c);
	
	}
	return 0;
}
