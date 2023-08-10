#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define NUM_array 2048
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void show_square(int max){
	int x;
    for (x = 5; x <= max; x*=10)
		printf("x = %d x^2 = %d\n", x, x*x);
}
void copyij(int dst[NUM_array][NUM_array], int src[NUM_array][NUM_array]){
	long int i,j;
	for (i = 0;i<NUM_array;i++)
		for (j=0;j<NUM_array;j++)
			dst[i][j] = src[i][j];
	
}
void copyji(int dst[NUM_array][NUM_array], int src[NUM_array][NUM_array]){
	long int i,j;
	for (j = 0;j<NUM_array;j++)
		for (i = 0;i<NUM_array;i++)
			dst[i][j] = src[i][j];	
}
int main(int argc, char *argv[]) {
	// int dst[NUM_array][NUM_array], src[NUM_array][NUM_array];
//	copyji(dst,src);
	// copyij(dst,src);
    int max = atoi(argv[1]);
	show_square(max);
	return 0;
}
