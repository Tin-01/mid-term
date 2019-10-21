#include <stdio.h>


void swap(int *pa, int *pb){
	int temp;
	temp = *pa;
	*pa = *pb;
	*pa = temp;	
}


int main(){
	int a1, a2;
	a1 = 10;
	a2 = 20;
	swap(&a1, &a2);
}

