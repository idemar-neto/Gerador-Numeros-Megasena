#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void verficaIgual(int n[], int lim){

int l, o;

	for(o = 0; o < lim-1; o++){
		for(l = 1; l < lim; l++){
	  		if(n[l] == n[o] && l != o){
	  			n[l]= 1 + (rand()%60);
	  			verficaIgual(n, lim);
	  		}
	    }
	}
}

void organizar(int n[], int lim){

int l,o;

	for(o = 0; o < lim; o++){
		for(l = 0; l < lim; l++){
	  		if(n[l] > n[o]){
	    		int z = n[l];
	        	n[l] = n[o];
	        	n[o] = z;
	    	}
		}
	}

}

int main(){

	int lim;

	printf("\nQuantos numeros serao jogados? ");
	scanf("%i",&lim);

	int n[lim];
	//int mega[6] = {17, 20, 22, 35, 41, 42};

	srand(time(NULL));

	char comando = ' ';
	int i = 1;

	scanf("%c", &comando);
	while (comando != 'q'){

		for(int j=0; j<lim;j++){
			n[j]= 1 + (rand()%60);
		}
		verficaIgual(n, lim);

		organizar(n, lim);

		//if(mega == n){
		printf("\nJogo %i da megasena: \n", i);
		for(int k=0; k<lim; k++) printf("%i ",n[k] );
		printf("\n");
		//}
		scanf("%c", &comando);
		i++;
	}

	//getch();
	return 0;
}
