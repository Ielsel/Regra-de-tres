#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float a, b, c, x;
	
	while(true){
		printf("Digite os valores:\n");
		
		printf("Se em... ");
		scanf("%f", &a);
		
		printf("|\n");
		
		printf("Eu tenho... ");
		scanf("%f", &b);
		printf("\n");
		printf("Então em... ");
		scanf("%f", &c);
		printf("|\nX\n");
	
		x = b * c / a;
	
		printf("Eu tenho: %0.1f\n------------------\n", x);
	}
}
