#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {	
	int var1 = atoi(argv[1]);
	float var2 = atof(argv[2]);
	printf ("INT type:\n");
	printf("var1 = %d\n",var1);
	printf("var1^2 = %d\n",var1*var1);
	printf ("FLOAT type:\n");
	printf("var2 = %f\n",var2);
	printf("var2^2 = %f\n",var2*var2);	
	return 0;
}