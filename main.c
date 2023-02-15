#include <stdio.h>

int main() {
	    int x, y, z;                 // variabili per memorizzare tre interi
		int massimo;               // il massimo fra i tre
		
		/* INPUT */
		printf("Caro utente introduci tre interi!\n");
		scanf("%d%d%d", &x, &y, &z);
		
		/* CALCOLA IL MASSIMO */
		
		massimo = x;
		
		if(y>massimo)
			    massimo = y;      // adesso massimo e' il massimo fra x ed y
				
		if(z>massimo)
			    massimo = z;
		
		/* OUTPUT */
		printf("Il massimo valore e' %d\n", massimo);
}
