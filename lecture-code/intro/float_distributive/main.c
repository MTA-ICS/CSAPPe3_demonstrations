#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Violation of distributivity*/
int main(int argc, char *argv[]) {
	
	double var1 = atof(argv[1]);	
	
	printf ("double type:\n");
	printf("var1 = %.2f\n",var1);
	printf("(%.0e+%.0e)+%.2f = %.2f\n",1e50, -1e50, var1, (1e50+ -1e50)+ var1);	
	printf("%.1e +(%.1e+%.2f)= %.2f\n",1e50, -1e50, var1, (1e50+ -1e50)+ var1);	
	return 0;
}