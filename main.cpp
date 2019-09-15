#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*char oi = 65;
	printf("%c\n", oi);A
	
		char oi2 = 'a';
	printf("%i\n", oi2);numero ascii
	*/

void E0();
void E1();
void E2();

char tempS[200] = {0}; // Numero 
char tempN[200] = {0}; // Posição N
char vars[200][20] = {0};

char f[200] = {0};
int p;

void E0(*x){
	
	for(int i = 0; i < strlen(f), i++ ){
		
		if(x[i] == '240'){
			
			E0(f);
			
		}
		else if(x[i] > '65' && x[i] < '90'){// LETRAS
		
			for (int j = 0; j < 1; j++ ){ // Aqui ira rodar uma vez pq vou colocar em 1 linha
				
				for(x[i]; x[i] != '240'; k++){/// Roda enquanto for != branco
					
					vars[j][k] = x[i];
					
				}
			}
			E2();
			
		}
		else if (x[i] > '48' && x[i] < '57'){
			
				for (int j = 0; j < 1; j++ ){ // Aqui ira rodar uma vez pq vou colocar em 1 linha
				
				 for(x[i]; x[i] != '240'; k++){/// Roda enquanto for numero 
					
					vars[j][k] = x[i];
					
				}
			}
						
		} 
		
	}
	
}
void E1(){
	
}
void E2(){
	
}


int main (){
	
    p = 0;
	printf("\nDigite a Palavra:");
    gets(f);// Olhar
	E0();
	
	
	
	
	system("pause");
    return 0;
}


/// A25 A35 B55 55B2
