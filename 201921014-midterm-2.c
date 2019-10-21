#include <stdio.h>

int main(){
	int i;
	int * pi = &i;
	for (i = 1; i <= 1000; (*pi)++){
		printf("%d", i);
		if(i%10 = 0){
			printf("\n");
		}
	}
}
